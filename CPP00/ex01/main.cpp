/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 20:57:30 by codespace         #+#    #+#             */
/*   Updated: 2026/02/21 11:48:46 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook my_phonebook;
	std::string	option;
	while (1)
	{
		std::cout << "Enter one of these options: 'ADD', 'SEARCH' or 'EXIT'" << std::endl;
		if (!std::getline(std::cin, option))
			break ;
		if (option == "EXIT")
			break ;
		else if (option == "ADD")
			my_phonebook.addNewContact();
		else if (option == "SEARCH")
		{
			my_phonebook.printContacts();
			my_phonebook.search();
		}
	}
	return (0);
}