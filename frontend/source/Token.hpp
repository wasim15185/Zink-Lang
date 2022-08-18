#pragma once 
#include<iostream>
#include "TokenType.hpp"
#include"utils/object.hpp"


namespace zink {

	namespace frontend {

		class Token {

			 
		
		 TokenType* type;
		 std::string lexeme ;
		 Object& litaral ;
		 int line;


		public:
			 
			Token( TokenType* typeVal, std::string lexemeVal, Object& litVal, int lineVal);
			/*Later Please use 'Destructor' */

			TokenType* getType() const ;
			std::string getLexeme() const ;
			Object& getLitaral() const ;
			int getLine() const;


		};


		
		

	}


}