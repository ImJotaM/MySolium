#include "Renderer.hpp"

Renderer::Renderer(Window& window) {

	renderer = SDL_CreateRenderer(window, name);

	if (!renderer) {
		throw std::runtime_error(std::string("Erro ao criar o renderizador: ") + SDL_GetError());
	}
}

Renderer::~Renderer() {
	SDL_DestroyRenderer(renderer);
}

void Renderer::Clear() {
	SDL_RenderClear(renderer);
}

void Renderer::Draw(MS_Drawble& obj) {
	obj.Render(renderer);
	SDL_SetRenderDrawColor(renderer, bgDrawColor.r, bgDrawColor.g, bgDrawColor.b, bgDrawColor.a);
}

void Renderer::RenderPresent() {
	SDL_RenderPresent(renderer);
}
