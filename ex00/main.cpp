
#include "ClapTrap.hpp"

int main() {
	ClapTrap AA("cadet");
	std::cout << AA;
	ClapTrap BB("bocal");
	std::cout << BB;
	std::cout << "================================================================================" << std::endl;
	for (int i = 1; i <= 11; ++i) {
		std::cout << "turn: " << i << std::endl;
		AA.attack(BB.getName());
		std::cout << AA;
		if (AA.getEnergyPoint() > 0)
			BB.takeDamage(AA.getAttackDamage());
		std::cout << BB;
	}
	std::cout << "================================================================================" << std::endl;
	for (int i = 1; i <= 5; ++i) {
		std::cout << "turn: " << i << std::endl;
		BB.beRepaired(1);
		std::cout << BB;
	}
	std::cout << "================================================================================" << std::endl;
	ClapTrap CC("test");
	std::cout << CC;
	ClapTrap DD;
	std::cout << DD;
	DD = CC;
	std::cout << DD;
	std::cout << "================================================================================" << std::endl;
	return 0;
}
