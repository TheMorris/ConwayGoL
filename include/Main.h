#ifndef MAIN_H
#define MAIN_H

#include <SDL.h>
#include <iostream>

class World;
class Main{
	public:
		void doRenderCycle(double& updateDelay);
		Main();
		~Main();
	private:
		World* world;
		void drawGrid();
		void update(double& delay);
		
		
};
#endif
