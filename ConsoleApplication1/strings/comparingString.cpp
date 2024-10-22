#include <iostream>
#include <string>

int main() {
	std::cout << std::endl;

	std::cout << "Comparing Strings" << std::endl;
	std::cout << std::endl;

	/*
		Comparing strings in lexicographical order
	*/

	std::string helloStr{ "Hello" };
	std::string belloStr{ "Bello" };

	std::cout << "Comparing strings with comparison operators" << std::endl;
	std::cout << std::endl;

	std::cout << std::boolalpha;
	std::cout << helloStr << " == " << belloStr << " : " << (helloStr == belloStr) << std::endl;
	std::cout << helloStr << " != " << belloStr << " : " << (helloStr != belloStr) << std::endl;
	std::cout << helloStr << " >= " << belloStr << " : " << (helloStr >= belloStr) << std::endl;
	std::cout << helloStr << " <= " << belloStr << " : " << (helloStr <= belloStr) << std::endl;
	std::cout << helloStr << " < " << belloStr << " : " << (helloStr < belloStr) << std::endl;
	std::cout << helloStr << " > " << belloStr << " : " << (helloStr < belloStr) << std::endl;

	std::cout << std::endl;
	return 0;
}
