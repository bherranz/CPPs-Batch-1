/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:03:03 by codespace         #+#    #+#             */
/*   Updated: 2026/02/09 17:21:58 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <fstream>
#include <iostream>

class Sed {
	private:
		std::string _filename;
		std::string _s1;
		std::string _s2;
	public:
		Sed(std::string filename, std::string s1, std::string s2);
		~Sed();
		int	replace();
};

#endif