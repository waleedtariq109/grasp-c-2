#include <iostream>

static void Increment(const int& value) {
	//++value; // Compiler error because it's a const reference to num variable
	std::cout << "value: " << value << std::endl;
}

int main() {
	int num{ 99 };
	std::cout << "num: " << num << std::endl;
	Increment(num);
	std::cout << "num: " << num << std::endl;
}
