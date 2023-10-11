#include "PlayerWizard.h"

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