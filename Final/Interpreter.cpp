/*
 * Interpreter.cpp
 *
 * TODO Task 3
 */

#include "Interpreter.h"
#include "Command.h"

using namespace std;

Interpreter::Interpreter():
		x(0), y(0)
{}

Interpreter::~Interpreter(){}

void Interpreter::addCommand( Command * cmd )
{
	myCommands.push_back(cmd);
}

void Interpreter::execute()
{
	for(Command * cmd : myCommands){
        cmd->execute(this);
	}
}

