#pragma once
#include "Window.hpp"
#include "Drawble.hpp"

class Renderer {

public:

	Renderer(Window& window);
	~Renderer();

	void Clear();
	
	void Draw(MS_Drawble& obj);
	
	void RenderPresent();

private:

	SDL_Renderer* renderer = nullptr;
	const char* name = NULL;
	SDL_Color bgDrawColor = { 0x00, 0x00, 0x00, 0xff };

};