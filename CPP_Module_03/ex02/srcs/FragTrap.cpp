#include "../include/FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void) {
	std::cout << "Default FragTrap constructor called" << std::endl;
	this->setName("no_name");
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);

	return ;
}

FragTrap::FragTrap(std::string name) {
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "Creating FragTrap: " << this->getName() << std::endl;

	return ;
}

FragTrap::FragTrap(const FragTrap &copy) {
	*this = copy;
	std::cout << "Copying FragTrap: " << this->getName() << std::endl;

	return ;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
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

FragTrap::~FragTrap(void) {
	std::cout << "Destroying FragTrap: " << this->getName() << std::endl;

	return ;
}

void	FragTrap::highFivesGuys(void) {
	const std::string	GREEN = "\033[32m";
	const std::string	RESET = "\033[0m";

	std::cout << std::endl << GREEN << "FragTrap " << this->getName() << " requests high fives!" << RESET << std::endl << std::endl;
	return ;
}
