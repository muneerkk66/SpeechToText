//
//  SpeechVM.swift
//  SpeechToText
//
//  Created by x218507 on 15/01/21.
//

import Foundation
import RxCocoa
import RxSwift

class SpeechViewModel: AudioControllerDelegate {
    public enum HomeError {
        case internetError(String)
        case serverMessage(String)
    }

    public let speechText: PublishSubject<String> = PublishSubject()
    public let loading: PublishSubject<Bool> = PublishSubject()
    public let isRecording: PublishSubject<Bool> = PublishSubject()
    public let error: PublishSubject<HomeError> = PublishSubject()
    public var isStarted: Bool = false
    public var audioData: NSMutableData!
    private let disposable = DisposeBag()

    public func recordAndConvertToText() {
        AudioController.sharedInstance.delegate = self
        audioData = NSMutableData()
        loading.onNext(false)
        isStarted = !isStarted
        if isStarted {
            GoogleSpeechManager.startRecording()
        } else {
            GoogleSpeechManager.stopRecording()
        }
        isRecording.onNext(isStarted)
    }

    public func playAudio() {
        GoogleSpeechManager.playRecodedAudio(audioData as Data)
    }

    public func processSampleData(_ data: Data) {
        loading.onNext(true)
        audioData.append(data)

        // MARK: - As per google, they recommend sending samples in 100ms chunks

        let chunkSize: Int /* bytes/chunk */ = Int(0.1 /* seconds/chunk */
            * Double(AppConstants.sampleRate) /* samples/second */
            * 2 /* bytes/sample */ )

        if audioData.length > chunkSize {
            SpeechRecognitionService.sharedInstance.streamAudioData(audioData,
                                                                    completion:
                                                                    { [weak self] response, error in
                                                                        guard let strongSelf = self else {
                                                                            return
                                                                        }

                                                                        if let error = error {
                                                                            strongSelf.error.onNext(.serverMessage(error.localizedDescription))
                                                                        } else if let response = response {
                                                                            var finished = false
                                                                            print(response)
                                                                            for result in response.resultsArray! {
                                                                                if let result = result as? StreamingRecognitionResult {
                                                                                    for alternative in result.alternativesArray {
                                                                                        if let alternative = alternative as? SpeechRecognitionAlternative {
                                                                                            if result.isFinal {
                                                                                                finished = true
                                                                                                strongSelf.speechText.onNext(alternative.transcript)
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                            if finished {
                                                                                GoogleSpeechManager.stopRecording()
                                                                            }
                                                                        }
        })
            audioData = NSMutableData()
        }
    }
}
