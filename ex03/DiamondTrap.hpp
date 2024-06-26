#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap();
		DiamondTrap(const DiamondTrap &copy);
		DiamondTrap(std::string name);
		virtual ~DiamondTrap();
		DiamondTrap &operator=(const DiamondTrap &src);
		void attack(const std::string &target);
		void whoAmI(void);
};

#endif