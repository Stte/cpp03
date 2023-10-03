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

FragTrap::FragTrap(const FragTrap &fragtrap): ClapTrap(fragtrap.name)
{
	std::cout << "FragTrap Copy constructor called"<< std::endl;
	*this = fragtrap;
}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	name = fragtrap.name;
	hp = fragtrap.hp;
	energy = fragtrap.energy;
	atk_dmg = fragtrap.atk_dmg;
	return (*this);
}

void FragTrap::highFivesGuys()
{
	if (hp <= 0 || energy <= 0)
		return ;
	std::cout << "High fives guys!" << std::endl;
}
