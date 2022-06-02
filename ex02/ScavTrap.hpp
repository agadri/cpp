#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap : public ClapTrap
{
	public:
		// Constructors
		ScavTrap();
		ScavTrap(const ScavTrap &copy);
		ScavTrap(std::string Name);
		void attack(const std::string& target);
		// Destructor
		~ScavTrap();
		
		// Operators
		//ScavTrap & operator=(const ScavTrap &assign);

		// Core

		void guardGate();
		
	private:
		
};

#endif