#pragma once 
#include<iostream>
#include "TokenType.hpp"
namespace zink {

	namespace frontend {

		class Token {
		


		public:
			Token(const TokenType* type, std::string lexeme, Object litaralStr, int line);
			/*Later Please use 'Destructor' */




		};



		struct Object
		{
			 
			Object(std::string value);
			/*Later Please use 'Destructor' */
			int toInt;
			std::string toString;
			float toFloat;
		};

	}


}