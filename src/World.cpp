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

	for(unsigned int x = 0; x < worldData.size(); x++){
		for(unsigned int y = 0; y < worldData[x].size(); y++){

		}
	}
}

void World::drawPopulation(SDL_Window& window){

}

//Add option for c++11 compilance.
void World::clear(){
	for (unsigned int x = 0; x < worldData.size(); x++){
		for (unsigned int y = 0 ; y < worldData[x].size() ; y++){
			worldData[x][y] == false;		
		}
	}
}

bool World::neighbourCheck(unsigned int x, unsigned int y) const{
		int neighbours = 0;
		for (unsigned int i = x - 1; i <= x + 1; i++){
			for (unsigned int j = y - 1; j <= y + 1; j++){
				if (i < this->worldData.size() && j < this->worldData[i].size() && i >= 0 && j >= 0){
					neighbours++;
				}
			}
		}
		if (this->worldData[x][y] && neighbours == 2){
			return true;
		}
		else if (neighbours == 3){
			return true;
		}
		else{
			return false;
		}
}

