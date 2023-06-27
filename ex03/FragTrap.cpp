
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap name:" << getName() << " Default constructor called" << std::endl;
	setHitPoint(100);
	setEnergyPoint(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap name:" << getName() << " parameterized constructor called" << std::endl;
	setHitPoint(100);
	setEnergyPoint(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	std::cout << "FragTrap name:" << getName() << " Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	std::cout << "FragTrap name:" << getName() << " Copy assignment operator called" << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap name:" << getName() << " Destructor called" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "positive high fives" << std::endl;
}
