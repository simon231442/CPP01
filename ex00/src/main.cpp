#include "Zombie.hpp"

int	main(void)
{
//	std::string	newZombieName = "Fedor";
//	std::string	randomChumpName = "Jules";
	Zombie		*newZombie1 = newZombie("Fedor");
	newZombie1->announce();
	delete newZombie1;

	std::cout << std::endl;

	randomChump("Jules");
	return (0);
}

