//
//  ViewController.swift
//  SpeechToText
//
//  Created by x218507 on 13/01/21.
//

import AVFoundation
import googleapis
import RxCocoa
import RxSwift
import UIKit

class ViewController: BaseViewController {
    @IBOutlet var speechTextView: UITextView!
    @IBOutlet var activityIndicator: UIActivityIndicatorView!
    @IBOutlet var micButton: UIButton!

    var speechViewModel = SpeechViewModel()
    let disposeBag = DisposeBag()

    override func viewDidLoad() {
        super.viewDidLoad()
        bindViewModel()
    }

    public func bindViewModel() {
        speechViewModel.speechText.asObservable().bind(to: speechTextView.rx.text).disposed(by: disposeBag)
        speechViewModel.loading.bind(to: activityIndicator.rx.isAnimating).disposed(by: disposeBag)
        speechViewModel.error.asObservable()
            .subscribe(onNext: { [weak self] error in
                guard let weakSelf = self else {
                    return
                }
                switch error {
                case let .internetError(message):
                    weakSelf.showAlert(AppConstants.Messages.errorText.rawValue, message)

                case let .serverMessage(message):
                    weakSelf.showAlert(AppConstants.Messages.errorText.rawValue, message)
                }
                    })
            .disposed(by: disposeBag)
        speechViewModel.isRecording.asObservable().subscribe(onNext: { [weak self] isRecording in
            guard let weakSelf = self else {
                return
            }
            weakSelf.micButton.setTitle(isRecording ? AppConstants.Messages.recordingText.rawValue : AppConstants.Messages.recordText.rawValue, for: .normal)
        }).disposed(by: disposeBag)
    }

    @IBAction func micButtonAction(_: UIButton) {
        speechViewModel.recordAndConvertToText()
    }

    @IBAction func playAudio(_: UIButton) {
        speechViewModel.playAudio()
    }
}
