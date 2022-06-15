#include "opengl_utils.h"

void OpenGLUtils::PrintSystemInfo()
{
    std::cout << "OpenGL Loaded \n"
              << "Vendor: " << glGetString(GL_VENDOR) << "\n"
              << "Renderer: " << glGetString(GL_RENDERER) << "\n"
              << "Version: " << glGetString(GL_VERSION)
              << std::endl;
}