#include <stdio.h>
#include <assert.h>
#include <string>

#include <glfw/glfw3.h>
int main(int argc, char **argv)
{

    if (!glfwInit())
    {
        printf("problem with GLFW\n");
        return -1;
    }

    GLFWwindow *window = glfwCreateWindow(640, 360, "Starter Project", NULL, NULL);

    while (!glfwWindowShouldClose(window))
    {

        glfwPollEvents();
    }
    printf("Yeah !!!! \n");
    return 0;
}