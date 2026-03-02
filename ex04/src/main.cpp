#include <string>
#include <fstream>

// ouvrir filename + check
// creer fileout + check
   // avec getline remplir line
   // faire une fonction qui remplace les occurences de s1 par s2
   // remplir file_out
//fermer filename et fileout
int	main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cout << 

/*
int	main(int ac, char *av[])
{
	std::string		file_out_name = std::string(av[1]) + ".replace";
	std::string		s1 = av[2];
	std::string		s2 = av[3];
	std::string		buffer;
	std::fstream	file_in;
	std::fstream	file_out;
	char			c;
	unsigned int	i = 0;

	if (ac != 4)
		return (1);

	file_in.open(av[1], std::ios_base::in);
	if (file_in.is_open() == false)
		return (1);
	file_out.open(file_out_name.c_str(), std::ios_base::out);
	if (file_out.is_open() == false)
		return (1);

	while (1)
	{
		file_in.get(c);
		if (file_in.eof())
			break ;
		if (c == s1[i])
		{
			buffer[i] = s1[i];
			i++;
			if (i == s1.length())
			{
				file_out.write(s2.c_str(), s2.length());
				i = 0;
				buffer.clear();
			}
		}
		else
		{
			if (buffer.length())
			{
				file_out.write(buffer.c_str(), buffer.length());
				buffer.clear();
				i = 0;
			}
			else
				file_out.write(&c, 1);
		}
	}
	file_in.close();
	file_out.close();
	return (0);
}
			


