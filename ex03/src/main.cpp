#include "HumanA.hpp"
#include "HumanB.hpp"
/*
int	main(void)
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
*/
int	main(void)
{
	{
		Weapon	love = Weapon("love bombing");
		HumanA	aya = HumanA("Aya", love);
		aya.attack();
		love.setType("ignoring");
		aya.attack();
	}
	{
		Weapon	truth = Weapon("eye");
		HumanB	pierre = HumanB("Pierre");
		pierre.setWeapon(truth);
		pierre.attack();
		truth.setType("true showing");
		pierre.attack();
	}
	return 0;
}
