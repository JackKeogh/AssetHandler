# AssetHandler

This library to assist in the loading of textures, sounds and fonts. It's intended purpose is to reduce
memory leaks that would be caused through the loading of multiple textures, sounds and fonts.

## Installation
So you want to use this library in your SDL2-2.0.7 project? Well both release and debug libraries
are already built and up to date with the current solution.</br>
1. Set up a folder in your solution directory and call it AssetHandler.
2. Navigate into that folder and create two more, label one include and the other lib.
3. Navigate into the include folder and place the AssetHandler.h file into it.
4. Navigate out and into the lib folder, create two more folders. Label one debug and the other
release.
5. Navigate into the debug folder and place the AssetHandler.dll and AssetHandler.lib files, from the 
AssetHandler debug folder, into the folder.
6. Navigate back and into the release folder. Repeat the same process as step 5 but use the dll and lib
files from the release folder.
7. Finally, link to these library files in your project.

## How it works
The asset handler library follows the singleton pattern. Only one instance of this object can be
created. In the below paragraphs I will outline how to retreive the instance of the object, add
textures, sounds and fonts, get textures, sounds and fonts, and clear what is stored.

### Get an Instance
