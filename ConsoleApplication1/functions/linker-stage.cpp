#include <iostream>
#include "compare.h" // preprocessor

int main() {
	int num1 = 65;
	int num2 = 76;

	int result = Maximum(num1, num2);

	std::cout << "max: " << result << std::endl;
}
