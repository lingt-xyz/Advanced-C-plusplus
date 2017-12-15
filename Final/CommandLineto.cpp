/*
 * CommandLineto.cpp
 *
 *  Author: <your_name_here>
 *
 *  TODO Task 4
 */

#include "Canvas.h"
#include "CommandLineto.h"
#include <cstdlib>
#include <cmath>

using namespace std;

CommandLineto::CommandLineto( Canvas & c, int x, int y ):
	Command(c, x, y)
{}

void CommandLineto::execute(Interpreter * interpreter)
{
    int nowX = interpreter->getX();//current X
	int nowY = interpreter->getY();//current Y

    // slope
    double slope = floor(double(myY-nowY)/(myX-nowX) + 0.5);
    //cout << myY << " " << nowY << "  " << myX << " " << nowX;
    //cout << "slope" << slope << endl;
    //int x = nowX;
    //int y = slope * (x-myX) + myY;

    if(nowX < myX){//move right
        for(; nowX <= myX; ++nowX){
            //myCanvas.set(nowX, myCanvas.height - nowY);
            //myCanvas.set(nowX, slope * (nowX-myX) + myY);
            nowY = slope * (nowX-myX) + myY;
            //cout  << nowX << "  "  << nowY  << " "<< myX << " "<<  myY << endl;
            //cout << x << ' '<< y << ":" << myCanvas.height - y - 1 << ' ' << x << endl;
            myCanvas.set(nowX, myCanvas.getHeight() - nowY - 1);
        }
        --nowX;
    }else if(nowX > myX){// move left
        for(; nowX >= myX; --nowX){//(10,10)->(0,0), (19,0)->(10,10)
            //myCanvas.set(nowX, myCanvas.height - nowY);
            //cout << nowX << nowY << endl;
            //myCanvas.set(nowX, slope * (nowX-myX) + myY);
            nowY = slope * (nowX-myX) + myY;
            //cout  << nowX << "  "  << nowY  << " "<< myX << " "<<  myY << endl;
            //cout <<slope;
            //cout << x << ' '<< y << ":" << myCanvas.height - y - 1<< ' ' << x << endl;
            myCanvas.set(nowX, myCanvas.getHeight() - nowY - 1);

        }
        ++nowX;
    }else{//vertical
        if(nowY < myY){//move up
            for(; nowY <= myY; ++nowY){
                //myCanvas.set(nowX, myCanvas.height - nowY);
                //cout << nowX << nowY << endl;
                //myCanvas.set(nowX, nowY);
                myCanvas.set(nowX, myCanvas.getHeight() - nowY - 1);
            }
            --nowY;
        }else{//move down
            for(; nowY >= myY; --nowY){
                //myCanvas.set(nowX, myCanvas.height - nowY);
                //cout << nowX << nowY << endl;
                //myCanvas.set(nowX, nowY);
                myCanvas.set(nowX, myCanvas.getHeight() - nowY - 1);
            }
            ++nowY;
        }

    }
    interpreter->setX(nowX);
    interpreter->setY(nowY);
}

CommandLineto::~CommandLineto()
{}
