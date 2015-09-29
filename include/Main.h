#ifndef MAIN_H
#define MAIN_H

#include <SDL.h>
#include <iostream>
#include "World.h"

class Main{
	public:
		void doRenderCycle(double& updateDelay);
		bool init();
		void windowCloseAndDump();
		Main();
		~Main();
	private:
		World world;
		SDL_Rect* rect = NULL;
		SDL_Renderer* renderer = NULL;
		SDL_Window* window = NULL;
		void drawGrid();
		void update(double& delay);	
};

#endif
