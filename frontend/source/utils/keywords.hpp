#pragma once
#include<iostream>
#include <map>
#include <TokenType.hpp>

#ifndef KEYWORDS_HPP
#define KEYWORDS_HPP

class Keywords
{
private : 
	std::map< std::string ,  zink::frontend::TokenType > keywords;

public:
	Keywords();
	~Keywords();
	zink::frontend::TokenType get(std::string keywordName);
};

#endif KEYWORDS_HPP
