#include "Harl.hpp"
#include <iostream>

int	main(void)
{
	Harl	harl;

	std::cout << "=== Testing all complaint levels ===" << std::endl;
	std::cout << std::endl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");

	std::cout << "=== Testing invalid level ===" << std::endl;
	std::cout << std::endl;

	harl.complain("INVALID");
	harl.complain("debug");
	harl.complain("");

	std::cout << "=== Testing multiple complaints ===" << std::endl;
	std::cout << std::endl;

	harl.complain("ERROR");
	harl.complain("ERROR");
	harl.complain("WARNING");
	harl.complain("DEBUG");

	return (0);
}
