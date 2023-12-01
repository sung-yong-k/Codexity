# VS Code Extension


## Prerequisite

The recquirement for the python program are listed in requirement.txt.


Two SAST tools are recquired for the extension to work: Infer, CppCheck. It is easy to install (usually just one command line depending on the OS).

For Infer:https://fbinfer.com/docs/next/getting-started
For CppCheck: https://cppcheck.sourceforge.io/

The extension words for CppCheck 2.9 (and above if the output format is the same) and Infer 1.1.0.

 


## Installation
 
The folder codexity contains the extension files. The folder Codexity_main contains all the necessary Python files to run the model and do the repair. These two folders can be on different places.

## Model Installation

The preshot repair works with three models: SantaCoder, StarCoder and StarCoder Plus. The installation of SantaCoder must follow the instruction of https://github.com/bigcode-project/starcoder.cpp. The starcoder.cpp folder must be placed at Codexity_main/Preshot. The SantaCoder model should at  Codexity_main/Preshot/starcoder.cpp/models/bigcode as precised in the relevant GitHub explanation.

For StarCoder and StarCoder Plus, the default path is set to the respective HugginFace repositories. The path to the model can be modified in their respective Python files.

## Launching the Extension

A simple example of how to use the VS Code extension is shown in this video: https://youtu.be/3Lh8qQN9nhY

The user needs to first launch the extension. For that, the user need to open the extenson.js file and press F5. This will launch the extension. Then, the user can select the project he/she is working on. To complete a code, the code snippet has to be highlighted. After launching Codexity, the user can select between the two mechanisms (iteration or preshot repair). The extension will the complete the code.

 
## Dataset





