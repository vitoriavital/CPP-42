#include "../include/ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) {
	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);

	return ;
}

ScavTrap::ScavTrap(std::string name) {
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "Creating ScavTrap: " << this->getName() << std::endl;

	return ;
}

ScavTrap::ScavTrap(const ScavTrap &copy) {
	*this = copy;
	std::cout << "Copying ScavTrap: " << this->getName() << std::endl;

	return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		this->setName(other.getName());
		this->setHitPoints(other.getHitPoints());
		this->setEnergyPoints(other.getEnergyPoints());
		this->setAttackDamage(other.getAttackDamage());
	}

	return *this;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "Destroying ScavTrap: " << this->getName() << std::endl;

	return ;
}

void	ScavTrap::attack(const std::string& target) {
	const std::string	RED = "\033[31m";
	const std::string	RESET = "\033[0m";
	const std::string	PURPLE = "\033[35m";

	std::cout << std::endl;
	if (this->getEnergyPoints() <= 0 && this->getHitPoints() <= 0) {
		std::cout << "ScavTrap " << this->getName() << " can’t attack if it has no hit points and no energy points left!" << std::endl;
		std::cout << std::endl;
		return ;
	}
	else if (this->getEnergyPoints() <= 0) {
		std::cout << "ScavTrap " << this->getName() << " can’t attack if it has no energy points left!" << std::endl;
		std::cout << std::endl;
		return ;
	}
	else if (this->getHitPoints() <= 0) {
		std::cout << "ScavTrap " << this->getName() << " can’t attack if it has no hit points left!" << std::endl;
		std::cout << std::endl;
		return ;
	}

	std::cout << PURPLE << "ScavTrap " << this->getName() << "'s energy points before attack: " << this->getEnergyPoints() << std::endl;
	std::cout << RED << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" <<  RESET << std::endl;
	unsigned int amount = this->getEnergyPoints();
	amount -= 1;
	this->setEnergyPoints(amount);
	std::cout << PURPLE << "ScavTrap " << this->getName() << "'s energy points after attack: " << this->getEnergyPoints() << RESET << std::endl;
	std::cout << std::endl;

	return ;
}

void	ScavTrap::guardGate() {
	const std::string	GREEN = "\033[32m";
	const std::string	RESET = "\033[0m";

	std::cout << std::endl << GREEN << "ScavTrap " << this->getName() << " is now in Gate keeper mode!" << RESET << std::endl << std::endl;
	return ;
}
