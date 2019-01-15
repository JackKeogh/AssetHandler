#include "AssetHandler.h"

AssetHandler * AssetHandler::m_instance = 0;

void AssetHandler::addTexture(string tag, string filepath, SDL_Renderer * renderer)
{
	if (!IMG_Load(filepath.c_str()))
	{
		cout << IMG_GetError << " Failed to load texture." << endl;
	}
	else
	{
		m_textures[tag] = IMG_LoadTexture(renderer, filepath.c_str());
		cout << "Texture : " << tag << " loaded successfully" << endl;
	}
}

SDL_Texture * AssetHandler::getTexture(string tag)
{
	return m_textures[tag];
}

void AssetHandler::addSound(string tag, string filepath)
{
	if (!Mix_LoadWAV(filepath.c_str()))
	{
		cout << Mix_GetError << " Failed to load sound." << endl;
	}
	else
	{
		m_sounds[tag] = Mix_LoadWAV(filepath.c_str());
		cout << "Sound : " << tag << " loaded successfully" << endl;
	}
}

Mix_Chunk * AssetHandler::getSound(string tag)
{
	return m_sounds[tag];
}

void AssetHandler::addFont(string tag, string filepath, int size)
{
	if (!TTF_OpenFont(filepath.c_str(), size))
	{
		cout << TTF_GetError << " Failed to load font." << endl;
	}
	else
	{
		m_fonts[tag] = TTF_OpenFont(filepath.c_str(), size);
		cout << "Font : " << tag << " loaded successfully" << endl;
	}
}

TTF_Font * AssetHandler::getFont(string tag)
{
	return m_fonts[tag];
}

void AssetHandler::ClearTextures()
{
	m_textures.clear();
}

void AssetHandler::ClearSounds()
{
	m_sounds.clear();
}

void AssetHandler::ClearFonts()
{
	m_fonts.clear();
}

void AssetHandler::Clear()
{
	ClearTextures();
	ClearSounds();
	ClearFonts();
}
