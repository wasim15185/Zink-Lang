
#include<cstdint>


/**
* What is Opcode (Operation code) ? 
* 
*
*/
enum Opcode :int8_t {
	EXIT,
	ADD_INT,
	PUSH_INT,
	PRINT_INT
};


class Instruction 
{
private:

public:
	
	Opcode opcode;
	uint8_t p1;
	uint16_t p2;


		 

};

 