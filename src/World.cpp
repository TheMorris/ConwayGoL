#include <World.h>

void World::nextPopulation(){
	
}

void World::drawPopulation(SDL_Window& window){

}
//Add option for c++11 compilance.
void World::clear(){
	for(int x = 0; x < this->worldData.size(); x++){
		for(bool b : this->worldData[x]){
			b = false;
		}
	}
}





