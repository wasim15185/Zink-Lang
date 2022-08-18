 

add_library(
	front_end_lib 

	 
	"source/TokenType.hpp"
	"source/Token.cpp"
 "source/utils/object.cpp" 
 "source/utils/scanner.cpp"
)


target_include_directories( front_end_lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/source" )