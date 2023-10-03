#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &claptrap);
		ClapTrap &operator=(const ClapTrap &claptrap);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:
		std::string	name;
		int			hp;
		int			energy;
		int			atk_dmg;
};


#endif
