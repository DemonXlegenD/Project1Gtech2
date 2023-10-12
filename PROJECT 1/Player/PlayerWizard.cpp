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