#include "PlayerGuardian.h"

PlayerGuardian::PlayerGuardian(
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
	std::string("Guardian")
) {}

int PlayerGuardian::useAvadacadavra() {

	return attack * 2;
}