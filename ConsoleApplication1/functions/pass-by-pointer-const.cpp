#include <iostream>

static void sayAge(const int* age) {
	//++(*age); // Compiler Error becuase it's a const pointer

	/*
		We cannot modify the value but we can make the point to point somewhere else
		If we want to prevent this we have to make the pointer const like
		const ptr to const int
	*/

	int age1 = 98;
	age = &age1;
	std::cout << "age: (function) " << *age << std::endl;
}

int main() {
	int age{ 23 };
	std::cout << "age: (before): " << age << std::endl; // 23
	sayAge(&age); // pass the pointer										// 23
	std::cout << "age: (after): " << age << std::endl;	// 23
}
