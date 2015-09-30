#ifndef WORLD_H
#define WORLD_H

#include "res_path.h"
#include "Main.h"
#include <vector>
#include <list>

class World{
	
	public:
		World();
		~World();
		void drawPopulation(SDL_Window& window);
		void clear();


	private:
		void nextPopulation();	
		std::vector<std::vector<bool> > worldData;
		struct Point;
		bool neighbourCheck(unsigned int x, unsigned int y) const;
};


#endif
