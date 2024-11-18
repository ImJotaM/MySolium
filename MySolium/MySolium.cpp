#include "MySolium.hpp"

MySolium::MySolium() : renderer(window) {}

void MySolium::Init() {
	MS_Loop();
}

void MySolium::MS_Loop() {

	while (window.IsRunning()) {
		
		window.PollEvents();
		
		renderer.Clear();

		renderer.RenderPresent();

	}

}
