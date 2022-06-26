#pragma once

 #include<vector>
#include<cstdint>
#include<iostream>

#include "Instruction.cpp"
 

namespace bytecodeInterpreter {

	using namespace std;

	struct InterpreterRegisters {
		vector<uint16_t> stack;
		Instruction* currentInstruction;
		// constructor
		InterpreterRegisters(Instruction* code);
		 
	};




	void ExitInstruction(InterpreterRegisters& registers);
	void AddIntInstruction(InterpreterRegisters& registers);
	void PushIntInstruction(InterpreterRegisters& registers);
	void PrintIntInstruction(InterpreterRegisters& registers);
	void CompairIntLessThanInstruction(InterpreterRegisters& registers);



	typedef void (*InstructionFunction) (InterpreterRegisters& registers); // this a "function-pointer" it's like: int *a ;

	extern InstructionFunction gInstructionFunction[NUM_INSTRUCTION];

	class ByteCodeInterpreter
	{
	private:


	public:
		static void Run(Instruction* code);


	};

	 

}


