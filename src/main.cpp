#include <iostream>
#include <SDL2.h>

int main(int argc, char** args){

  SDL_Surface* winSurface = NULL;
  SDL_Window* window = NULL;

  // If fails to init
  if( SDL_Init(SDL_INIT_EVERYTHING) < 0 )
  {
    std::cout << "error Init SDL " << SDL_GetError() << '\n';
    system("pause");
    return 1;
  }

  // Create win
  window = SDL_CreateWindow( "Planet-sim", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1280,720, SDL_WINDOW_SHOW);

  std::cout << "done\n";

  return 0;
}
