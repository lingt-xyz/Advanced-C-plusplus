/*
 * canvas.h
 *
 * TODO Task 2: add declarations for operator<<
 *
 * NOTE: do NOT change existing declarations!
 */

#ifndef CANVAS_H_
#define CANVAS_H_

#include <iostream>

using namespace std;

class Canvas {

    friend std::ostream &operator<<(std::ostream &, const Canvas &);

public:
	Canvas( int sizeX = 20, int sizeY = 20 );
	void set( int x, int y );
	void clear( int x, int y );
	~Canvas();
	int getWidth();
	int getHeight();

private:
	char* myCanvas;
	int width;
	int height;
};

#endif /* CANVAS_H_ */
