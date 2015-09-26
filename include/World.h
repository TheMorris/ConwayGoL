#ifndef WORLD_H
#define WORLD_H

#include "res_path.h"
#include "Main.h"
#include <vector>

class World{
	
	public:
		World();
		~World();
		void drawPopulation(SDL_Window& window);
		void clear();


	private:
		void nextPopulation();	
		std::vector<std::vector<bool> > worldData;
};

#endif
