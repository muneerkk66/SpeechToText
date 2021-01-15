
//
//  SpeechRecognitionService.swift
//  SpeechToText
//
//  Created by x218507 on 15/01/21.
//

import Foundation
import googleapis

typealias SpeechRecognitionCompletionHandler = (StreamingRecognizeResponse?, NSError?) -> Void

class SpeechRecognitionService {
    private var streaming = false

    private var client: Speech!
    private var writer: GRXBufferedPipe!
    private var call: GRPCProtoCall!

    static let sharedInstance = SpeechRecognitionService()

    public func streamAudioData(_ audioData: NSData, completion: @escaping SpeechRecognitionCompletionHandler) {
        if !streaming {
            // MARK: - if we aren't already streaming, set up a gRPC connection

            client = Speech(host: AppConstants.host)
            writer = GRXBufferedPipe()
            call = client.rpcToStreamingRecognize(withRequestsWriter: writer,
                                                  eventHandler:
                                                  { _, response, error in
                                                      completion(response, error as NSError?)
      })

            // MARK: - authenticate using an API key obtained from the Google Cloud Console

            call.requestHeaders.setObject(NSString(string: AppConstants.SpeechAPIKey.dev.rawValue),
                                          forKey: NSString(string: AppConstants.APIHeaderKey.apiKeyHeader.rawValue))

            // MARK: - if the API key has a bundle ID restriction, specify the bundle ID like this

            call.requestHeaders.setObject(NSString(string: Bundle.main.bundleIdentifier!),
                                          forKey: NSString(string: AppConstants.APIHeaderKey.bundle.rawValue))

            call.start()
            streaming = true

            // MARK: - send an initial request message to configure the service

            let recognitionConfig = RecognitionConfig()
            recognitionConfig.encoding = .linear16
            recognitionConfig.sampleRateHertz = Int32(AppConstants.sampleRate)
            recognitionConfig.languageCode = AppConstants.language
            recognitionConfig.maxAlternatives = 30
            recognitionConfig.enableWordTimeOffsets = true

            let streamingRecognitionConfig = StreamingRecognitionConfig()
            streamingRecognitionConfig.config = recognitionConfig
            streamingRecognitionConfig.singleUtterance = false
            streamingRecognitionConfig.interimResults = true

            let streamingRecognizeRequest = StreamingRecognizeRequest()
            streamingRecognizeRequest.streamingConfig = streamingRecognitionConfig

            writer.writeValue(streamingRecognizeRequest)
        }

        // MARK: - send a request message containing the audio data

        let streamingRecognizeRequest = StreamingRecognizeRequest()
        streamingRecognizeRequest.audioContent = audioData as Data
        writer.writeValue(streamingRecognizeRequest)
    }

    public func stopStreaming() {
        if !streaming {
            return
        }
        writer.finishWithError(nil)
        streaming = false
    }

    public func isStreaming() -> Bool {
        return streaming
    }
}
