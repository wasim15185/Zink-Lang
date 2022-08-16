 

add_library(
	front_end_lib 

	 
	
	"source/Token.cpp"
)


target_include_directories( front_end_lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/source" )