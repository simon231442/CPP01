#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << name_;
	std::cout << ": ";
	std::cout << DEAD;
	std::cout << std::endl;
}

void	Zombie::nameSet(std::string name)
{
	name_ = name;
}
	
void	Zombie::announce(void)
{
	std::cout << name_;
	std::cout << ": ";
	std::cout << BRAINZ;
	std::cout << std::endl;
}


