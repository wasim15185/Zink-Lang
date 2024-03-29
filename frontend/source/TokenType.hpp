#pragma once

#ifndef TOKENTYPE_HPP
 
#define TOKENTYPE_HPP

// for static method in class how can access the method : using ScopeResolution Operator (::)

namespace zink {

		namespace frontend {

					enum TokenType :  uint8_t
					{
						// Single-character tokens
						LEFT_PAREN, RIGHT_PAREN, LEFT_CURLY, RIGHT_CURLY,
						COMMA, SEMICOLON, DOT, COLON, MINUS, PLUS, SLASH, STAR,

						// One or two character tokens
						EQUAL, EQUAL_EQUAL,
						BANG, BANG_EQUAL,
						GREATER, GREATER_EQUAL,
						LESS, LESS_EQUAL,
						ARROW,

						//Literals
						IDENTIFIER, STRING, NUMBER,

						//Keywords
						LET, CONST, FUN, CLASS, OBJECT , PRINT, UNIT, TRUE, FALSE, RETURN, // NEW,
						WHILE, IF, ELSE, AND ,OR  ,
						// 

						EXTENDS , IMPLEMENTS , OVERRIDE ,

						NULLL ,

						END_OF_FILE


					};


					/*
					This methods gives the name of "Token"
					*/
					std::string tokenString(TokenType t) { // In c++ ,  eg : `TokenTypeName::getName()`
							switch (t)
							{
							case zink::frontend::TokenType::LEFT_PAREN:
								return "LEFT_PAREN";
							case zink::frontend::TokenType::RIGHT_PAREN:
								return "RIGHT_PAREN";
							case zink::frontend::TokenType::LEFT_CURLY: // {
								return "LEFT_CURLY";
							case zink::frontend::TokenType::RIGHT_CURLY: // }
								return "RIGHT_CURLY";
							case zink::frontend::TokenType::COMMA:
								return "COMMA";
							case zink::frontend::TokenType::SEMICOLON:
								return "SEMICOLON";
							case zink::frontend::TokenType::DOT:
								return "DOT";
							case zink::frontend::TokenType::COLON:
								return "COLON";
							case zink::frontend::TokenType::MINUS:
								return "MINUS";
							case zink::frontend::TokenType::PLUS:
								return "PLUS";
							case zink::frontend::TokenType::SLASH:
								return "SLASH";
							case zink::frontend::TokenType::STAR: // * (MUTIPLY)
								return "STAR";
							case zink::frontend::TokenType::EQUAL:
								return "EQUAL";
							case zink::frontend::TokenType::EQUAL_EQUAL:
								return "EQUAL_EQUAL";
							case zink::frontend::TokenType::BANG:
								return "BANG";
							case zink::frontend::TokenType::BANG_EQUAL:
								return "BANG_EQUAL";
							case zink::frontend::TokenType::GREATER:
								return "GREATER";
							case zink::frontend::TokenType::GREATER_EQUAL:
								return "GREATER_EQUAL";
							case zink::frontend::TokenType::LESS:
								return "LESS";
							case zink::frontend::TokenType::LESS_EQUAL:
								return "LESS_EQUAL";
							case zink::frontend::TokenType::ARROW:
								return "ARROW";
							case zink::frontend::TokenType::IDENTIFIER:
								return "IDENTIFIER";
							case zink::frontend::TokenType::STRING:
								return "STRING";
							case zink::frontend::TokenType::NUMBER:
								return "NUMBER";
							case zink::frontend::TokenType::LET:
								return "LET";
							case zink::frontend::TokenType::CONST:
								return "CONST";
							case zink::frontend::TokenType::FUN:
								return "FUN";
							case zink::frontend::TokenType::CLASS:
								return "CLASS";
							case zink::frontend::TokenType::OBJECT:
								return "OBJECT";
							case zink::frontend::TokenType::PRINT:
								return "PRINT";
							case zink::frontend::TokenType::UNIT:
								return "UNIT";
							case zink::frontend::TokenType::TRUE:
								return "TRUE";
							case zink::frontend::TokenType::FALSE:
								return "FALSE";
							case zink::frontend::TokenType::RETURN:
								return "RETURN";
							case zink::frontend::TokenType::WHILE:
								return "WHILE";
							case zink::frontend::TokenType::IF:
								return "IF";
							case zink::frontend::TokenType::ELSE:
								return "ELSE";

							case zink::frontend::TokenType::AND:
								return "AND";
							case zink::frontend::TokenType::OR:
								return "OR";

							case zink::frontend::TokenType::EXTENDS: 
								return "EXTENDS";
							case zink::frontend::TokenType::IMPLEMENTS:
								return "IMPLEMENTS";
							case zink::frontend::TokenType::OVERRIDE:
								return "OVERRIDE";
							case zink::frontend::TokenType::NULLL :
								return "null";
							case zink::frontend::TokenType::END_OF_FILE:
								return "EOF";
							default:
								return "TOKEN_NOT_EXITS";
							}
						
						 };


		}


}

#endif TOKENTYPE_HPP