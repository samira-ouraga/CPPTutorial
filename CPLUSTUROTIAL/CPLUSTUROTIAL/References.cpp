
//A variable can be declared as reference by putting ‘&’ in the declaration.

void multiply_by_two(int& par)
{
	par = par * 2;
	//x and par will change in the same place, w/0 & the function won't
	//change x value but thx to it it will 
}
/*
int main()
{
	int x{ 1 };
	//int y{ x }; // y is a copy of x 
	//y = 2;

	multiply_by_two(x);

	int& xref{ x };
	int const& xconstref{ x };

	//x = 2;   //assigns 2 to x
	xref = 3; // assigns value of 3 to x

	//int copy{ xref };

	return 0;

}
*/