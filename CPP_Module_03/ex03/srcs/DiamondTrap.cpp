#include "../include/DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void) : FragTrap("no_name_clap_name"), ScavTrap("no_name_clap_name"), _name("no_name") {
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	this->setAttackDamage(30);

	return ;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), _name(name) {
	std::cout << "Creating DiamondTrap: " << this->getName() << std::endl;
	this->setAttackDamage(30);
	
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : FragTrap(copy), ScavTrap(copy), _name(copy._name) {
	std::cout << "Copying DiamondTrap: " << this->getName() << std::endl;

	return ;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
	if (this != &other)
	{
		FragTrap::operator=(other);
		ScavTrap::operator=(other);
		_name = other._name;
	}

	return *this;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "Destroying DiamondTrap: " << this->_name << std::endl;

	return ;
}

void	DiamondTrap::whoAmI() {
	const std::string	BLUE = "\033[36m";
	const std::string	RESET = "\033[0m";

	std::cout << std::endl << BLUE << "DiamondTrap name:" << this->_name << " | ClapTrap name: " << FragTrap::getName() << RESET << std::endl << std::endl;
	return ;
}
