#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap rasmus("Rasmus");

	rasmus.attack("Tuomo");
	rasmus.takeDamage(5);
	rasmus.beRepaired(3);
	rasmus.guardGate();

	ScavTrap test(rasmus);
	test.takeDamage(5);
	rasmus.beRepaired(5);
	test.takeDamage(100);
	test.attack("Tuomo");
	return (0);
}
