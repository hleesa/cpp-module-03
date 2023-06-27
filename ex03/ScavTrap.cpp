
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap name:" << getName() << " Default constructor called" << std::endl;
	setHitPoint(100);
	setEnergyPoint(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
	std::cout << "ScavTrap name:" << getName() << " parameterized constructor called" << std::endl;
	setHitPoint(100);
	setEnergyPoint(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	std::cout << "ScavTrap name:" << getName() << " Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	std::cout << "ScavTrap name:" << getName() << " Copy assignment operator called" << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap name:" << getName() << " Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (getHitPoint() == 0 || getEnergyPoint() == 0) {
		return;
	}
	std::cout << "ScavTrap name:" << getName() << " attacks " << target << ", causing " << getAttackDamage()
			  << " point of damage!" << std::endl;
	setEnergyPoint(getEnergyPoint() - 1);
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
