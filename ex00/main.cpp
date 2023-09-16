#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap rasmus("Rasmus");

	rasmus.attack("Tuomo");
	rasmus.takeDamage(5);
	rasmus.beRepaired(3);
	return (0);
}
