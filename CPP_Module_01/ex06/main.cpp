#include "Harl.hpp"

int	main(int argc, char *argv[]) {
	const std::string	BLUE = "\033[36m";
	const std::string	RED = "\033[31m";
	const std::string	RESET = "\033[0m";
	if (argc == 1)
	{
		std::cout << RED << "You need to choose one level at least" << RESET << std::endl;
		std::cout << "Ex: ./harlFilter 'WARNING'" << std::endl;
		return 0;
	}
	else if (argc > 2)
	{
		std::cout << RED << "Too many arguments. Choose only one!" << RESET << std::endl;
		std::cout << "Ex: ./harlFilter 'DEBUG'" << std::endl;
		return 0;
	}

	Harl	Harl;

	std::cout << std::endl << BLUE << "--------------------▼ Level: " << argv[1] << " ▼--------------------";
	std::cout << RESET << std::endl;
	Harl.complain(argv[1]);
	std::cout << std::endl;

	return 0;
}
