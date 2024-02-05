#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>

// const
#define GAME_NAME "Cars"

// variables
SDL_bool gameIsRunning = SDL_TRUE;
//SDL_bool menuVisible = SDL_TRUE;
//SDL_bool worldInit = SDL_FALSE;
//SDL_Rect player_srcrect;
//SDL_Rect player_dstrect;

#include "window.h"

int main(int argc, char* args[]) {
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) != 0) {
        fprintf(stderr, "Error initializing SDL.\n");
        return 1;
    };
    if (TTF_Init() != 0) {
        fprintf(stderr, "Error initializing SDL_ttf.\n");
        return 2;
    };
    
    if (!(IMG_Init(IMG_INIT_PNG) & IMG_INIT_PNG)) {
        fprintf(stderr, "Error initializing SDL_image.\n");
        return 3;
    };
    
    if(Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
        printf("Error initializing SDL_mixer: %s\n", Mix_GetError());
        return 4;
    };

    window_init();
    if (!window.self) {
        fprintf(stderr, "Error creating SDL Window.\n");
        return 6;
    };

    while (gameIsRunning == SDL_TRUE) {
        //input
        //update
        //draw
    };

    //clear,delete

    return 0;
};