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

ScavTrap::ScavTrap(const ScavTrap &scavtrap): ClapTrap(scavtrap.name)
{
	std::cout << "ScavTrap Copy constructor called"<< std::endl;
	*this = scavtrap;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	name = scavtrap.name;
	hp = scavtrap.hp;
	energy = scavtrap.energy;
	atk_dmg = scavtrap.atk_dmg;
	return (*this);
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
	if (hp <= 0 || energy <= 0)
		return ;
	std::cout << name << " is now in Gatekeeper mode" << std::endl;
}
