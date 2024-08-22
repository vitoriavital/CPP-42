#include "../include/ClapTrap.hpp"
#include <iostream>

static void	printClapTrap(ClapTrap *x) {
	std::cout << " ----------------------------------" << std::endl;
	std::cout << "-> Name: " << x->getName() << std::endl;
	std::cout << "-> HitPoints: " << x->getHitPoints() << std::endl;
	std::cout << "-> EnergyPoints: " << x->getEnergyPoints() << std::endl;
	std::cout << "-> AttackDamage: " << x->getAttackDamage() << std::endl;
	std::cout << " ----------------------------------" << std::endl << std::endl;
}

int main( void ) {
	ClapTrap	a("Adam");
	ClapTrap	b;
	ClapTrap	c("John");

	b = a;
	b.setName("Evan");
	a.setAttackDamage(5);
	printClapTrap(&a);
	printClapTrap(&b);
	printClapTrap(&c);

	std::cout << "-------------Adam attacks Evan-------------" << std::endl << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	std::cout << "---------Evan strikes back at Adam---------" << std::endl << std::endl;
	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	std::cout << "-------Evan finds healing checkpoint-------" << std::endl << std::endl;
	b.beRepaired(a.getAttackDamage());
	c.setAttackDamage(1);

	std::cout << "-----John strikes 10 times back at Adam----" << std::endl << std::endl;
	for (size_t i = 0; i < 10; i++)
	{
		c.attack(a.getName());
		a.takeDamage(c.getAttackDamage());
	}
	c.attack(a.getName());
	a.takeDamage(c.getAttackDamage());

	return 0;
}
