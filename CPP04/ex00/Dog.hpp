/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 19:08:22 by codespace         #+#    #+#             */
/*   Updated: 2026/02/26 19:15:14 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog();
        Dog(const Dog &copy);
        Dog& operator=(const Dog &other);
        ~Dog();

        void    makeSound() const;
};

#endif