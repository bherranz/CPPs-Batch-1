/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 21:10:18 by codespace         #+#    #+#             */
/*   Updated: 2026/02/05 21:14:48 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
 #define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
	public:
		Contact();
		~Contact();

		void    setFirstName(std::string str);
		void    setLastName(std::string str);
		void    setNickname(std::string str);
		void    setPhoneNumber(std::string str);
		void    setDarkestSecret(std::string str);

		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickname() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;
};

#endif
