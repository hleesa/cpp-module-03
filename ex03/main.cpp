
#include "DiamondTrap.hpp"

int main() {

	DiamondTrap AA("cadet");
	std::cout << AA;
	DiamondTrap BB("bocal");
	std::cout << BB;
	std::cout << "===============================================================================" << std::endl;
	for (int i = 1; i <= 5; ++i) {
		std::cout << "turn: " << i << std::endl;
		AA.attack(BB.getName());
		std::cout << AA;
		if (BB.getEnergyPoint() > 0)
			BB.takeDamage(AA.getAttackDamage());
		std::cout << BB;
	}
	std::cout << "================================================================================" << std::endl;
	for (int i = 1; i <= 3; ++i) {
		std::cout << "turn: " << i << std::endl;
		AA.beRepaired(30);
		std::cout << AA;
	}
	std::cout << "================================================================================" << std::endl;
	DiamondTrap CC(DiamondTrap("test"));
	std::cout << CC;
	DiamondTrap DD(CC);
	std::cout << DD;
	DiamondTrap EE;
	EE = DD;
	std::cout << EE;
	std::cout << "================================================================================" << std::endl;
	EE.guardGate();
	EE.highFivesGuys();
	EE.whoAmI();
	std::cout << "================================================================================" << std::endl;
	return 0;
}
