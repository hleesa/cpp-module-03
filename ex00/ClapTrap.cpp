
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("none"), hitPoint(10), energyPoint(10), attackDamage(0) {
	std::cout << "ClapTrap name:" << name << " Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoint(10), energyPoint(10), attackDamage(0) {
	std::cout << "ClapTrap name:" << name << " parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), hitPoint(other.hitPoint), energyPoint(other.energyPoint),
											attackDamage(other.attackDamage) {
	std::cout << "ClapTrap name:" << name << " Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "ClapTrap name:" << name << " Copy assignment operator called" << std::endl;
	if (this != &other) {
		name = other.name;
		hitPoint = other.hitPoint;
		energyPoint = other.energyPoint;
		attackDamage = other.attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap name:" << name << " Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (hitPoint == 0 || energyPoint == 0) {
		return;
	}
	std::cout << "ClapTrap name:" << name << " attacks " << target << ", causing " << attackDamage
			  << " point of damage!" << std::endl;
	--energyPoint;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hitPoint == 0) {
		return;
	}
	std::cout << "ClapTrap name:" << name << " take " << amount << " point of damage!" << std::endl;
	if (amount > hitPoint)
		amount = hitPoint;
	hitPoint -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (hitPoint == 0 || energyPoint == 0) {
		return;
	}
	std::cout << "ClapTrap name:" << name << " is repaired " << amount << " hit point" << std::endl;
	--energyPoint;
	hitPoint += amount;
}

std::string ClapTrap::getName(void) const {
	return name;
}

unsigned long long ClapTrap::getHitPoint(void) const {
	return hitPoint;
}

unsigned int ClapTrap::getEnergyPoint(void) const {
	return energyPoint;
}

unsigned int ClapTrap::getAttackDamage(void) const {
	return attackDamage;
}

std::ostream& operator<<(std::ostream& os, const ClapTrap& obj) {
	os << "name:" << obj.getName() << ", hit point:" << obj.getHitPoint() << ", energy point:"
	   << obj.getEnergyPoint() << ", attack damage:" << obj.getAttackDamage() << std::endl;
	return os;
}
