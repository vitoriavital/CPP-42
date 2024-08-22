#include "Zombie.hpp"

void	announceAllHorde(Zombie *horde, int n) {
	const std::string RED = "\033[31m";
	const std::string RESET = "\033[0m";

	if (n <= 0) {
		std::cout << RED << "Nothing to announce here!" << RESET << std::endl;
		return ;
	}
	for(int i = 0; i < n; i++) {
		horde[i].announce();
	}
}

int main(void) {
	std::cout << std::endl;
	std::cout << "------ Test 1 - zombie horde ------" << std::endl;
	Zombie *horde1 = zombieHorde(3, "Generic Zombie");
	announceAllHorde(horde1, 3);
	std::cout << std::endl;
	delete[] horde1;

	std::cout << std::endl;
	std::cout << "------ Test 2 - modify zombie horde ------" << std::endl;
	Zombie *horde2 = zombieHorde(4, "Generic Zombie");
	announceAllHorde(horde2, 4);
	std::cout << std::endl;
	horde2[2].setName("Carl Grimes");
	std::cout << std::endl;
	announceAllHorde(horde2, 4);
	std::cout << std::endl;
	delete[] horde2;

	std::cout << std::endl;
	std::cout << "------ Test 3 - impossible horde of zombies ------" << std::endl;
	Zombie *horde3 = zombieHorde(0, "Generic Zombie");
	announceAllHorde(horde3, 0);
	Zombie *horde4 = zombieHorde(-10, "Generic Zombie");
	announceAllHorde(horde4, 0);
	delete[] horde3;

	return 0;
}
