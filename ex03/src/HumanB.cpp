#include "HumanB.hpp"

HumanB::HumanB(std::string const name)
{
	name_ = name;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &weapon)
{
	weapon_ = &weapon;
}

void	HumanB::attack()
{
	std::cout << name_;
	std::cout << ATTACK;
	std::cout << weapon_->getType();
	std::cout << std::endl;
}
