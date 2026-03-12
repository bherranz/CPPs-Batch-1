/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 09:44:08 by codespace         #+#    #+#             */
/*   Updated: 2026/02/06 12:16:17 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
 #define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	_contacts[8];
		int		_index;
		int		_totalSaved;
	public:
		PhoneBook();
		~PhoneBook();

		void	addNewContact(void);
		void    printContacts(void) const;
		void	search(void);
};

#endif
