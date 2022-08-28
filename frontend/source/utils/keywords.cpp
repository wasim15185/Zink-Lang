#include"keywords.hpp"

using namespace zink;
using namespace frontend;

Keywords::Keywords()
{
	keywords["let"] = TokenType::LET;
	keywords["const"] = TokenType::CONST;
	keywords["fun"] = TokenType::FUN;
	keywords["true"] = TokenType::TRUE;
	keywords["false"] = TokenType::FALSE;
	keywords["class"] = TokenType::CLASS;
	keywords["null"] = TokenType::NULLL;
	keywords["or"] = TokenType::OR;
	keywords["and"] = TokenType::AND;
	keywords["if"] = TokenType::IF;
	keywords["else"] = TokenType::ELSE;
	keywords["print"] = TokenType::PRINT;
	keywords["return"] = TokenType::RETURN;
	keywords["while"] = TokenType::WHILE;
	keywords["extends"] = TokenType::EXTENDS;
	keywords["implements"] = TokenType::IMPLEMENTS;
	keywords["override"] = TokenType::OVERRIDE;
	keywords["object"] = TokenType::OBJECT;


}
Keywords::~Keywords()
{
	keywords.clear();
}

zink::frontend::TokenType Keywords::get(std::string keywordName)
{
	return keywords[keywordName];
}
