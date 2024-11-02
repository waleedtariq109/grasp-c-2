#include <iostream>
#include <type_traits>

template <typename T>
void printInteger(T value) {
	static_assert(std::is_integral<T>::value, "printInteger() only be called with integer aruments");
	std::cout << "value: " << value << std::endl;
}

int main() {
	int a = 8;
	float b = 87.9f;

	printInteger(a);

}
