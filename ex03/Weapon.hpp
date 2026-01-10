/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <romain.boland@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:13:37 by rboland           #+#    #+#             */
/*   Updated: 2026/01/10 15:13:38 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
private:
	std::string	type;

public:
	Weapon(std::string type);
	~Weapon(void);

	const std::string&	getType(void) const;
	void				setType(std::string newType);
};

#endif
