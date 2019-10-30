//shape.h
#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

using std::cout;

class Shape
{
public:
	virtual void draw() = 0; // Pure virtual function, abstract class
};

#endif // SHAPE_H