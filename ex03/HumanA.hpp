/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <romain.boland@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:13:18 by rboland           #+#    #+#             */
/*   Updated: 2026/01/10 15:13:19 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

class HumanA
{
private:
	std::string	name;
	Weapon&		weapon;

public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);

	void	attack(void) const;
};

#endif
