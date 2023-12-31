#include "PlayerWarrior.h"

PlayerWarrior::PlayerWarrior(
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
	std::string("Warrior")
) {
	archetype = warrior;
}
