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

	// .empty()
	std::cout << std::endl;
	std::cout << "std::string::empty()" << std::endl;
	
	std::cout << "str1 is empty: " << std::boolalpha << str1.empty() << std::endl;
	std::cout << "str2 is empty: " << std::boolalpha << str2.empty() << std::endl;
	std::cout << "str3 is empty: " << std::boolalpha << str3.empty() << std::endl;

	// .size()
	std::cout << std::endl;
	std::cout << "std::string::size()" << std::endl;

	std::cout << "str1 contains: " << str1.size() << " character's" << std::endl;
	std::cout << "str2 contains: " << str2.size() << " character's" << std::endl;
	std::cout << "str3 contains: " << str3.size() << " character's" << std::endl;

	// .length()
	std::cout << std::endl;
	std::cout << "std::string::length()" << std::endl;

	std::cout << "str1 contains: " << str1.length() << " character's" << std::endl;
	std::cout << "str2 contains: " << str2.length() << " character's" << std::endl;
	std::cout << "str3 contains: " << str3.length() << " character's" << std::endl;

	/*
		We can also check how many characters std::string can holds by calling
		max_size on std::string
	*/
	
	std::cout << std::endl;
	std::cout << "std::string can holds upto: " << str1.max_size() << " character's" << std::endl;

	std::cout << std::endl;
	return 0;
}
