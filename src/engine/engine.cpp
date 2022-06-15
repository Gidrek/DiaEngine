#include "engine.h"

Engine::Engine()
    : mIsRunning(false), mWindow()
{
    std::cout << "Welcome to Dia Engine \n";
}

Engine::~Engine()
{
    std::cout << "Finishing Dia Engine" << std::endl;
    glfwDestroyWindow(mWindow);
    glfwTerminate();
}

void Engine::Run()
{
    Initialize();

    while (!glfwWindowShouldClose(mWindow))
    {
        glfwPollEvents();
        Update(0);
        Render();
    }
}

void Engine::Initialize()
{
    // Initializing glfw
    if (!glfwInit())
    {
        std::cout << "Error initializing GLFW" << std::endl;
        return;
    }

    // Define version and compatibility settings
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // This is necessary to work in macOS

    // Create a windowed mode window and its OpenGL context
    mWindow = glfwCreateWindow(640, 480, "Adventure Game", nullptr, nullptr);
    if (!mWindow)
    {
        std::cout << "Error initializing GLFW Window" << std::endl;
        glfwTerminate();
        return;
    }

    glfwMakeContextCurrent(mWindow);

    // Initialize OpenGL context
    gladLoadGL();

    // TODO: Set error callback
    // TODO: Set input callback
    // TODO: Set framebuffer size callback

    OpenGLUtils::PrintSystemInfo();

    glViewport(0, 0, 640, 480);
    glClearColor(0.07f, 0.13f, 0.17f, 1.0f);

    mIsRunning = true;
}

void Engine::Update(double dt)
{
}

void Engine::Render()
{
    glClear(GL_COLOR_BUFFER_BIT);

    // Render here

    glfwSwapBuffers(mWindow);
}