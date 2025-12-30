/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Boland <Boland@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 10:14:00 by Boland            #+#    #+#             */
/*   Updated: 2025/12/30 10:14:00 by Boland           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
private:
	std::string	name;

public:
	Zombie(std::string name);
	~Zombie(void);
	void	announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
