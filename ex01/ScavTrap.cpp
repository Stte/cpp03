#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	hp = 100;
	energy = 50;
	atk_dmg = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (hp <= 0 || energy <= 0)
		return ;
	energy--;
	std::cout << "ScavTrap " << name << " attacks " << target
			<< ", causing " << atk_dmg << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << name << " is now in Gatekeeper mode" << std::endl;
}
