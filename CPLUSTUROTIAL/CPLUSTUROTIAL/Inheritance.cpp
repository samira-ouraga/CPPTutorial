#include "NamedRectangle.h"

int main()
{
	NamedRectangle rec1{ "Sam", 3,4 };
	int rec_area{ rec1.area() };

	Rectangle rec2{ rec1 };
	Rectangle& rec1_ref{ rec1 };
	rec1_ref.resize(6, 9);

	std::string recname = rec1.get_name();

	return 0;
}
