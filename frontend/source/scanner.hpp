#include<iostream>
#include <vector>
#include "Token.hpp"
#include <map>

#ifndef SCANNER_HPP
#define SCANNER_HPP 
namespace zink {

	namespace frontend {
		class Scanner
		{
		private:
			std::string source;
			std::vector<Token> tokens;


			unsigned int start = 0; //  the first character in the lexeme being scanned

			unsigned int current = 0; //  the character currently being considered

			unsigned int line = 1; // tracks what source line

			std::map<std::string, TokenType> keywords;

			bool isAtEnd();

			/*
	 * What is an <b>Identifier</b> ? <br/>
	 * Ans : In Simple Word , Variable Names are called <b>Identifier</b> in Lox . <br/>
	 *
	 * {@link #identifier()} : It's help us to detect <b>Identifier</b> or <b>Reserved-words (Keywords)</b>
	 * It consumes stream characters as 'Identifier' add that as Token.
	 *
	 *
	 */

			void identifier();




		public:
			Scanner(std::string source);
			~Scanner();





		};
	}
}

#endif