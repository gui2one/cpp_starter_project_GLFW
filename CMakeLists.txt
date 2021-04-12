cmake_minimum_required(VERSION 3.2)


set(project_name starter_project)
project(${project_name})

# add_definitions(-DDEBUG)
set(sources
    src/main.cpp
)


add_executable( ${project_name} #SHARED
    ${sources}
)


# GLFW
add_subdirectory(vendor/glfw)

include_directories(vendor/glfw/include)
target_link_libraries(${project_name} glfw ${GLFW_LIBRARIES})

# GLAD
add_subdirectory(vendor/glad)

include_directories(vendor/glad/include)
target_link_libraries(${project_name} glad ${GLAD_LIBRARIES})

# glm
include_directories(vendor/glm/)