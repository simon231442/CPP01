#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde = zombieHorde(10, "Apayot");

	delete[] horde;
	return (0);
}

