#include "Harl.hpp"

int	main(void) {
	const std::string	RED = "\033[31m";
	const std::string	GREEN = "\033[32m";
	const std::string	YELLOW = "\033[33m";
	const std::string	BLUE = "\033[36m";
	const std::string	RESET = "\033[0m";
	const std::string	PURPLE = "\033[35m";
	Harl				Harl;

	std::cout << std::endl << GREEN << "-----------▼ DEBUG LEVEL ▼------------";
	std::cout << RESET << std::endl;
	Harl.complain("DEBUG");
	std::cout << std::endl << BLUE << "-------------▼ INFO LEVEL ▼------------";
	std::cout << RESET << std::endl;
	Harl.complain("INFO");
	std::cout << std::endl << YELLOW << "----------▼ WARNING LEVEL ▼----------";
	std::cout << RESET << std::endl;
	Harl.complain("WARNING");
	std::cout << std::endl << RED << "--------------▼ ERROR LEVEL ▼-----------";
	std::cout << RESET << std::endl;
	Harl.complain("ERROR");
	std::cout << std::endl << PURPLE << "----------▼ INVALID LEVEL ▼----------";
	std::cout << RESET << std::endl;
	Harl.complain("something else");

	return 0;
}
