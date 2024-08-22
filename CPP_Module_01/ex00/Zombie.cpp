#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	const std::string GREEN = "\033[32m";
	const std::string RESET = "\033[0m";

	this->_name = name;
	std::cout << GREEN << this->_name << " turned into a zombie!" << RESET << std::endl;
	return ;
}

Zombie::~Zombie(void) {
	const std::string RED = "\033[31m";
	const std::string RESET = "\033[0m";

	std::cout << RED << this->_name << " is dead!" << RESET << std::endl;
	return ;
}

void	Zombie::announce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
