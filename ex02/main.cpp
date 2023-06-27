
#include "FragTrap.hpp"

int main() {
	FragTrap AA("cadet");
	std::cout << AA;
	FragTrap BB("bocal");
	std::cout << BB;
	std::cout << "================================================================================" << std::endl;
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
		BB.beRepaired(30);
		std::cout << BB;
	}
	std::cout << "================================================================================" << std::endl;
	BB.highFivesGuys();
	std::cout << "================================================================================" << std::endl;
	FragTrap CC(FragTrap("member"));
	std::cout << CC;
	FragTrap DD(CC);
	std::cout << DD;
	FragTrap EE;
	EE = DD;1
	std::cout << EE;
	std::cout << "================================================================================" << std::endl;
	return 0;
}
