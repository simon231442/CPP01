# include <string>
# include <iostream>
# include <iomanip>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";

	std::string	*stringPTR = &string;

	std::string	&stringREF = string;

	std::cout << std::left << std::setw(40) << "addresse memoire de la string originale" << " : ";
	std::cout << &string << std::endl;

	std::cout << std::left << std::setw(40) << "addresse stockee dans stringPTR" << " : ";
	std::cout << stringPTR << std::endl;

	std::cout << std::left << std::setw(40) << "addresse memoire de la stringREF" << " : ";
	std::cout << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << std::left << std::setw(40) << "contenu de la string originale" << " : ";
	std::cout << string << std::endl;

	std::cout << std::left << std::setw(40) << "contenu pointe par stringPTR" << " : ";
	std::cout << *stringPTR << std::endl;
	
	std::cout << std::left << std::setw(40) << "contenu referencee par stringREF" << " : ";
	std::cout << stringREF << std::endl;

	return (0);
}

