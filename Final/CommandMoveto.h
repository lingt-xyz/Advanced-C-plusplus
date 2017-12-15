/*
 * CommandMoveto.h
 *
 * DO NOT CHANGE THIS FILE
 */

#ifndef COMMANDMOVETO_H_
#define COMMANDMOVETO_H_

#include "Command.h"
#include "Interpreter.h"

class CommandMoveto : public Command
{
public:
	CommandMoveto(Canvas & c, int x, int y);
	void execute(Interpreter * interpreter);
	~CommandMoveto();

};
#endif /* COMMANDMOVETO_H_ */
