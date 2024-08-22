#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	const std::string RED = "\033[31m";
	const std::string RESET = "\033[0m";

	if (N <= 0) {
		std::cout << RED << "Impossible to have a horde of " << N << " zombies!" << RESET << std::endl;
		return NULL;
	}

	Zombie *zombies = new Zombie[N];
	for(int i = 0; i < N; i++) {
		zombies[i].setName(name);
	}
	return zombies;
}
