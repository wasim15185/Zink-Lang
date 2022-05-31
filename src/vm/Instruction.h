#pragma once
#include<cstdint>

/**
* What is Opcode (Operation code) ?
*
*
*/
namespace bytecodeInterpreter {
	enum Opcode :int8_t {
		EXIT,
		ADD_INT,
		PUSH_INT,
		PRINT_INT,
		NUM_INSTRUCTION
	};


	class Instruction
	{
	private:

	public:

		Opcode opcode;
		uint8_t p1;
		uint16_t p2;

	};

}