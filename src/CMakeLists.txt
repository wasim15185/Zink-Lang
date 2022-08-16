
project(Zing_Lang)



# Add source to this project's executable.
add_executable (PROJECT_NAME "Zink.cpp" "Zink.hpp")


target_link_libraries(PROJECT_NAME PRIVATE front_end_lib) # linking "front_end_lib" library with 'executable'


#if (CMAKE_VERSION VERSION_GREATER 3.12)
#  set_property(TARGET PROJECT_NAME PROPERTY CXX_STANDARD 20)
#endif()

