#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->_name = name;
	this->_weapon = NULL;

	return ;
}

HumanB::~HumanB(void) {
	return ;
}

void	HumanB::attack(void)const {
	if (this->_weapon == NULL)
		std::cout << this->_name << " has no weapon to attack" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;

	return ;
}

void	HumanB::setWeapon(Weapon *weapon) {
	std::cout << this->_name << " receives " << weapon->getType() << std::endl;
	this->_weapon = weapon;

	return ;
}
