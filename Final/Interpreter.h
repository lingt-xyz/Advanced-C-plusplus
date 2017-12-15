/*
 * Interpreter.h
 *
 *  DO NOT CHANGE THIS FILE
 *
 */

#ifndef INTERPRETER_H_
#define INTERPRETER_H_

#include "Command.h"
#include <vector>

using namespace std;

class Interpreter {

public:
	Interpreter();
	void addCommand( Command * cmd );
	void execute();
	int getX() {return x;};
	int getY() {return y;};
	void setX( int newX ) {x = newX;};
	void setY( int newY ) {y = newY;};
	~Interpreter();

private:
	int x;// current X
	int y;// current Y
	vector<Command *> myCommands;
};

#endif /* INTERPRETER_H_ */
