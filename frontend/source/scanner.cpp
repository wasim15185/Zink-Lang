#include"scanner.hpp"

using namespace zink;
using namespace frontend;

bool zink::frontend::Scanner::isAtEnd()
{
	return false;
}

Scanner::Scanner(std::string source)
{
	this->source = source;
}

Scanner::~Scanner()
{
	
}

bool Scanner::isAtEnd() {
	return current >= source.length() ;
}

/*
 * What is an <b>Identifier</b> ? <br/>
 * Ans : In Simple Word , Variable Names are called <b>Identifier</b> in Zink . <br/>
 *
 * {@link #identifier()} : It's help us to detect <b>Identifier</b> or <b>Reserved-words (Keywords)</b>
 * It consumes stream characters as 'Identifier' add that as Token.
 *
 */

void Scanner::identifier() {

};


/*
* {@link #advance()} : This function gives next character in source string . <br/>
* <b>Note:</b> here {@link #advance()} method is <b>consuming character</b> using "source.charAt(current++);"
*
* @return char
*/

char Scanner::advance() {
	return source[current++];
}


/*
 * {@link #peek()} : This method is <b>Lookahead</b> . Because it does not consume character .
 *
 * @return char
 */
 char Scanner::peek() {
    if (isAtEnd()) return '\0'; // '\0' means null character in string array
    return source[current];
}

 char Scanner::peekNext() {
    if (current + 1 >= source.length()) return '\0';
    return source[current + 1];
}



/*
 * {@link #match(char)} : Basically, this function check , if this is single token like( '>' , '=' , '<' ) etc . Then then the next token is '=' or not .
 * if we pass <b> '!' or '=' into {@link #match(char)} eg: match('!') </b> then it will check is current character is equal to parameter of {@link #match(char)}
 *
 *
 * </pre>
 *
 * @param expected
 * @return boolean
 */
  bool Scanner::match(char expected) {
     if (isAtEnd()) return false;
     if (source[current] != expected) return false;

     current++;
     return true;
  }



/*
 * {@link #isDigit(char)} it check the character is digit of number or not !
 * @param c
 * @return boolean
 */
   bool Scanner::isDigit(char c) {
      return c >= '0' && c <= '9';
  }



/*
 * {@link #isAlpha(char)} : it tells us that current character is 'English_Letter' ? If current character is 'English_Letter' then it will return 'True' other-wise it will return 'False'
 * @param c
 * @return
 */
bool Scanner::isAlpha(char c) {
	return	(c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')|| c == '_' ;
}



void Scanner::scanToken() {
	 
	
}