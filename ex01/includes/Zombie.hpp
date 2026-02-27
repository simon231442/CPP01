#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <new>

# define BRAINZ "BraiiiiiiinnnzzzZ..."
# define DEAD	"is dead"

class Zombie{
	private:
		std::string	name_;

	public:
		Zombie();
		~Zombie();
		void		nameSet(std::string name);
		void		announce(void);
	};

Zombie* zombieHorde(int N, std::string name);

#endif

