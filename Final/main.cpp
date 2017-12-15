//============================================================================
// Name        : Postscript level 0.1 interpreter main.cpp
// Author      : your_name_here
//============================================================================

#include "Canvas.h"
#include "Command.h"
#include "CommandMoveto.h"
#include "CommandLineto.h"
#include "Interpreter.h"
#include <iostream>
#include <fstream>
#include <cassert>

using namespace std;

Command * getCommand( istream & is, Canvas & cnv )
// TODO for Task 5
// reads a single command from an input stream
// called from readCommands below
// (no error handling needed -- assume input files are correct!)
{
	Command * cmd = 0;
	int arg1;
	int arg2;
	string command_str;
	if (is >> arg1){
        is >> arg2 >> command_str;
        //cout << arg1 << arg2 << command_str << endl;
        if(!command_str.compare("moveto")){
            cmd = new CommandMoveto(cnv, arg1, arg2);
        }else{
            cmd = new CommandLineto(cnv, arg1, arg2);
        }
    }
    is.clear();

	return cmd;
}

void readCommands( Interpreter & interpreter, Canvas & cnv, const char* fname)
{
	// reads Postscript commands from a file with name <fname>
	// DO NOT CHANGE THIS FUNCTION
	// -- only complete function getCommand() above (for Task 5)

	ifstream ifs( fname );
	Command * cmd;
	while ((cmd = getCommand (ifs, cnv)))
	{
		interpreter.addCommand(cmd);
	}
}

int main()
{
	// NOTE
	// ====
	// Work through this main program step-by-step,
	// uncommenting the tasks you are working on
	// see the test instruction sheet for details

	cout << "--- main start ---" << endl;
	// all generated output is written to "output.txt"
	ofstream ofs("output.txt");
	ofs << "Hello, Postscript!" << endl;


	// ----------------------------------------------------------------------------
	// ---------- TODO Task 1
	// ---------- Implement the constructor for the Canvas class
	ofs << "-------- Task 1 start -------- " << endl;
	// test default ctor
	Canvas cnv1;
    // now try the non-default ctor
    Canvas cnv2(20, 10);
	ofs << "-------- Task 1 done --------\n " << endl;



	// ----------------------------------------------------------------------------
	// ---------- TODO Task 2
	// ---------- Implement operator<< for the Canvas class
	ofs << "-------- Task 2 start --------" << endl;
	ofs << "---- Output cnv1 ----\n " << endl;
	ofs << cnv1 << endl;
	// let's set some dots into the corners for testing purposes
	cnv2.set(0, 0);
	cnv2.set(0, 9);
	cnv2.set(19, 0);
	cnv2.set(19, 9);
	// output the result
	ofs << "---- Output cnv2 ----\n " << endl;
	ofs << cnv2 << endl;
	ofs << "-------- Task 2 done --------\n " << endl;



	// ----------------------------------------------------------------------------
	// ---------- TODO Task 3
	// ---------- Implement the Interpreter class and the command "moveto"
	ofs << "-------- Task 3 start --------" << endl;
 	Canvas cnv3(10, 5);
	Interpreter ir;
	assert( ir.getX() == 0 && ir.getY() == 0 && "Task 3 test1" );
	// test command moveto( 4, 4 )
	ir.addCommand( new CommandMoveto(cnv3, 4, 4) );
	ir.execute();
	assert( ir.getX() == 4 && ir.getY() == 4 && "Task 3 test2" );
	ofs << cnv3 << endl;
	ofs << "-------- Task 3 done --------\n " << endl;



	// ----------------------------------------------------------------------------
	// ---------- TODO Task 4
	// ---------- Implement the commands "lineto"
	ofs << "-------- Task 4 start --------\n " << endl;
 	Canvas cnv4;
	Interpreter ir4;
	ir4.addCommand( new CommandMoveto(cnv4, 10, 10) );
	ir4.addCommand( new CommandLineto(cnv4, 0, 0) );
	ir4.addCommand( new CommandLineto(cnv4, 19, 0) );
	ir4.addCommand( new CommandLineto(cnv4, 10, 10) );
	ir4.execute();
	ofs << cnv4 << endl;
	ofs << "-------- Task 4 done --------\n " << endl;



	// ----------------------------------------------------------------------------
	// ---------- TODO Task 5
	// ---------- Implement reading commands from a file by completing
	// ---------- the function getCommand() above
	ofs << "-------- Task 5 start --------\n " << endl;
	Interpreter ir5;
	Canvas cnv5(41, 21);
	// Note: if you get "file not found" errors check that input.ps is in the right path
	//       (you can replace the relative path below with the full path on your system)
	readCommands( ir5, cnv5, "input.ps" );
	ir5.execute();
	ofs << cnv5 << endl;
	ofs << "-------- Task 5 done --------\n " << endl;

	ofs << "Goodbye, Postscript!" << endl;
	cout << "--- main end ---" << endl;
	return 0;
}
