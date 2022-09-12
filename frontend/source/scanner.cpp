#include"scanner.hpp"

using namespace zink;
using namespace frontend;
using namespace std;

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

	while (Scanner::isAlphaNumeric(Scanner::peek()))
	{
		Scanner::advance();
	}

	std::string text = source.substr(start, current);

	std::cout << "Text is -->" << text << std::endl;
	 
	map<std::string,TokenType>::iterator find = keywords.find(text); // find(text) : besically it gives the Address of 

	/*
	* 
	*	vector , map <-- each are same diagram
	* 
	*	vector arr = { 8 , 4 , 5} 
	* 
	* 
	*	+---------+					+---------+--------+--------+--------+
	*	|  1024	  |					|	8	  |	4	   |	5	|		     	
	*	|         |	------------>	|         |		   |		|	None(Null)	     
	*	+---------+					+---------+--------+--------+--------+
	*		arr							1024	1028	  1032      1036
	*									|							|
	*									|							|
	*								arr.begin()					arr.end() <-- [ this "arr.end()" Important ]
	*	
	*							arr.begin : gives addess of first elemnt
	*							arr.end : gives "next addess of last elemnt" <-- Important line
	* 
	*/

	TokenType token;

	if (find != keywords.end()) {
		token = find->second ;			//find =  { "if"		:	  IF	}
										//	     first			second
	}else {
		token = TokenType::END_OF_FILE;
	}


	addToken(token);


};


/*
* {@link #advance()} : This function gives next character in source string . <br/>
* <b>Note:</b> here {@link #advance()} method is <b>consuming character</b> using "source.charAt(current++);"
*
* @return char
*/

char Scanner::advance() {
	return source.at(current++);
}


/*
 * {@link #peek()} : This method is <b>Lookahead</b> . Because it does not consume character .
 *
 * @return char
 */
 char Scanner::peek() {
    if (isAtEnd()) return '\0'; // '\0' means null character in string array
    return source.at(current);
}

 char Scanner::peekNext() {
    if (current + 1 >= source.length()) return '\0';
    return source.at(current + 1);
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
     if (source.at(current) != expected) return false;

     current++;
     return true;
  }



/*
 * {@link #isDigit(char)} it check the character is digit of number or not !
 * @param c
 * @return boolean
 */
   bool isDigit(char c) {
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


void Scanner::addToken(TokenType& type) {


};

void Scanner::addToken(TokenType& type, Object& literal) {
	std::string text = source.substr(start, current);
	tokens.emplace_back(type, text, literal, line); // It is better from tokens.emplace_back(new Token(...))
};