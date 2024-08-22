#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	std::cout << "--------------------- Subject's Test ---------------------" << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(&club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}

	const std::string	RED = "\033[31m";
	const std::string	GREEN = "\033[32m";
	const std::string	YELLOW = "\033[33m";
	const std::string	BLUE = "\033[36m";
	const std::string	RESET = "\033[0m";
	const std::string	PURPLE = "\033[35m";

	std::cout << PURPLE << std::endl << std::endl << "---------------------------- TEST ------------------------" << RESET << std::endl;
	Weapon good = Weapon("Green Lightsaber");
	Weapon evil = Weapon("Red Lightsaber");
	HumanA darthVader("Darth Vader", evil);
	HumanB lukeSkywalker("Luke Skywalker");

	std::cout << BLUE;
	std::cout << std::endl << "----------- Darth Vader attacks Luke Skywalker -----------";
	std::cout << RESET << std::endl;

	std::cout << "🟢 ";
	lukeSkywalker.attack();
	std::cout << "🔴 ";
	darthVader.attack();

	std::cout << GREEN;
	std::cout << std::endl << "------ Luke Skywalker receives a powerful lightsaber ------";
	std::cout << RESET << std::endl;
	std::cout << "🟢 ";
	lukeSkywalker.setWeapon(&good);
	std::cout << "🟢 ";
	lukeSkywalker.attack();
	std::cout << "🔴 ";
	darthVader.attack();
	std::cout << "🟢 ";
	lukeSkywalker.attack();
	std::cout << GREEN;
	std::cout << std::endl << "----------- Darth Vader Embraces the Light Side -----------";
	std::cout << RESET << std::endl;
	evil.setType("Green Lightsaber");
	std::cout << "🟢 ";
	darthVader.attack();

	return 0;
}
