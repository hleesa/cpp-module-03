
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap(), name("none") {
	std::cout << "DiamondTrap name:" << name << " Default constructor called" << std::endl;
	setHitPoint(FragTrap::getHitPoint());
	setEnergyPoint(ScavTrap::getEnergyPoint());
	setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name) {
	std::cout << "DiamondTrap name:" << name << " parameterized constructor called" << std::endl;
	setHitPoint(FragTrap::getHitPoint());
	setEnergyPoint(ScavTrap::getEnergyPoint());
	setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other), name(other.name) {
	std::cout << "DiamondTrap name:" << name << " Copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
	std::cout << "DiamondTrap name:" << name << " Copy assignment operator called" << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other);
		name = other.name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap name:" << name << " Destructor called" << std::endl;
}

std::string DiamondTrap::getName(void) const {
	return name;
}

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "name:" << name << ", ClapTrap name:" << ClapTrap::getName() << std::endl;
}

std::ostream& operator<<(std::ostream& os, const DiamondTrap& obj) {
	os << "name:" << obj.getName() << ", hit point:" << obj.getHitPoint() << ", energy point:"
	   << obj.getEnergyPoint() << ", attack damage:" << obj.getAttackDamage() << std::endl;
	return os;
}
