#pragma once
#include "Rectangle.h" //looks for it in project
#include <string>  //looks for it in system

class NamedRectangle : public Rectangle  //named red inherit from recta
{
public:
	NamedRectangle(){}
	NamedRectangle(std::string initial_name, int initial_width, int initial_height)
		: Rectangle{ initial_width, initial_height }, _name{ initial_name }
	{
	}

	std::string get_name() const { return _name; }
private:
	std::string _name;

};