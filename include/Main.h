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
		Main(int width, int height, int tiles);
		~Main();

	private:
		const unsigned int WINDOW_WIDTH, WINDOW_HEIGHT;
		unsigned int TILESNUM;
		World world();
		SDL_Renderer* renderer = NULL;
		SDL_Window* window = NULL;
		void drawGrid();
		void update(double& delay);	
};

#endif
