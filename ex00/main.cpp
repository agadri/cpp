/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 18:46:44 by adegadri          #+#    #+#             */
/*   Updated: 2022/06/02 18:46:47 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	{
		ClapTrap CT("FOO");

		std::cout << CT.getEnergyPoints() << std::endl;
		CT.attack("BAR");
		std::cout << CT.getEnergyPoints() << std::endl;
		std::cout << std::endl;

		std::cout << CT.getHitPoints() << std::endl;
		CT.takeDamage(6);
		std::cout << CT.getHitPoints() << std::endl;
		std::cout << std::endl;

		std::cout << CT.getHitPoints() << std::endl;
		CT.beRepaired(6);
		std::cout << CT.getHitPoints() << std::endl;
	}

	return 0;
}

