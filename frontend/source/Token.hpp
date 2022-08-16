#pragma once 
#include<iostream>
#include "TokenType.hpp"
namespace zink {

	namespace frontend {

		class Token {

		public:
			Token(const TokenType* type, std::string lexeme, std::string litaralStr, int line);



		};



		struct Litaral
		{

		};

	}


}