#include "PlayerWizard.h"
#include <vector>


const std::vector<std::string> actions = {
	"Avadacadavra",
	"Mana shield",
	"Attack Debuff",
	"Attack Buff",
	"Surrend",
};

int PlayerWizard::useAvadacadavra() {

	return attack_actuel * 2;
}

void PlayerWizard::useManaShield() {
std::cout << "Mana shield Used\n";
}

void PlayerWizard::useAtkBuff() {
std::cout << "Attack Buffed\n";
}

void PlayerWizard::useAtkDebuff() {
std::cout << "Ennemy Attack Debuffed\n";
}

void PlayerWizard::surrender() {
std::cout << "You have surrendered the fight\n";
}

void useActions(int index) {
	if (index >= 0 && index < actions.size()) {
		std::cout << actions[index] << " est ex�cut�e" << std::endl;
	}
	else {
		std::cout << "Indice d'action invalide." << std::endl;
	}
}

PlayerWizard::PlayerWizard(const std::string n, int pv_max, int attack_max, int attack, int defense_max, int defense, int mana_max) : PlayerAbstract(n, pv_max, attack_max, attack, defense_max, defense, mana_max, std::string("Wizard")) {}

PlayerWizard::PlayerWizard(
	const std::string name,
	int pv_max,
	int attack_max,
	int attack,
	int defense_max,
	int defense,
	int mana_max
) : PlayerAbstract(
	name,
	pv_max,
	attack_max,
	attack,
	defense_max,
	defense,
	mana_max,
	std::string("Wizard")
),
avadacadavra(Spell(std::string("avadacavadra"), 70, 100))
{}

