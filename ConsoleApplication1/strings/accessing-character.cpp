#include <iostream>
#include <string>

int main() {
	std::cout << std::endl;

	std::string str1{ "Hello there" };
	/*
		The .size() returns the size of the string excluding
		null terminator
	*/
	std::cout << "str1.size(): " << str1.size() << std::endl;

	// Now we know how to find the size of a string we can loop through it for accessing the characters
	std::cout << "For loop with array index notation" << std::endl;
	std::cout << "str1(for loop): ";
	for (size_t i{ 0 }; i < str1.size(); ++i) {
		std::cout << str1[i];
	}
	std::cout << std::endl;

	/*
		We can also use a range based for loop for
		accessing a each character
	*/

	std::string str2{ "Hello World" };
	std::cout << std::endl;
	std::cout << "Using a range based for loop" << std::endl;
	std::cout << "str2(range based for loop): ";
	for (char character : str2) {
		std::cout << character;
	}
	std::cout << std::endl;

	/*
		instead of array bracket notation we can use .at() in order to
		accessing the array characters
	*/

	std::cout << std::endl;
	std::cout << "Using the std::string::at method" << std::endl;
	std::string str3{ "C++: The GOAT Language" };
	std::cout << "str3.at(): ";
	for (size_t i{ 0 }; i < str3.size(); ++i) {
		std::cout << str3.at(i);
	}
	std::cout << std::endl;

	/*
		We can also modify the string character using the bracket notation
		or .at() method
	*/
	std::cout << std::endl;
	std::cout << "Modify string characters" << std::endl;
	std::string str4{ "Hello There" };
	std::cout << "str4 original: " << str4 << std::endl;

	str4[0] = 'B';
	str4.at(1) = 'a';

	std::cout << "str4 modified: " << str4 << std::endl;

	std::cout << std::endl;

	/*
		std::string::fornt and std::string::back()
		The front function return the first character of the string
		and the back function returns the back character f the string
	*/

	std::string str5{ "The Phoenix king" };
	char frontChar = str5.front();
	char backChar = str5.back();

	std::cout << "frontChar in str5: " << frontChar << std::endl;
	std::cout << "backChar in str5: " << backChar << std::endl;

	std::cout << std::endl;
	return 0;
}
