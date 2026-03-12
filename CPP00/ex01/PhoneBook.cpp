/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 20:57:33 by codespace         #+#    #+#             */
/*   Updated: 2026/02/07 13:52:33 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	this->_index = 0;
	this->_totalSaved = 0;
};
PhoneBook::~PhoneBook(){};

// ADD
void	PhoneBook::addNewContact(void) {
	Contact	&current = this->_contacts[this->_index];

	std::string firstName;
	std::cout << "Enter your first name: ";
	std::getline(std::cin, firstName);
	
	std::string lastName;
	std::cout << "Enter your last name: ";
	std::getline(std::cin, lastName);
	
	std::string nickname;
	std::cout << "Enter your nickname: ";
	std::getline(std::cin, nickname);

	std::string phoneNumber;
	std::cout << "Enter your phone number: ";
	std::getline(std::cin, phoneNumber);
	
	std::string darkestSecret;
	std::cout << "Enter your darkest secret: ";
	std::getline(std::cin, darkestSecret);

	if (firstName.empty() || lastName.empty() || nickname.empty()
		|| phoneNumber.empty() || darkestSecret.empty())
	{
		std::cout << "There are some missing fields, contact cannot be saved.\n";
		return ;
	}
	current.setFirstName(firstName);
	current.setLastName(lastName);
	current.setNickname(nickname);
	current.setPhoneNumber(phoneNumber);
	current.setDarkestSecret(darkestSecret);
	std::cout << "Contact saved at index " << this->_index << std::endl;
	this->_index = (this->_index + 1) % 8;
	if (this->_totalSaved < 8)
		this->_totalSaved++;
};

std::string	truncate(std::string str) {
	if (str.length() > 10)
		return str.substr(0, 9) + "."; 
	return (str);
}

void	PhoneBook::printContacts() const {
	std::cout << "|" << std::setw(10) << "INDEX" << "|";
	std::cout << std::setw(10) << "FIRST NAME" << "|";
	std::cout << std::setw(10) << "LAST NAME" << "|";
	std::cout << std::setw(10) << "NICKNAME" << "|" << std::endl;
	for (int i = 0; i < this->_totalSaved; i++)
	{
		std::cout << "|" << std::setw(10) << i << "|";
		std::cout << std::setw(10) << truncate(this->_contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << truncate(this->_contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << truncate(this->_contacts[i].getNickname()) << "|";
		std::cout << std::endl;
	}
};

void	PhoneBook::search() {
	std::string	input;
	std::cout << "Enter index to view details: ";
	std::getline(std::cin, input);
	bool isNumber = true;
	if (input.empty())
		isNumber = false;
	for (size_t i = 0; i < input.length(); i++)
	{
		if (!isdigit(input[i]))
		{
			isNumber = false;
			break ;
		}
	}
	if (isNumber == false)
	{
		std::cout << "Invalid index.\n";
		return ;
	}
	int index = std::atoi(input.c_str());
	if (index < 0 || index >= this->_totalSaved)
	{
		std::cout << "Index wrong or out of range.\n";
		return ;
	}
	std::cout << "First Name: " << this->_contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << this->_contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << this->_contacts[index].getNickname() << std::endl;
	std::cout << "Phone Number: " << this->_contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << this->_contacts[index].getDarkestSecret() << std::endl;
};
