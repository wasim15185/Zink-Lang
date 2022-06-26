#include "ByteCodeInterpreter.h"



namespace bytecodeInterpreter {

	 InstructionFunction gInstructionFunction[NUM_INSTRUCTION] = {
		ExitInstruction,
		AddIntInstruction,
		PushIntInstruction,
		PrintIntInstruction,
		CompairIntLessThanInstruction

	};

	/* init "InterpreterRegisters" class constructor */
	InterpreterRegisters::InterpreterRegisters(Instruction* code) {
		currentInstruction = code;
	}
	 
	/* Static method */ void ByteCodeInterpreter::Run(Instruction* code) {
		InterpreterRegisters registers(code);

		while (registers.currentInstruction != nullptr)
		{
			gInstructionFunction[registers.currentInstruction->opcode](registers);
		}

	}


	// EXIT
	void ExitInstruction(InterpreterRegisters& registers) {
		registers.currentInstruction = nullptr;

	};

	// ADD_INT
	void AddIntInstruction(InterpreterRegisters& registers){
		uint16_t rightHandSide = registers.stack.back();
		registers.stack.pop_back();
		uint16_t leftHandSide = registers.stack.back();
		registers.stack.pop_back();

		registers.stack.push_back(leftHandSide + rightHandSide);

		++registers.currentInstruction;

	};

	// PUSH_INT
	void PushIntInstruction(InterpreterRegisters& registers){
		registers.stack.push_back(registers.currentInstruction->p2);
		++registers.currentInstruction;

	};

	// PRINT_INT
	void PrintIntInstruction(InterpreterRegisters& registers){

		uint16_t number = registers.stack.back();
		registers.stack.pop_back();
		 cout << "Number is : " << number << endl;
		++registers.currentInstruction;
	};

	// COM_INT_LESS_THAN
	void CompairIntLessThanInstruction(InterpreterRegisters& registers){

		uint16_t rightHandSide = registers.stack.back();
		registers.stack.pop_back();
		uint16_t leftHandSide = registers.stack.back();
		registers.stack.pop_back();

		registers.stack.push_back(leftHandSide < rightHandSide); // here compairing is done . And we know in C++ true and false represent as 1 and 0 

		++registers.currentInstruction;
	};



}