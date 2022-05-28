// Main.cpp : Defines the entry point for the application.
//

#include "Main.h"
#include<vector>
#include "vm/Instruction.cpp"
 

using namespace std;

int main()
{
	cout << "Bowie-Lang bytecode VM is Started ... \n" << endl;
	
	Instruction code[] = {
		Instruction(PUSH_INT, 0,4000),
		Instruction(PUSH_INT, 0,1042),
		Instruction(ADD_INT, 0,0),
		Instruction(PRINT_INT, 0,0),
		Instruction(EXIT,0,0),

	};

	// Stack code start from here .

	vector<uint16_t> stack;

	Instruction *currentStruction = code ;

	while (currentStruction != nullptr)
	{
		switch (currentStruction ->opcode)
		{
		case EXIT:

			currentStruction = nullptr;
			break;

		case ADD_INT:
			break;

		case PUSH_INT:
			//stack.push_back()
			break;
		
		case PRINT_INT:
			break;
		}
	}
	
	return 0;
}

