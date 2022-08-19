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
			 * Ans : In Simple Word , Variable Names are called <b>Identifier</b> in Zink . <br/>
			 *
			 * {@link #identifier()} : It's help us to detect <b>Identifier</b> or <b>Reserved-words (Keywords)</b>
			 * It consumes stream characters as 'Identifier' add that as Token.
			 *
			 */

			void identifier();

			/*
			 * {@link #isAlpha(char)} : it tells us that current character is 'English_Letter' ? If current character is 'English_Letter' then it will return 'True' other-wise it will return 'False'
			 * @param c
			 * @return
			 */

			bool isAlpha(char c);

			/*
			 * {@link #isAlphaNumeric(char)} : it tells us that current character is 'Number' or 'English_Letter' ?
			 * @param c
			 * @return
			 * 
			 */

			bool isAlphaNumeric(char c);

		   /*
			* {@link #advance()} : This function gives next character in source string . <br/>
			* <b>Note:</b> here {@link #advance()} method is <b>consuming character</b> using "source.charAt(current++);"
			*
			* @return char
			*/
			char advance();

			/*
			 * {@link #peek()} : This method is <b>Lookahead</b> . Because it does not consume character .
			 *
			 * @return char
			 */

			char peek();

			char peekNext();

			/*
			 * {@link #match(char)} : Basically, this function check , if this is single token like( '>' , '=' , '<' ) etc . Then then the next token is '=' or not .
			 * if we pass <b> '!' or '=' into {@link #match(char)} eg: match('!') </b> then it will check is current character is equal to parameter of {@link #match(char)}
			 *
			 *
			 * </pre>
			 *
			 * @param expected
			 * @return bool
			 * 
			 */
			bool match(char expected);

			/*
			 * {@link #isDigit(char)} it check the character is digit of number or not !
			 * @param c
			 * @return boolean
			 */
			 bool isDigit(char c);

			 /* 
			 * Check This Number or Not
			 */

			 void  number();


			 void string() ;

			/*
			 * {@link #addToken(TokenType)} : It takes {@link TokenType } and get sub-string from using <b>start</b> and <b>current</b>
			 *
			 * @param type
			 */
			 void addToken(TokenType type);

			 void addToken(TokenType type, Object literal);



		public:
			Scanner(std::string source);
			~Scanner();
			std::vector<Token> scanTokens();




		};
	}
}

#endif