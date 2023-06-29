#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

protected:
	std::string name;
	unsigned long long hitPoint;
	unsigned int energyPoint;
	unsigned int attackDamage;

public:

	ClapTrap();

	ClapTrap(const std::string& name);

	ClapTrap(const ClapTrap& other);

	ClapTrap& operator=(const ClapTrap& other);

	~ClapTrap();

	void attack(const std::string& target);

	void takeDamage(unsigned int amount);

	void beRepaired(unsigned int amount);

	std::string getName(void) const;

	unsigned long long getHitPoint(void) const;

	unsigned int getEnergyPoint(void) const;

	unsigned int getAttackDamage(void) const;

};

std::ostream& operator<<(std::ostream& os, const ClapTrap& obj);

#endif //CLAPTRAP_HPP
