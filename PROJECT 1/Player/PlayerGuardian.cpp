#include "PlayerGuardian.h"

PlayerGuardian::PlayerGuardian(
	const std::string id,
	const std::string name,
	int pvMax,
	int attackMax,
	int attack,
	int defenseMax,
	int defense,
	float speedMax,
	float speed,
	int manaMax
) : PlayerAbstract(
	id,
	name,
	pvMax,
	attackMax,
	attack,
	defenseMax,
	defense,
	speedMax,
	speed,
	manaMax,
	std::string("Guardian")
) {
	archetype = guardian;
}


