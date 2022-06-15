#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>

#include "opengl_utils.h"

class Engine
{
public:
    Engine();
    ~Engine();

    void Run();

private:
    void Initialize();
    void Update(double dt);
    void Render();

    bool mIsRunning;
    GLFWwindow *mWindow;
};