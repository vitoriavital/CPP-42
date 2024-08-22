#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"
#include <iostream>

static void	printClapTrap(ClapTrap *x) {
	std::cout << " ----------------------------------" << std::endl;
	std::cout << "-> Name: " << x->getName() << std::endl;
	std::cout << "-> HitPoints: " << x->getHitPoints() << std::endl;
	std::cout << "-> EnergyPoints: " << x->getEnergyPoints() << std::endl;
	std::cout << "-> AttackDamage: " << x->getAttackDamage() << std::endl;
	std::cout << " ----------------------------------" << std::endl << std::endl;
}

static void	printScavTrap(ScavTrap *x) {
	std::cout << " ----------------------------------" << std::endl;
	std::cout << "-> Name: " << x->getName() << std::endl;
	std::cout << "-> HitPoints: " << x->getHitPoints() << std::endl;
	std::cout << "-> EnergyPoints: " << x->getEnergyPoints() << std::endl;
	std::cout << "-> AttackDamage: " << x->getAttackDamage() << std::endl;
	std::cout << " ----------------------------------" << std::endl << std::endl;
}

static void	printFragTrap(FragTrap *x) {
	std::cout << " ----------------------------------" << std::endl;
	std::cout << "-> Name: " << x->getName() << std::endl;
	std::cout << "-> HitPoints: " << x->getHitPoints() << std::endl;
	std::cout << "-> EnergyPoints: " << x->getEnergyPoints() << std::endl;
	std::cout << "-> AttackDamage: " << x->getAttackDamage() << std::endl;
	std::cout << " ----------------------------------" << std::endl << std::endl;
}

int main( void ) {
	ClapTrap	a("Adam");
	ScavTrap	b("Evan");
	ClapTrap	c("John");
	FragTrap	d("Nick");

	a.setAttackDamage(5);
	printClapTrap(&a);
	printScavTrap(&b);
	printClapTrap(&c);
	printFragTrap(&d);

	std::cout << "-------------Adam attacks Evan-------------" << std::endl << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	std::cout << "---------Evan strikes back at Adam---------" << std::endl << std::endl;
	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	std::cout << "-------Evan finds healing checkpoint-------" << std::endl << std::endl;
	b.beRepaired(a.getAttackDamage());
	c.setAttackDamage(1);

	std::cout << "-----John strikes back at Adam----" << std::endl << std::endl;
	c.attack(a.getName());
	a.takeDamage(c.getAttackDamage());

	std::cout << "-------John finds strong healing checkpoint-------" << std::endl << std::endl;
	c.beRepaired(300);

	b.guardGate();
	std::cout << "-----Evan strikes 10 times back at John----" << std::endl << std::endl;
	for (size_t i = 0; i < 10; i++)
	{
		b.attack(c.getName());
		c.takeDamage(b.getAttackDamage());
	}

	std::cout << "-----Nick strikes 4 times back at John----" << std::endl << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		d.attack(b.getName());
		b.takeDamage(d.getAttackDamage());
	}
	d.highFivesGuys();

	return 0;
}
