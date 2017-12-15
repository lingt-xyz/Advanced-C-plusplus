/*
 * Canvas.cpp
 *
 * TODO Task 1: implement constructor
 *
 * TODO Task 2: implement operator<<
 */

#include "Canvas.h"
#include <cassert>
#include <iostream>

using namespace std;

Canvas::Canvas( int x, int y ):width(x), height(y) {
	myCanvas = new char[ height * width ];
    // TODO: implement remainder of constructor
	//       (call clear() for each point on the canvas)

	//call clear() for each point on the canvas
	for(int i = 0; i < width; ++i){
        for(int j = 0; j < height; ++j){
            clear(i, j);
        }
	}

}

void Canvas::set( int x, int y ) {
	int z = x + y * width;
	assert( z>= 0 && z < height*width && "set coordinates");
	myCanvas[ z ] = '*';
}

void Canvas::clear( int x, int y ) {
	int z = x + y * width;
	assert( z>= 0 && z < height*width && "clear coordinates");
	myCanvas[ z ] = '.';
}

int Canvas::getWidth(){
    return width;
}

int Canvas::getHeight(){
    return height;
}

Canvas::~Canvas() {
	delete[] myCanvas;
}


std::ostream &operator<<(std::ostream & os, const Canvas & canvas){
    for(int i = 0; i < canvas.height; ++i){
        for(int j = 0; j < canvas.width; ++j){
            os << canvas.myCanvas[canvas.width * i + j];
        }
        os << "\n";
	}
    return os;
}
