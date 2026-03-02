#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

# define ATTACK	" attacks with their "

class HumanB{
	private:
		std::string	name_;
		Weapon		*weapon_;
	public:
		HumanB(std::string const name);
		~HumanB();
		void	setWeapon(Weapon &weapon);
		void	attack();
	};

#endif
