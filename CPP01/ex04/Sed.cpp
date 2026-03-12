/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:06:48 by codespace         #+#    #+#             */
/*   Updated: 2026/02/09 18:10:14 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string filename, std::string s1, std::string s2) {
	this->_filename = filename;
	this->_s1 = s1;
	this->_s2 = s2;
}

Sed::~Sed() {};

int	Sed::replace()
{
	std::ifstream inputFile;
	inputFile.open(this->_filename.c_str());
	// If the file does not exist or cannot open
	if (!inputFile.is_open()) {
    	std::cerr << "Error: could not open file " << this->_filename << std::endl;
    	return (1);
	}

	// Copy input file content
	std::string content = "";
	char c;
	while (inputFile.get(c)) {
		content += c;
	}
	inputFile.close();

	if (this->_s1.empty())
		return (0);

	size_t pos = 0;
	while (content.find(this->_s1, pos) != std::string::npos) {
		pos = content.find(this->_s1, pos);
		// Erase s1
		content.erase(pos, this->_s1.length());
		// Insert s2 in that position
		content.insert(pos, this->_s2);
		// Move position till the end of s2
		pos += this->_s2.length();
	}

	std::string	outfile = this->_filename + ".replace";
	std::ofstream outputFile(outfile.c_str());
	if (!outputFile.is_open()) {
		std::cerr << "Error: could not create output file" << std::endl;
		return (1);
	}
	// Copy new content
	outputFile << content;
	outputFile.close();
	return (0);
}