#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap rasmus("Rasmus");

	rasmus.attack("Tuomo");
	rasmus.takeDamage(5);
	rasmus.beRepaired(3);
	rasmus.guardGate();
	return (0);
}
