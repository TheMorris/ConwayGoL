#include <Main.h>
#include <World.h>

void Main::doRenderCycle(double& updateDelay){
	this->drawGrid();
	this->update(updateDelay);
}

void Main::update(double& delay){

}

void Main::drawGrid(){

}


int main(){
	std::cout << "Test!" << std::endl;
	return 0;
}
