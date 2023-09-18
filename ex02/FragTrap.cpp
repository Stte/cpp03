#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	hp = 100;
	energy = 100;
	atk_dmg = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
	if (hp <= 0 || energy <= 0)
		return ;
	std::cout << "High fives guys!" << std::endl;
}
