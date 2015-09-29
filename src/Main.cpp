#include <Main.h>

void Main::doRenderCycle(double& updateDelay){
	this->drawGrid();
	this->update(updateDelay);
}

void Main::update(double& delay){

}

void Main::drawGrid(){
}


int main(){
	Main game;
	//game.	
	std::cout << "Test!" << std::endl;
	return 0;
}
