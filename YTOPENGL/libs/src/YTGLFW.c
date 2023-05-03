

#define _GLFW_WIN32

#include "../external/glfw-3.3.8/src/osmesa_context.c"
#include "../external/glfw-3.3.8/src/context.c"
#include "../external/glfw-3.3.8/src/egl_context.c"
#include "../external/glfw-3.3.8/src/init.c"
#include "../external/glfw-3.3.8/src/input.c"
#include "../external/glfw-3.3.8/src/monitor.c"
#include "../external/glfw-3.3.8/src/vulkan.c"
#include "../external/glfw-3.3.8/src/window.c"
#include "../external/glfw-3.3.8/src/win32_init.c"
#include "../external/glfw-3.3.8/src/win32_joystick.c"
#include "../external/glfw-3.3.8/src/win32_thread.c"
#include "../external/glfw-3.3.8/src/win32_time.c"
#include "../external/glfw-3.3.8/src/win32_window.c"
#include "../external/glfw-3.3.8/src/win32_monitor.c"
#include "../external/glfw-3.3.8/src/wgl_context.c"


#undef GL_CONTEXT_FLAGS
#undef GL_CONTEXT_RELEASE_BEHAVIOR
#undef GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH
#undef GL_EXTENSIONS
#undef GL_NUM_EXTENSIONS
#undef GL_VERSION


#include "../external/glfw-3.3.8/include/GLFW/glfw3.h"
#include "../external/glad/include/glad/gl.h"
#include "../external/glad/src/gl.c"

#include "../include/logging.h"

GLFWwindow* window;

int YT_CreateWindow(int w, int h, const char* title)
{
    if (!glfwInit())
    {
        logging("ERROR : Unable to initialize GLFW");
        return -1;
    }

    window = glfwCreateWindow(w, h, title, NULL, NULL);
    if (!window)
    {
        logging("ERROR : Unable to create window");
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    gladLoadGL(glfwGetProcAddress);
    glClearColor(0.7f, 0.5f, 0.5f, 1.0f);
   return 1;
}

int YT_CheckClosed()
{
    return !glfwWindowShouldClose(window);
}

void YT_MainLoop()
{
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(window);
        glfwPollEvents();
}

void YT_QuitProgram()
{
    glfwTerminate();
}
