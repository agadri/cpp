#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
		// Constructors
		ClapTrap();
		ClapTrap(const ClapTrap &copy);
		ClapTrap(std::string Name);
		
		// Destructor
		~ClapTrap();
		
		// Operators
		ClapTrap & operator=(const ClapTrap &assign);
		
		// Getters / Setters
		std::string getName() const;
		void setName(std::string Name);
		int getHitPoints() const;
		void setHitPoints(int HitPoints);
		int getEnergyPoints() const;
		void setEnergyPoints(int EnergyPoints);
		int getAttackDamage() const;
		void setAttackDamage(int AttackDamage);

		// Core
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		bool isAble();
		
	private:
		std::string _Name;
		int _HitPoints;
		int _EnergyPoints;
		int _AttackDamage;
		
};

#endif