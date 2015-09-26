#include <World.h>

void World::nextPopulation(){
	
}

void World::drawPopulation(SDL_Window& window){

}
//Add option for c++11 compilance-options.
void World::clear(){
	for(int x : World::worldData.size()){
		World::worldData[x].clear();	
	}
}





