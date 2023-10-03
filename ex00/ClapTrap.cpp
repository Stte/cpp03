#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): name(name), hp(10), energy(10), atk_dmg(0)
{
	std::cout << "Default constructor called" << std::endl;
};

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	std::cout << "Copy constructor called"<< std::endl;
	*this = claptrap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	std::cout << "Copy assignment operator called" << std::endl;
	name = claptrap.name;
	hp = claptrap.hp;
	energy = claptrap.energy;
	atk_dmg = claptrap.atk_dmg;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (hp <= 0 || energy <= 0)
		return ;
	energy--;
	std::cout << "ClapTrap " << name << " attacks " << target
			<< ", causing " << atk_dmg << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hp <= 0)
		return ;
	hp -= amount;
	std::cout << "ClapTrap " << name << " took " << amount
			<< " damage. " << name << " has " << hp << " HP left." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hp <= 0 || energy <= 0)
		return;
	energy--;
	hp += amount;
	std::cout << "ClapTrap " << name << " repaired itself for " << amount
			<< " HP! " << name << " now has " << hp << " HP." << std::endl;
}
