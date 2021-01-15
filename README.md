#  SpeechToText - A Speech To Text App is written in Swift

## Features
1. Convert audio to text
2. Using google speech text API - https://cloud.google.com/speech-to-text

## Requirements

**iOS 14.0+ / macOS 10.14.4
**Xcode 12+
**Swift 5+

 ## Architecture
 
 ** We have used MVVM Architecture. Model–view–viewmodel (MVVM) is a software architectural pattern. MVVM facilitates a separation of development of the graphical user interface – be it via a markup language or GUI code – from development of the business logic or back-end logic (the data model).

## Components
### ViewController
1. AudioController 
   This controller will be the responsible for the audio record and play operation
2. ViewController 
   This is the main Viewcontroller and all the user actions will be taken care in this controller.
 
### ViewModel
ViewModel interacts with model and also prepares observable(s) that can be observed by a View. One of the important implementation strategies of this layer is to decouple it from the View, i.e, ViewModel should not be aware about the view who is interacting with.

1. SpeechVM
   VM interact with GoogleSpeechManager and the result is bind with observable.
       
### SpeechRecognitionService
this is the network layer create to handle the API calls. Every request will goes this layer. We have used Google SpeechRecognition class to handle API calls.

### GoogleSpeechManager
This Manager handle the audio operation in both ways.

### ThirdParties
1. RxSwift
2. RxCocoa
3. Google Speech API

All the license are mentioned in the Utilities/License.txt file

### Code management
Used gitflow method in this repository.
Gitflow Workflow is a Git workflow that helps with continuous software development and implementing DevOps practices. It was first published and made popular by Vincent Driessen at nvie. The Gitflow Workflow defines a strict branching model designed around the project release. This provides a robust framework for managing larger projects. 

     

## How To Install
1. Clone the repository using git clone command : git clone https://github.com/muneerkk66/SpeechToText.git (you can also use ssh/github CLI ).
2. Go to project directory
3. install pod using cocopod App or using terminal command
4. Open project Workspace then run the code.




