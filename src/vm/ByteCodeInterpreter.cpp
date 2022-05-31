#include "ByteCodeInterpreter.h"



namespace bytecodeInterpreter {

	 InstructionFunction gInstructionFunction[NUM_INSTRUCTION] = {
		ExitInstruction,
		AddIntInstruction,
		PushIntInstruction,
		PrintIntInstruction,
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



	void ExitInstruction(InterpreterRegisters& registers) {
		registers.currentInstruction = nullptr;

	};
	void AddIntInstruction(InterpreterRegisters& registers){
		uint16_t rightHandSide = registers.stack.back();
		registers.stack.pop_back();
		uint16_t leftHandSide = registers.stack.back();
		registers.stack.pop_back();

		registers.stack.push_back(leftHandSide + rightHandSide);

		++registers.currentInstruction;

	};
	void PushIntInstruction(InterpreterRegisters& registers){
		registers.stack.push_back(registers.currentInstruction->p2);
		++registers.currentInstruction;

	};
	void PrintIntInstruction(InterpreterRegisters& registers){

		uint16_t number = registers.stack.back();
		registers.stack.pop_back();
		 cout << "Number is : " << number << endl;
		++registers.currentInstruction;
	};



}