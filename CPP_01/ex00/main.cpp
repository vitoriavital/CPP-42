#include "Zombie.hpp"

int main(void) {
	std::cout << std::endl;
	std::cout << "------ Test 1 - new zombies ------" << std::endl;
	Zombie *zombie1 = newZombie("Vitoria");
	Zombie *zombie2 = newZombie("André");
	Zombie *zombie3 = newZombie("Maria");

	zombie3->announce();
	zombie2->announce();
	zombie1->announce();
	delete zombie1;
	delete zombie2;
	delete zombie3;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "------ Test 2 - random chumps ------" << std::endl;
	randomChump("Rafael");
	randomChump("Clara");
	randomChump("Gabriel");
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "------ Test 3 - new zombies vs random chumps ------" << std::endl;
	Zombie *zombie7 = newZombie("Carol");
	randomChump("Marco");
	Zombie *zombie9 = newZombie("Bia");
	randomChump("João");
	delete zombie7;
	delete zombie9;

	return 0;
}
