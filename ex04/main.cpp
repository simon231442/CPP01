#include <string>
#include <iostream>
#include <fstream>

// ouvrir filename + check
// creer fileout + check
   // avec getline remplir line
   // faire une fonction qui remplace les occurences de s1 par s2
   // remplir file_out
//fermer filename et fileout


int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Usage: ./Replace <filename> <s1> <s2>" << std::endl;
        return (1);
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty())
    {
        std::cout << "Error: s1 is empty." << std::endl;
        return (1);
    }

    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open())
    {
        std::cout << "Error: could not open file " << std::endl;
        return (1);
    }

    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile.is_open())
    {
        std::cout << "Error: could not create output file" << std::endl;
        return (1);
    }

	std::string	line;
	while (1)	
	{
		std::getline(inputFile, line);
		if (inputFile.eof())
			break ;
    	size_t pos = 0;
		while (1)
		{
			pos = line.find(s1, pos);
			if (pos == std::string::npos)
				break;
		    line.erase(pos, s1.length());
		    line.insert(pos, s2);
		    pos += s2.length();
		}
		outputFile << line << "\n";
		line.clear();
	}
    inputFile.close();
    outputFile.close();
	return (0);
}




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
	if (s1.empty())
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
			buffer.push_back(c); // store matched character safely instead of writing out-of-range
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
				file_out.write(&c, 1);
			}
			else
				file_out.write(&c, 1);
		}
	}
	if (buffer.length())
		file_out.write(buffer.c_str(), buffer.length()); // flush any trailing partial match at EOF
	file_in.close();
	file_out.close();
	return (0);
}
*/
			


