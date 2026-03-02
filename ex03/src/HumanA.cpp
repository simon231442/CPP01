#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):name_(name),weapon_(weapon)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << name_;
	std::cout << ATTACK;
	std::cout << weapon_.getType();
	std::cout << std::endl;
}
