cmake_minimum_required(VERSION 3.15 FATAL_ERROR)
project(hover CXX)

SET(CMAKE_RC_LINK_EXECUTABLE "${CMAKE_CXX_LINK_EXECUTABLE}")
set(CMAKE_MFC_FLAG 1)

include("${CMAKE_CURRENT_SOURCE_DIR}/cmake/reccmp.cmake")

add_executable(hover WIN32
    src/CBumperDoc.cpp
    src/CBumperView.cpp
    src/CMainFrame.cpp
    src/merlin.cpp
    src/hover_mfc.cpp
    src/hover.cpp
)

reccmp_add_target(hover ID hover)
target_compile_definitions(hover PRIVATE)
target_link_libraries(hover PRIVATE)

set_property(TARGET hover PROPERTY MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
set_property(TARGET hover PROPERTY OUTPUT_NAME "hover")
set_property(TARGET hover PROPERTY PREFIX "")
set_property(TARGET hover PROPERTY SUFFIX ".EXE")

set(CMAKE_CXX_FLAGS "/W3 /GX /D \"WIN32\" /D \"_WINDOWS\"")
set(CMAKE_CXX_FLAGS_DEBUG "/Gm /Zi /Od /D \"_DEBUG\"")
set(CMAKE_CXX_FLAGS_RELEASE "/O2 /D \"NDEBUG\"")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "/Zi /O2 /D \"NDEBUG\"")
set(CMAKE_CXX_FLAGS_MINSIZEREL "/Os /D \"NDEBUG\"")

set(CMAKE_EXE_LINKER_FLAGS "/machine:I386")
set(CMAKE_EXE_LINKER_FLAGS_DEBUG "/incremental:yes /debug")
set(CMAKE_EXE_LINKER_FLAGS_RELEASE "/incremental:no")
set(CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO "/incremental:no /debug")
set(CMAKE_EXE_LINKER_FLAGS_MINSIZEREL "/incremental:no")

# reccmp_configure()
