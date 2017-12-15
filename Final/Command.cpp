/*
 * Command.cpp
 *
 * DO NOT CHANGE THIS FILE
 */

#include "Command.h"

class Canvas;

Command::Command( Canvas & c, int x, int y ):
		myCanvas(c), myX(x), myY(y)
{}

Command::~Command()
{}


