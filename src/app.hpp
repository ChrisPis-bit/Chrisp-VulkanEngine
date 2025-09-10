#pragma once

#include "window.hpp"
#include "pipeline.hpp"
#include "swap_chain.hpp";

// std
#include <memory>
#include <vector>

namespace crsp {
	class App {
	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;

		App();
		~App();

		App(const App&) = delete;
		App& operator=(const App&) = delete;

		void run();
	private:
		void createPipelineLayout();
		void createPipeline();
		void createCommandBuffers();
		void drawFrame();

		Window window{ WIDTH, HEIGHT, "Hello World!" };
		CrspDevice device{ window };
		SwapChain swapChain{ device, window.getExtent() };
		std::unique_ptr<Pipeline> pipeline;
		VkPipelineLayout pipelineLayout;
		std::vector<VkCommandBuffer> commandBuffers;
	};
}