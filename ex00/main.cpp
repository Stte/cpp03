#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap rasmus("Rasmus");

	rasmus.attack("Tuomo");
	rasmus.takeDamage(5);
	rasmus.beRepaired(3);

	ClapTrap test(rasmus);
	test.takeDamage(5);
	rasmus.beRepaired(3);
	test.takeDamage(5);
	test.attack("Tuomo");
	return (0);
}
