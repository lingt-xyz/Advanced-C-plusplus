/*
 * Command.h
 *
 * DO NOT CHANGE THIS FILE!
 */

#ifndef COMMAND_H_
#define COMMAND_H_

class Canvas;
class Interpreter;

class Command {

public:
	Command(Canvas & c, int x=0, int y=0);
	virtual void execute(Interpreter * i)=0;
	virtual ~Command();

protected:
	Canvas & myCanvas;
	int myX;
	int myY;
};

#endif /* COMMAND_H_ */
