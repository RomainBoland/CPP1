/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Boland <Boland@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 10:14:00 by Boland            #+#    #+#             */
/*   Updated: 2025/12/30 10:14:00 by Boland           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	zombie(name);
	zombie.announce();
}
