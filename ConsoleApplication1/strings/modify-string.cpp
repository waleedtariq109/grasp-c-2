#include <iostream>
#include <string>

int main() {
	std::cout << std::endl;

	std::cout << "Modifying String" << std::endl;
	std::cout << std::endl;

	/*
		The std::string::clear() will removes all the characters
		in the string and make it empty
	*/

	std::string str1{ "The Lion King" };
	std::cout << "str1: " << str1 << std::endl;
	std::cout << "str1 size: " << str1.size() << std::endl;
	std::cout << "str1 capacity: " << str1.capacity() << std::endl;

	std::cout << std::endl;
	std::cout << "clearing..." << std::endl;
	std::cout << std::endl;

	str1.clear(); // Clear the string

	std::cout << "str1: " << str1 << std::endl;
	std::cout << "str1 size: " << str1.size() << std::endl;
	std::cout << "str1 capacity: " << str1.capacity() << std::endl;

	std::cout << std::endl;
}
