#include "FragTrap.hpp"

int main(void)
{
	FragTrap rasmus("Rasmus");
	FragTrap test(rasmus);

	test.takeDamage(2000);
	test.highFivesGuys();
	rasmus.attack("Tuomo");
	rasmus.takeDamage(5);
	rasmus.beRepaired(3);
	rasmus.highFivesGuys();
	rasmus.takeDamage(100);
	rasmus.beRepaired(100);
	rasmus.highFivesGuys();
	return (0);
}
