#include <iostream>

int main() {
	std::cout << "Cin Object, cin.get(), cin.getLine()" << std::endl;
	/*
		The cin Objects takes an string input from user without
		any space. If cin encounter any space it will ignore the
		string after space and the string before will be used
	*/
	std::string name;
	std::cout << "Enter your name: ";
	std::cin >> name;
	std::cout << "Your name is: " << name << std::endl;
	return 0;
}
