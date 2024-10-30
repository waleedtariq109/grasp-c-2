#include <iostream>

template <typename T>
T maximum(T param1, T param2) {
	return param1 > param2 ? param1 : param2;
}

int main() {
	int intVar1{ 98 };
	int intVar2{ 87 };

	double doubleVar1{ 87.98 };
	double doubleVar2{ 99.87 };

	std::string stringVar1{ "Hello" };
	std::string stringVar2{ "World" };

	/*
		Implicit type deduction means we pass a params of same type
		and compiler will generate the function based on our template
		function and replace the type pleceholder with passed data types.

		And all this happend automatically which we call implicit type deduction
	*/

	maximum(intVar1, intVar2); // Implicit deduction to int
	maximum(doubleVar1, doubleVar2); // Implicit deduction to double
	maximum(stringVar1, stringVar2); // Implicit deduction to std::string

}
