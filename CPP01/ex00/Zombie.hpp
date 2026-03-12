/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 14:25:36 by codespace         #+#    #+#             */
/*   Updated: 2026/02/09 12:14:48 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
 #define ZOMBIE_HPP

#include <iostream>
#include <string>

// Colors
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"

class Zombie
{
private:
    std::string _name;
public:
    Zombie(std::string name);
    ~Zombie();
    void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
