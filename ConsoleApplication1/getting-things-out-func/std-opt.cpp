#include <iostream>
#include <optional>

int main(int argc, char **argv) {
	// Initialize with value
	std::optional<int> age{ 23 };
	std::optional<double> percentage{ 87.98 };
	std::optional<char> character{ 'W' };
	std::optional<std::string> name{ "Waleed Tariq" };

	// Initialize with std::nullopt
	std::optional<int> age1{ std::nullopt };
	std::optional<double> percentage1{ std::nullopt };
	std::optional<char> character1{ std::nullopt };
	std::optional<std::string> name1{ std::nullopt };

	std::cout << "age: " << age.value() << std::endl;
	std::cout << "percentage: " << percentage.value() << std::endl;
	std::cout << "character: " << character.value() << std::endl;
	std::cout << "name: " << name.value() << std::endl;

}
