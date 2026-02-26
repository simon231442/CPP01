#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	randomChump;

	randomChump.nameSet(name);
	randomChump.announce();
}

