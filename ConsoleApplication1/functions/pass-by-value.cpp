#include <iostream>

/*
	If we pass the argument to a function by value and if
	try to modify the value inside the function then it will
	not effect the original variable value because when we
	pass by value then the copy of value is passed that's why
	it has no effect on a original variable.
*/

static void printAge(int age) {
	++age;
	std::cout << "age - in function: " << age << std::endl;
}

int main() {
	int personAge{ 23 };
	std::cout << "Before Calling function: " << personAge << std::endl;
	printAge(personAge);
	std::cout << "After Calling function: " << personAge << std::endl;
}
