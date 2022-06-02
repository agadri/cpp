#include "FragTrap.hpp"

// Constructors
FragTrap::FragTrap()
{
	_Name = "DefaultScavTrapName";
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	std::cout << "\e[0;33mDefault Constructor called of ScavTrap\e[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	_Name = copy.getName();
	_HitPoints = copy.getHitPoints();
	_EnergyPoints = copy.getEnergyPoints();
	_AttackDamage = copy.getAttackDamage();
	std::cout << "\e[0;33mCopy Constructor called of FragTrap\e[0m" << std::endl;
}

FragTrap::FragTrap(std::string Name)
{
	_Name = Name;
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	std::cout << "\e[0;33mFields Constructor called of FragTrap\e[0m" << std::endl;
}

void FragTrap::highFivesGuy(void)
{
	std::cout << "[FragTrap]: " << "give a high five please stp frerot ..." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "\e[0;31mDestructor called of FragTrap\e[0m" << std::endl;
}
