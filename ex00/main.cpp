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
