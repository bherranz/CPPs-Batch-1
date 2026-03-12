/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 19:08:22 by codespace         #+#    #+#             */
/*   Updated: 2026/02/26 20:07:00 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    private:
        Brain *brain;
    public:
        Dog();
        Dog(const Dog &copy);
        Dog& operator=(const Dog &other);
        ~Dog();

        void    makeSound() const;
};

#endif