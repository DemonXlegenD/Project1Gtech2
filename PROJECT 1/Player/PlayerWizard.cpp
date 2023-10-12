#include "PlayerWizard.h"
#include <vector>

PlayerWizard::PlayerWizard(
	const std::string id,
	const std::string name,
	int pvMax,
	int attackMax,
	int attack,
	int defenseMax,
	int defense,
	int manaMax
) : PlayerAbstract(
	id,
	name,
	pvMax,
	attackMax,
	attack,
	defenseMax,
	defense,
	manaMax,
	std::string("Wizard")
)
{
	archetype = wizard;
}


const std::vector<std::string> actions = {
	"Avadacadavra",
	"Mana shield",
	"Attack Debuff",
	"Attack Buff",
	"Surrend",
};

int PlayerWizard::useAvadacadavra() {

	return attack * 2;
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

void PlayerWizard::useActions(int index) {
	if (index >= 0 && index < actions.size()) {
		std::cout << actions[index] << " est ex�cut�e" << std::endl;
	}
	else {
		std::cout << "Indice d'action invalide." << std::endl;
	}
}