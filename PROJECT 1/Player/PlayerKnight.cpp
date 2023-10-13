#include "PlayerKnight.h"

PlayerKnight::PlayerKnight(
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
	std::string("Knight")
) {
	archetype = knight;
}
