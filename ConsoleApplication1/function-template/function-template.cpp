#include <iostream>

/*
	C++ provides function templates to avoid code repeatition.

	Function template is just a generic for the function and when
	we calling the function the compiler will generate the function
	code for us.

	template <typename T>: This line tells compiler that we are using
	function template and we are using T as a generic type which means
	the is replaced with whichever datatype we pass as an argument.

*/

template <typename T>
T maximum(T param1, T param2) {
	return param1 > param2 ? param1 : param2;
}

int main() {
	int intVar1{ 32 };
	int intVar2{ 87 };

	double doubleVar1{ 87.98 };
	double doubleVar2{ 87.97 };

	int result1 = maximum(intVar1, intVar2);
	double result2 = maximum(doubleVar1, doubleVar2);

	std::cout << "result1: " << result1 << std::endl;
	std::cout << "result2: " << result2 << std::endl;
}
