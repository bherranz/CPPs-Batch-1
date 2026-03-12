/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 14:54:24 by codespace         #+#    #+#             */
/*   Updated: 2026/02/09 16:17:33 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
	private:
		std::string _type;
	public:
		Weapon(std::string type);
		~Weapon();
		void				setType(const std::string& type);
		const std::string	&getType() const;
};

#endif
