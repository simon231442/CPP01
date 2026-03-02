/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cop_main.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 12:00:00 by user              #+#    #+#             */
/*   Updated: 2026/03/02 12:00:00 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // std::cerr, std::endl (standard input/output streams)
#include <fstream>  // std::ifstream, std::ofstream (file streams)
#include <string>   // std::string (string class and manipulation)
#include <cstdlib>  // General purpose functions (often included for exit codes)

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return (1);
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty())
    {
        std::cerr << "Error: s1 cannot be empty." << std::endl;
        return (1);
    }

    // Open file and check for errors
    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open())
    {
        std::cerr << "Error: could not open file " << filename << std::endl;
        return (1);
    }

    // Read entire file content into a string using iterators (C++ idiomatic way)
    // Note: This method is efficient and concise for reading whole files.
    std::string content((std::istreambuf_iterator<char>(inputFile)),
                         std::istreambuf_iterator<char>());
    inputFile.close();

    // Prepare output file
    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile.is_open())
    {
        std::cerr << "Error: could not create output file" << std::endl;
        return (1);
    }

    // Perform replacement manually since std::string::replace is forbidden
    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos)
    {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length(); // Move past the replaced part to avoid infinite loops if s2 contains s1
    }

    outputFile << content;
    outputFile.close();

    return (0);
}
