#ifndef DIAMOND_TRAP_H
# define DIAMOND_TRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &copy);
		DiamondTrap &operator=(const DiamondTrap &other);
		~DiamondTrap(void);

		void			whoAmI();
	private:
		std::string		_name;
};
#endif
