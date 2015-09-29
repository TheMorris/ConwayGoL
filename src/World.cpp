#include <World.h>

World::World(){

}


World::~World(){

}

struct World::Point{
	unsigned int x;
	unsigned int y;
};

void World::nextPopulation(){
	std::vector<std::vector<bool> > worldDataCache(worldData);
	std::list<Point> activeCells;

}

void World::drawPopulation(SDL_Window& window){

}

//Add option for c++11 compilance.
void World::clear(){
	for(unsigned int x = 0; x < this->worldData.size(); x++){
		for(bool b : this->worldData[x]){
			b = false;
		}
	}
}
