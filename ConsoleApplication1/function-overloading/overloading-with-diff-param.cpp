#include <iostream>
#include <string_view>

static int max(int a, int b) {
	return a > b ? a : b;
}

static double max(double a, double b) {
	return a > b ? a : b;
}

static std::string_view max(std::string_view a, std::string_view b) {
	return a > b ? a : b;
}

int main() {
	int intVar1{ 98 };
	int intVar2{ 76 };

	double doubleVar1{ 45.54 };
	double doubleVar2{ 87.98 };

	std::string_view strVar1{ "Hello" };
	std::string_view strVar2{ "World" };

	std::cout << "max(intVar1, intVar2): " << max(intVar1, intVar2) << std::endl;
	std::cout << "max(doubleVar1, doubleVar2): " << max(doubleVar1, doubleVar2) << std::endl;
	std::cout << "max(strVar1, strVar2): " << max(strVar1, strVar2) << std::endl;
}
