#pragma once
#include "Shape.h"
//how to write a class 
class Rectangle : public Shape
{
private:
	int _width;
	int _height;

public:
	//default constructor initialized, not needed
	//this affects unitia and value in obj cpp
	Rectangle(): _width{1}, _height{1}
	{}

	//default constr tht takes a parameter
	Rectangle(int initial_width, int initial_height)
		:_width{initial_width}, _height{initial_height}
	{}

	int get_width() { return _width; }
	int get_height() { return _height; }

	void resize(int new_width, int new_height)
	{
		_width = new_width;
		_height = new_height;
	}

	//decalre it here since it is defined in rec cpp
	int area() const
	{
		return _width * _height;
	}
	
};
