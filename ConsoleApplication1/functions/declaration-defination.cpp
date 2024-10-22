#include <iostream>

static int Max(int num1, int num2); // Function Declaration or Prototype

int main() {
	std::cout << "Function Declaration and Defination" << std::endl;

	int a = 20;
	int b = 44;

	int result = Max(a, b);
	std::cout << "result: " << result << std::endl;

}

// Function defination or reference
static int Max(int num1, int num2) {
	if (num1 > num2) {
		return num1;
	}
	else {
		return num2;
	}
}
