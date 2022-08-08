cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (Zink-Lang "Zink.cpp" "Zink.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Zink-Lang PROPERTY CXX_STANDARD 20)
endif()