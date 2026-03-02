#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon{
	private:
		std::string	type_;
	public:
		Weapon(std::string const type);
		~Weapon();
		void				setType(std::string type);
		const std::string&	getType();
	};

#endif
