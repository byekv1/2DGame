#define SDL_MAIN_HANDLED

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "../include/Log/Log.h"

//
// Compile: g++ *.cpp -I"C:/libsdl/include" -L"C:/libsdl/lib" -lmingw32 -lSDL2main -lSDL2 -o test.exe
// 2: g++ *.cpp -I"C:/libsdl/include" -L"C:/libsdl/lib" -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -o test.exe
//

const char* gameTitle = "2DGame";
const int width = 1280;
const int height = 720;
const int x = 0;
const int y = 0;

int main(int argc, char *argv[]) {

    //
    //  Initialization
    //

    bool quiting = false;
    Log::setLogLevel(Log::Trace);
    std::cout << gameTitle << " started..." << std::endl;

    SDL_Event event;

    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_Window *win = SDL_CreateWindow(
        gameTitle, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, 0
        );
    if (!win) {
        Log::write("Window not created...", Log::Warning);
        return -1;
    }

    SDL_Renderer *rend = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);
    if (!rend) {
        Log::write("Renderer not created...", Log::Warning);
        return -1;
    }

    SDL_Surface *gSurf = SDL_GetWindowSurface(win);
    SDL_Surface *img = IMG_Load("../rsrc/img/gunbarrel.jpeg");

    SDL_Texture *texture = SDL_CreateTextureFromSurface(rend, img);

    //
    //  Game Loop
    //

    while(!quiting) {

        //
        //  Process Input
        //

        SDL_PollEvent(&event);

        if (event.type == SDL_QUIT) {
            Log::write("ALT+F4 typed...", Log::Notification);
            quiting = true;
        }

        switch(event.key.keysym.sym) {
            default:
                break;
        }

        //
        //  Update {Object, positions, etc. }
        //

        //
        //  Render to Display
        //

        SDL_RenderClear(rend);
        SDL_RenderCopy(rend, texture, NULL, NULL);
        SDL_RenderPresent(rend);

    }

    //
    //  Terminate Sequence
    //

    Log::write("Escape Sequence Activated...", Log::Trace);

    SDL_DestroyTexture(texture);
    texture = nullptr;
    SDL_FreeSurface(img);
    img = nullptr;
    SDL_FreeSurface(gSurf);
    gSurf = nullptr;
    SDL_DestroyRenderer(rend);
    rend = nullptr;
    SDL_DestroyWindow(win);
    win = nullptr;

    SDL_Quit();

    std::cout << gameTitle << " ended..." << std::endl;
    std::cout << "Press Enter to Terminate..." << std::endl;
    std::cin.get();

   return 0;

}