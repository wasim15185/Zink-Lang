#include"Token.hpp"


using namespace zink;



/*
@brief :  Strating Point of Token Class  Initlization 
*/
 
frontend::Token::Token(TokenType* typeVal, std::string lexemeVal, Object& litVal, int lineVal) : type(typeVal), lexeme(lexemeVal), litaral(litVal) {
	this->line = lineVal;
}

frontend::TokenType* frontend::Token::getType() const {
	return type;
}

std::string frontend::Token::getLexeme() const {
	return lexeme ;
}

Object& frontend::Token::getLitaral() const {
	return litaral;
}

int frontend::Token::getLine() const {
	return line;

};


