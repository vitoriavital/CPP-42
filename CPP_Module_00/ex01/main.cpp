#include <iostream>
#include "PhoneBook.hpp"

int	main() {
	const std::string RED = "\033[31m";
	const std::string RESET = "\033[0m";
	PhoneBook	phoneBook;
	std::string	chosen_option;

	std::cout << "Enter one of the options: ADD, SEARCH, EXIT" << std::endl;

	while (1) {
		std::cout << std::endl << "Your choice: ";
		std::getline(std::cin, chosen_option);
		if (chosen_option == "ADD")
			phoneBook.addContact();
		else if (chosen_option == "SEARCH")
			phoneBook.searchContact();
		else if (chosen_option == "EXIT")
			return 0;
		else
		{	
			std::cout << std::endl << RED << "Invalid choice! " << RESET << std::endl;
			std::cout << "Please enter one of the options: ADD, SEARCH, EXIT" << std::endl;
		}
	}
	return 0;
}
