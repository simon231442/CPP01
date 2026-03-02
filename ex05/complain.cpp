#include "Harl.hpp"

void	Harl::complain(std::string level)
{
	static void	(Harl::*method[4])(void) = {
		&Harl::debug, &Harl::info, &Harl::warning, &Harl::error
	};

	static std::string	level_tab[4] = {"DEBUG", "INFO" , "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++)
	{
		if (!level.compare(level_tab[i]))
			return (this->*(method[i]))();
	}
}
