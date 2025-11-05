#pragma once

#include "window.hpp"
#include "pipeline.hpp"
#include "swap_chain.hpp";
#include "model.hpp";

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
		glm::vec2 getMiddle(glm::vec2 a, glm::vec2 b);
		void sierpinski(glm::vec2 points[3], std::vector<glm::vec2>& result, int depth);
		void loadModels();
		void createPipelineLayout();
		void createPipeline();
		void createCommandBuffers();
		void drawFrame();
		void recreateSwapChain();
		void recordCommandBuffer(int imageIndex);

		Window window{ WIDTH, HEIGHT, "Hello World!" };
		CrspDevice device{ window };
		std::unique_ptr<SwapChain> swapChain;
		std::unique_ptr<Pipeline> pipeline;
		VkPipelineLayout pipelineLayout;
		std::vector<VkCommandBuffer> commandBuffers;
		std::unique_ptr<Model> model;
	};
}