//
//  GoogleSpeechManager.swift
//  SpeechToText
//
//  Created by x218507 on 15/01/21.
//

import Foundation
import UIKit
class GoogleSpeechManager: NSObject {
    // MARK: start the speech service

    class func startRecording() {
        _ = AudioController.sharedInstance.prepare(specifiedSampleRate: AppConstants.sampleRate)
        _ = AudioController.sharedInstance.start()
    }

    // MARK: stop the speech service

    class func stopRecording() {
        _ = AudioController.sharedInstance.stop()
        SpeechRecognitionService.sharedInstance.stopStreaming()
    }

    // MARK: play Auido

    class func playRecodedAudio(_ data: Data) {
        AudioController.sharedInstance.playAudio(data)
    }
}
