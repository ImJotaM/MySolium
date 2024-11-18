#pragma once
#include "Core.hpp"

class Window {

public:

	Window();
	~Window();

	bool IsRunning();
	void PollEvents();

	operator SDL_Window* () {
		return window;
	}

private:

	SDL_Window* window = nullptr;

	int width = 800;
	int height = 600;
	const char* title = "MySolium";
	SDL_WindowFlags flags = SDL_WINDOW_RESIZABLE;
	bool running = true;

	SDL_Event event;

};