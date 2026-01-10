/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <romain.boland@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:13:24 by rboland           #+#    #+#             */
/*   Updated: 2026/01/10 15:13:25 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class HumanB
{
private:
	std::string	name;
	Weapon*		weapon;

public:
	HumanB(std::string name);
	~HumanB(void);

	void	setWeapon(Weapon& weapon);
	void	attack(void) const;
};

#endif
