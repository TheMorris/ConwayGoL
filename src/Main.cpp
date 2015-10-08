#include <Main.h>

Main::Main(int width, int height, int tiles) : WINDOW_WIDTH(width), WINDOW_HEIGHT(height), TILESNUM(tiles){

}

Main::~Main(){
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}

void Main::doRenderCycle(double& updateDelay){
	this->drawGrid();
	this->update(updateDelay);
}

void Main::update(double& delay){

}

void Main::drawGrid(){
	int  width, height;
	SDL_Rect rect;
	rect.w = width;
	rect.h = height;
	for(unsigned int x = 0; x < WINDOW_WIDTH; x++){
		for(unsigned int y = 0; y < WINDOW_HEIGHT; y++){
			rect.x = TILESNUM * x;
			rect.y = TILESNUM * y;
			
			SDL_RenderDrawRect(renderer, &rect);
		}
	}
}

bool Main::init(){
	if(SDL_Init(SDL_INIT_VIDEO) < 0){
		std::cout << "Could not initialize! \n" << std::cerr << SDL_GetError();
		return false;
	}
	else{
		window = SDL_CreateWindow("Title", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN);	
		renderer = SDL_CreateRenderer(window, 0, SDL_RENDERER_ACCELERATED);
		return window == nullptr && renderer == nullptr;
	}
	
}


int main(){
	Main game(800, 400, 50);
	if(!game.init()){
		std::cout << "Exit with error code one!";
		return -1;
	}
	std::cout << "Test!" << std::endl;
	return 0;
}
