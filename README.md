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
To get an instance of the AssetHandler you need to call its static function "getInstance()". The
function checks if an instance of the asset handler exists and if not it creates one. It then returns
the instance of the asset handler as a pointer. Example: </br></br>
AssetHandler * assets = AssetHandler::getInstance();

### Add a Texture
The function that adds a texture to the asset handler, loads the texture itself. It requires three
parameters for it to work, two string values and one SDL_Renderer pointer value. The first string 
value works as tag, so that it can be referenced later by the getter function. The second string
value is the file path for the image you want to load in. The SDL_Renderer pointer parameter is
required to use the SDL function to load a texture. Example: </br></br>
assets->addTexture("image", "Assets/image.png", renderer);

### Add a Sound
Like the texture function, this function loads the sound file as well as stores it. It requires two
string parameters. The first string value again works as a tag so that the sound can be referenced
later by its getter function. The second string value works as the file path to load the sound from.
Example:</br></br>
assets->addSound("sound", "Assets/sound.wav");

### Add a Font
Following the pattern from the last two adding functions, this function loads the font file in order
to store it. The function requires three parameters, two string values and an integer value. The two
string values are as before, a tag and the file path. The integer value, is for the desired size of the
font. Example:</br></br>
assets->addFont("font", "Assets/font.ttf", 32);

### Getter functions
I have put all getter functions under this one heading as the three functions, while they return 
different values, take the same single string value. The string value works as the key for the
item you want to return, this value should be the same as one of the tags added. Examples:</br></br>
assets->getTexture("image");</br></br>
assets->getTexture("sound");</br></br>
assets->getTexture("font");


