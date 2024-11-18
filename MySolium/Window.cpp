#include "Window.hpp"

Window::Window() : event() {

	window = SDL_CreateWindow(title, width, height, flags);

	if (!window) {
		throw std::runtime_error(std::string("Erro ao criar janela: ") + SDL_GetError());
	}
}

Window::~Window() {
	SDL_DestroyWindow(window);
}

bool Window::IsRunning() {
	return running;
}

void Window::PollEvents() {

	while (SDL_PollEvent(&event)) {

		if (event.type == SDL_EVENT_QUIT) {
			running = false;
		}

	}

}
