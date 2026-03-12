/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 14:27:00 by codespace         #+#    #+#             */
/*   Updated: 2026/02/09 14:51:26 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str; // Stores memory address of 'str'
	std::string	&stringREF = str; // 'str' alias, ocuppies the same memory space

	std::cout << "'Str' address: " << &str << std::endl;
	std::cout << "'Str' pointer address: " << &stringPTR << std::endl;
	std::cout << "'Str' reference address: " << &stringREF << std::endl;

	std::cout << "'Str' value: " << str << std::endl;
	std::cout << "Value pointed to by 'stringPTR': " << *stringPTR << std::endl;
	std::cout << "Value pointed to by 'stringREF': " << stringREF << std::endl;
	return (0);
}