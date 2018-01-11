#include "NamedRectangle.h"
#include "Triangle.h"
#include "Shape.h"

void double_dimensions(Rectangle& rectangle)
{
	rectangle.resize(rectangle.get_width() * 2, rectangle.get_height() * 2);

}

int compute_area(const Shape& a_shape)
{
	return a_shape.area();
}
int main()
{
	NamedRectangle rec1{ "Sam", 3,4 };
	int rec_area{ rec1.area() };

	Rectangle rec2{ rec1 };

	double_dimensions(rec1);
	double_dimensions(rec2);

	Rectangle& rec1_ref{ rec1 };
	rec1_ref.resize(6, 9);
	rec_area = rec1.area();

	std::string recname = rec1.get_name();

	//Shape a_shape{};
	//Rectangle a_rectangle{};
	//Shape a_shape{a_rectangle};

	Triangle triangle{ 2,2 };

	rec_area = compute_area(rec1);
	int triangle_area = compute_area(triangle);


	return 0;
}
