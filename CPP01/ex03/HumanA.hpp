/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:46:34 by codespace         #+#    #+#             */
/*   Updated: 2026/02/09 16:34:36 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {
	private:
		std::string _name;
		Weapon		&_weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack();
};

#endif