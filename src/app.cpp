#include "app.hpp"
#include "crsp_device.hpp"

namespace crsp {
	void App::run() {
		while (!window.shouldClose()) {
			glfwPollEvents();
		}
	}
}