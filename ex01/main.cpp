/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Boland <Boland@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 10:14:00 by Boland            #+#    #+#             */
/*   Updated: 2025/12/30 10:14:00 by Boland           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		hordeSize;
	Zombie*	horde;

	hordeSize = 5;

	std::cout << "Creating a horde of " << hordeSize << " zombies..." << std::endl;
	horde = zombieHorde(hordeSize, "HordeZombie");

	std::cout << "\nMaking each zombie announce itself:" << std::endl;
	for (int i = 0; i < hordeSize; i++)
	{
		std::cout << "Zombie " << i << ": ";
		horde[i].announce();
	}

	std::cout << "\nDeleting the horde..." << std::endl;
	delete [] horde;

	return (0);
}
