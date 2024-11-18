#include "MS_SDL.hpp"
#include <iostream>

void MS_START_SDL() {
	if (!SDL_Init(SDL_INIT_VIDEO)) {
		throw std::runtime_error(std::string("Erro ao inicializar SDL: ") + SDL_GetError());
	}
}

void MS_QUIT_SDL() {
	SDL_Quit();
}