#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void) {
	const std::string GREEN = "\033[32m";
	const std::string RESET = "\033[0m";

	std::cout << GREEN << "A horde of zombies is invading the town!" << RESET << std::endl;
	return ;
}

void    Zombie::setName(std::string name) {
	this->_name = name;
	return ;
}

Zombie::~Zombie(void) {
	const std::string RED = "\033[31m";
	const std::string RESET = "\033[0m";

	std::cout << RED << this->_name << " is dead!" << RESET << std::endl;
	return ;
}

void    Zombie::announce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
