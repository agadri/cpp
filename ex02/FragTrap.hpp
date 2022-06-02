#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
# include <iostream>
# include <string>

class FragTrap : public ClapTrap
{
	public:
		// Constructors
		FragTrap();
		FragTrap(const FragTrap &copy);
		FragTrap(std::string Name);
		
		// Destructor
        void highFivesGuy(void);
		~FragTrap();
		
	private:
		
};

#endif