
#include "ScavTrap.hpp"

int main() {
	ScavTrap AA("cadet");
	std::cout << AA;
	ScavTrap BB("bocal");
	std::cout << BB;
	std::cout << "================================================================================" << std::endl;
	for (int i = 1; i <= 6; ++i) {
		std::cout << "turn: " << i << std::endl;
		AA.attack(BB.getName());
		std::cout << AA;
		if (AA.getEnergyPoint() >0)
			BB.takeDamage(AA.getAttackDamage());
		std::cout << BB;
	}
	std::cout << "================================================================================" << std::endl;
	BB = ScavTrap("new bocal");
	for (int i = 1; i <= 6; ++i) {
		std::cout << "turn: " << i << std::endl;
		BB.beRepaired(20);
		std::cout << BB;
	}
	std::cout << "================================================================================" << std::endl;
	BB.guardGate();
	std::cout << "================================================================================" << std::endl;
	ScavTrap CC("test");
	std::cout << CC;
	ScavTrap DD;
	std::cout << DD;
	DD = CC;
	std::cout << DD;
	std::cout << "================================================================================" << std::endl;
	return 0;
}
