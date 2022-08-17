#pragma once 
#include<iostream>
#include "TokenType.hpp"
namespace zink {

	namespace frontend {

		class Token {
		


		public:
			Token(const TokenType* type, std::string lexeme, std::string litaralStr, int line);



		};



		struct Object
		{
			 
			Object(std::string value);
			int toInt;
			std::string toString;
			float toFloat;
		};

	}


}