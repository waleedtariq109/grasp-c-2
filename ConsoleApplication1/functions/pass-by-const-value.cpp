#include <iostream>

static void sayAge(const int age) {
	//++age; // Compiler error
	std::cout << "age: " << age << std::endl;
}

int main() {

	int age{ 23 };

	sayAge(age);
}
