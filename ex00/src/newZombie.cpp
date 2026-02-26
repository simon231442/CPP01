#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie	*newZombie = new Zombie;
	newZombie->nameSet(name);
	return (newZombie);
}

