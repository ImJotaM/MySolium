#pragma once
#include "Core.hpp"

struct MS_Drawble {
	virtual void Render(SDL_Renderer* renderer) = 0;
	virtual ~MS_Drawble() = default;
};

struct MS_Rect : MS_Drawble {

	SDL_FRect rect;
	SDL_Color color = { 0xff, 0xff, 0xff, 0xff };
	bool fill = false;

	MS_Rect(float x = 0, float y = 0, float w = 0, float h = 0, SDL_Color c = { 0xff, 0xff, 0xff, 0xff }, bool fill = false)
		: rect{ x, y, w, h }, color{ c }, fill(fill) {}

	void Render(SDL_Renderer* renderer) override {
		SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
		if (fill) {
			SDL_RenderFillRect(renderer, &rect);
		}
		else {
			SDL_RenderRect(renderer, &rect);
		}
	}

};

struct MS_Text : MS_Drawble {

	SDL_RenderText

};