# CMakeList.txt : CMake project for Bowie-Lang, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (Bowie-Lang "Main.cpp" "Main.h"  "vm/Instruction.cpp"  "vm/ByteCodeInterpreter.cpp"   "vm/ByteCodeInterpreter.h" "vm/Instruction.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Bowie-Lang PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
