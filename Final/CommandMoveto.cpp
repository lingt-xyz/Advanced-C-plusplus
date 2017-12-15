/*
 * CommandMoveto.cpp
 *
 * TODO Task 3
 */

#include "CommandMoveto.h"
#include <iostream>
#include "Canvas.h"

using namespace std;

CommandMoveto::CommandMoveto( Canvas & c, int x, int y ):
	Command(c, x, y)
{}

void CommandMoveto::execute(Interpreter * interpreter)
{
    interpreter->setX(myX);
    interpreter->setY(myY);
}

CommandMoveto::~CommandMoveto()
{}
