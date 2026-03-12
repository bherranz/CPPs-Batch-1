/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 16:52:30 by codespace         #+#    #+#             */
/*   Updated: 2026/02/09 17:18:19 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sed.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of parameters. Correct format: <filename> s1 s2" << std::endl;
		return (1);
	}
	if (Sed(argv[1], argv[2], argv[3]).replace() == 1)
		return (1);
	return (0);
}