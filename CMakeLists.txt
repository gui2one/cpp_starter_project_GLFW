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

find_package(Vulkan)

if(Vulkan_FOUND)
    target_include_directories(${project_name} PRIVATE Vulkan::Vulkan)
    target_link_libraries(${project_name} Vulkan::Vulkan)
endif()