/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboland <romain.boland@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:11:21 by rboland           #+#    #+#             */
/*   Updated: 2026/01/10 15:11:22 by rboland          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	heapZombie;

	// Test randomChump (stack allocation)
	std::cout << "Creating stack zombie:" << std::endl;
	randomChump("StackZombie");
	std::cout << std::endl;

	// Test newZombie (heap allocation)
	std::cout << "Creating heap zombie:" << std::endl;
	heapZombie = newZombie("HeapZombie");
	heapZombie->announce();
	std::cout << std::endl;

	// Clean up heap zombie
	std::cout << "Deleting heap zombie:" << std::endl;
	delete heapZombie;
	std::cout << std::endl;

	return (0);
}
