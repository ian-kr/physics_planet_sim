#include <SDL3/SDL_error.h>
#include <SDL3/SDL_events.h>
#include <SDL3/SDL_surface.h>
#include <SDL3/SDL_video.h>
#include <SDL3/SDL_main.h>
#include <SDL3/SDL_render.h>
#include <string>
#include <iostream>
//Constants
const int SCREEN_WIDTH = 600;
const int SCREEN_HEIGHT = 600;

//Global
SDL_Window* gWindow = nullptr;
SDL_Surface* gScreenSurface = nullptr;
SDL_Renderer* gRenderer = nullptr;

//Prototypes
bool init();
bool load();

int main (int argc, char *argv[]) {
  
 if( init() == false ){
   std::cerr << "Unable to initialize program!\n";
 }
 else{
   gWindow = SDL_CreateWindow("Planet_simulation", SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_RESIZABLE);
   if(gWindow == nullptr){
     std::cerr << "Failed to Create Window\n";
   }
   gRenderer = SDL_CreateRenderer(gWindow, NULL);
   if(gRenderer == nullptr){
     std::cerr << "Failed to create renderer";
     SDL_DestroyWindow(gWindow);
     SDL_Quit();
     return 1;
   }

   bool quit = false;

   SDL_Event e;
   
   // Main Loop
   while(!quit){

     while(SDL_PollEvent(&e) != 0){
       if(e.type == SDL_EVENT_QUIT){
         quit = true;
       }
     }

     SDL_SetRenderDrawColor(gRenderer,0, 0, 0, 255);
     SDL_RenderClear(gRenderer);

     SDL_RenderPresent(gRenderer);
   }
 }

 SDL_DestroyRenderer(gRenderer);
 SDL_DestroyWindow(gWindow);
 SDL_Quit();

  return 0;
}


bool init(){

  bool success = true;

  if(SDL_Init( SDL_INIT_VIDEO ) == false){
    std::cerr << "Window could not init\n";
    success = false ;
  }
  else{
    gScreenSurface = SDL_GetWindowSurface(gWindow);
  }
  return success;
}
