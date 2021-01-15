//
//  AppConstants.swift
//  SpeechToText
//
//  Created by x218507 on 13/01/21.
//

import Foundation
class AppConstants: NSObject {
    enum SpeechAPIKey: String {
        case dev = "AIzaSyDvxJmKXqH0Xw4x-ANl0laEsRAMAiPgYGY"
        case prod = "AIzaSyDvxJmKXqH0Xw4x-ANl0laEsRAMAiPgYGY1"
    }

    static let host = "speech.googleapis.com"
    static let sampleRate = 16000
    static let language = "en-US"

    enum APIHeaderKey: String {
        case apiKeyHeader = "X-Goog-Api-Key"
        case bundle = "X-Ios-Bundle-Identifier"
    }

    enum Messages: String {
        case recordingText = "Recording..."
        case recordText = "Record"
        case errorText = "Error"
    }
}
