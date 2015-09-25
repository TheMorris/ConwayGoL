#ifndef RES_PATH_H
#define RES_PATH_H

#include <iostream>
#include <string>
#include <SDL2/SDL.h>

std::string getResourcePath(const std::string &subDir = ""){
	#ifdef _WIN32
		const char SEPERATOR = '\\';
	#else
		const char SEPERATOR = '/';
	#endif

	static std::string baseRes;
	if(baseRes.empty()){
		char* basePath = SDL_GetBasePath();
		if(basePath){
			baseRes = basePath;
			SDL_free(basePath);
		}
		else{
			std::cerr << "Could not get path to Resources:" << SDL_GetError() << std::endl;
			return "";
		}
		size_t pos = baseRes.rfind("bin");
		baseRes = baseRes.substr(0, pos) + "res" + SEPERATOR;
	}
	return subDir.empty() ? baseRes : baseRes + subDir +SEPERATOR;
}

#endif
