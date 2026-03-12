/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 10:20:48 by codespace         #+#    #+#             */
/*   Updated: 2026/02/09 12:05:19 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name )
{
	// variable created on the stack
	Zombie randomZ = Zombie(name);
	randomZ.announce();
}

// With stack allocation, the variable dies when the function finishes its execution
// Fast and automatic memory
// It is convenient to use the Stack when the object is temporary and only needed inside the specific function where it is created
