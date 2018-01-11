

int main()
{
	int x{ 1 };
	int* pointer_to_x{ &x }; //points to the beginning of adress of x in memory
	int y{ *pointer_to_x }; //this finds the adress thx to pointer, and assigns it to y

	y = 3; //this is the value of y, x and y have the same address

	*pointer_to_x = 4;  //changes value of x

	int* p{ &x }; // p = address of x
	p = &y; // p = address value of y

	int j{ *p };  //j has the value of p, this is called dereferencing

	//p = nullptr;  p is set to null object
	//j = *p;  never direference a null pointer,this will throw an error  

	//pick reference over pointer bcz pointer that points to a null value will crash system
	//ref never refer to null value
	return 0;

}