#include "Rectangle.h"
//object is an instance of a class
int main()
{
	int x; //uninitialized
	int y{}; //default initialized
	int z{ 1 }; //initialized with value 

	Rectangle uninitialized;
	Rectangle value{};
	Rectangle aggregate{ 2,3 };
	value.resize(5, 5);
	aggregate.resize(1, 2);

	int area_of_value{value.area()};
	int area_of_aggregate{aggregate.area()};

	int vw = value.get_width();
	int vh = value.get_height();

	return 0;
}