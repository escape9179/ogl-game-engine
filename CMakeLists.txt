cmake_minimum_required(VERSION 3.14)
project(OGLExperiments)

set(CMAKE_CXX_STANDARD 17)

add_executable(OGLExperiments src/Main.cpp src/engine/Triple.cpp src/engine/Entity.cpp src/engine/TextureUtils.cpp
        src/engine/buffer/Buffer.cpp src/engine/Color.cpp src/SquareEntity.cpp src/engine/Canvas.cpp src/engine/Canvas.h src/engine/Types.h src/engine/OpenGL.cpp src/engine/OpenGL.h src/TriangleEntity.cpp src/TriangleEntity.h src/engine/texture/Texture.cpp src/engine/texture/Texture.h src/ResourceManager.cpp src/ResourceManager.h src/engine/model/Model.cpp src/engine/model/Model.h)

find_library(GLEW glew32.lib lib)
find_library(GLM glm_static.lib lib)
find_library(GLFW3 glfw3.lib lib)
find_library(SOIL2 soil2-debug.lib lib)

include_directories(include)

target_link_libraries(OGLExperiments ${GLEW} ${GLM} ${GLFW3} ${SOIL2} OpenGL32)
