#include <iostream>
#include <string>

int main() {
	std::cout << std::endl;

	std::cout << "std::string size and capacity" << std::endl;
	
	/*
		In C++ we have few methods which standard library gives us
		to check the length of a string or to check if string is empty
		or also we can also check the size of a string

		NOTE: The length and size function are doing the pretty much
		same thing they both eventually returns the total characters
		of the string.
	*/

	std::string str1{ "Hello World" };
	std::string str2{};
	std::string str3;

	// .empty
	std::cout << std::endl;
	std::cout << "std::string::empty()" << std::endl;
	
	std::cout << "str1 is empty: " << std::boolalpha << str1.empty() << std::endl;
	std::cout << "str2 is empty: " << std::boolalpha << str2.empty() << std::endl;
	std::cout << "str3 is empty: " << std::boolalpha << str3.empty() << std::endl;

	std::cout << std::endl;
	return 0;
}
