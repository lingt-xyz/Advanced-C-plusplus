/*
 * CommandLineto.h
 *
 * DO NOT CHANGE THIS FILE!
 *
 */

#ifndef COMMANDLINETO_H_
#define COMMANDLINETO_H_

#include "Command.h"
#include "Interpreter.h"

class CommandLineto : public Command
{
public:
	CommandLineto(Canvas & c, int x, int y);
	void execute(Interpreter * interpreter);
	~CommandLineto();

};
#endif /* COMMANDLINETO_H_ */
