/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 09:52:48 by codespace         #+#    #+#             */
/*   Updated: 2026/02/10 11:02:05 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl harl;

	std::cout << "1. Testing DEBUG:" << std::endl;
    harl.complain("DEBUG");
    std::cout << std::endl;

    std::cout << "2. Testing INFO:" << std::endl;
    harl.complain("INFO");
    std::cout << std::endl;

    std::cout << "3. Testing WARNING:" << std::endl;
    harl.complain("WARNING");
    std::cout << std::endl;

    std::cout << "4. Testing ERROR:" << std::endl;
    harl.complain("ERROR");
    std::cout << std::endl;

    std::cout << "5. Testing INVALID COMMAND:" << std::endl;
    harl.complain("WRONG_LEVEL"); // Should print an error message (level not found)
    std::cout << std::endl;
	return (0);
}
