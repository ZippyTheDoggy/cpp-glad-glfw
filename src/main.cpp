#include "GLFW/glfw3.h" // Include GLFW
#include <iostream>

void processInput(GLFWwindow* window) {
    // If the user presses the Escape key, close the window
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
        glfwSetWindowShouldClose(window, true);
    }
}

int main(int argc, char** args) {
    // Initialize GLFW
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return -1;
    }

    // Create a windowed mode window and its OpenGL context
    GLFWwindow* window = glfwCreateWindow(800, 600, "Simple OpenGL Window", nullptr, nullptr);
    if (!window) {
        std::cerr << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);

    // Main loop
    while (!glfwWindowShouldClose(window)) {
        // Process input
        processInput(window);

        // Set the clear color (background color) to blue
        glClearColor(0.0f, 0.0f, 1.0f, 1.0f); // RGBA format
        glClear(GL_COLOR_BUFFER_BIT); // Clear the screen

        // Swap buffers and poll IO events
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Clean up and close the window
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}