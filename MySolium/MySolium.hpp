#pragma once
#include "Renderer.hpp"

class MySolium {

public:

	MySolium();
	~MySolium() = default;

	void Init();

private:

	Window window;
	Renderer renderer;

	void MS_Loop();

};