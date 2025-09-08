#include "app.hpp"

// std
#include <cstdlib>
#include <iostream>
#include <stdexcept>

int main()
{
	crsp::App app{};

	try {
		app.run();
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
		return EXIT_FAILURE;
	}
	//crsp::Window* window = new crsp::Window(800, 600, "ChrispEngine");

	//uint32_t extensionCount = 0;
	//vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);



	//std::cout << extensionCount << " extensions supported\n";

	//glm::mat4 matrix;
	//glm::vec4 vec;
	//auto test = matrix * vec;

	//while (!glfwWindowShouldClose(window->window)) {
	//	glfwPollEvents();
	//}


	return EXIT_SUCCESS;
}