#include <iostream>

static int& maxNumber(int& a, int& b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

int main() {
	int val1 = 76;
	int val2 = 86;

	int& val1Ref = val1;
	int& val2Ref = val2;

	maxNumber(val1Ref, val2Ref);

	std::cout << "val1Ref: " << val1Ref << std::endl;
	std::cout << "val2Ref: " << val2Ref << std::endl;
}
