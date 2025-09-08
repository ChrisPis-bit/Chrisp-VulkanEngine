#pragma once

#include "window.hpp"
#include "pipeline.hpp"

namespace crsp {
	class App {
	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;

		void run();
	private:
		Window window{ WIDTH, HEIGHT, "Hello World!" };
		Pipeline pipeline{ "/shaders/simple_shader.vert.spv", "/shaders/simple_shader.frag.spv"};
	};
}