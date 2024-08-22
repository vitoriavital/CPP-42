#include "../include/ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void) : _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Default ClapTrap constructor called" << std::endl;

	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Creating ClapTrap: " << this->_name << std::endl;

	return ;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	std::cout << "Copying ClapTrap: " << this->_name << std::endl;
	*this = copy;

	return ;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destroying ClapTrap: " << this->_name << std::endl;

	return ;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		this->_name = other.getName();
		this->_hitPoints = other.getHitPoints();
		this->_energyPoints = other.getEnergyPoints();
		this->_attackDamage = other.getAttackDamage();
	}

	return *this;
}

void	ClapTrap::setName(std::string name) {
	this->_name = name;

	return ;
}

void	ClapTrap::setHitPoints(int points) {
	this->_hitPoints = points;

	return ;
}

void	ClapTrap::setEnergyPoints(int points) {
	this->_energyPoints = points;

	return ;
}

void	ClapTrap::setAttackDamage(int points) {
	this->_attackDamage = points;

	return ;
}

const std::string&	ClapTrap::getName(void) const {
	return this->_name;
}

unsigned int	ClapTrap::getHitPoints(void) const {
	return this->_hitPoints;
}

unsigned int	ClapTrap::getEnergyPoints(void) const {
	return this->_energyPoints;
}

unsigned int	ClapTrap::getAttackDamage(void) const {
	return this->_attackDamage;
}

void	ClapTrap::attack(const std::string& target) {
	const std::string	RED = "\033[31m";
	const std::string	RESET = "\033[0m";
	const std::string	PURPLE = "\033[35m";

	std::cout << std::endl;
	if (this->_energyPoints <= 0 && this->_hitPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " can’t attack if it has no hit points and no energy points left!" << std::endl;
		std::cout << std::endl;
		return ;
	}
	else if (this->_energyPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " can’t attack if it has no energy points left!" << std::endl;
		std::cout << std::endl;
		return ;
	}
	else if (this->_hitPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " can’t attack if it has no hit points left!" << std::endl;
		std::cout << std::endl;
		return ;
	}

	std::cout << PURPLE << "ClapTrap " << this->_name << "'s energy points before attack: " << this->_energyPoints << std::endl;
	std::cout << RED << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" <<  RESET << std::endl;
	this->_energyPoints -= 1;
	std::cout << PURPLE << "ClapTrap " << this->_name << "'s energy points after attack: " << this->_energyPoints << RESET << std::endl;
	std::cout << std::endl;

	return ;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	const std::string	YELLOW = "\033[33m";
	const std::string	BLUE = "\033[36m";
	const std::string	RESET = "\033[0m";

	if (this->_hitPoints == 0) {
		std::cout << std::endl << YELLOW << "Clap trap " << this->_name << " is already dead!" << RESET << std::endl << std::endl;
		return ;
	}
	std::cout << std::endl;
	std::cout << BLUE << "ClapTrap " << this->_name << "'s hit points before taking damage: " << this->_hitPoints << std::endl;
	if (this->_hitPoints < amount) {
		std::cout << RESET << amount << " points will result in a negative balance! Max possible damage " << this->_hitPoints << std::endl;
		std::cout << YELLOW << "Clap trap " << this->_name << " takes " << this->_hitPoints << " points of damage!" << RESET << std::endl;
		this->_hitPoints = 0;
	}
	else {
		this->_hitPoints -= amount;
		std::cout << YELLOW << "Clap trap " << this->_name << " takes " << amount << " points of damage!" << RESET << std::endl;
	}
	std::cout << BLUE << "ClapTrap " << this->_name << "'s hit points after taking damage: " << this->_hitPoints << RESET << std::endl;
	std::cout << std::endl;

	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	const std::string	GREEN = "\033[32m";
	const std::string	YELLOW = "\033[33m";
	const std::string	RESET = "\033[0m";

	std::cout << std::endl;
	if (this->_energyPoints <= 0 && this->_hitPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " can’t be repaired if it has no hit points and no energy points left!" << std::endl;
		std::cout << std::endl;
		return ;
	}
	else if (this->_energyPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " can’t be repaired if it has no energy points left!" << std::endl;
		std::cout << std::endl;
		return ;
	}
	else if (this->_hitPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " can’t be repaired if it has no hit points left!" << std::endl;
		std::cout << std::endl;
		return ;
	}

	std::cout << YELLOW << "ClapTrap " << this->_name << "'s points before repair:" << std::endl;
	std::cout << "hit points: " << this->_hitPoints << " | energy points: " << this->_energyPoints << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints -= 1;
	std::cout << GREEN << "ClapTrap " << this->_name << " has been repaired and gained " << amount << " points!" << std::endl;
	std::cout << YELLOW << "ClapTrap " << this->_name << "'s points after repair:" << std::endl;
	std::cout << "hit points: " << this->_hitPoints << " | energy points: " << this->_energyPoints << RESET<< std::endl;
	std::cout << std::endl;

	return ;
}
