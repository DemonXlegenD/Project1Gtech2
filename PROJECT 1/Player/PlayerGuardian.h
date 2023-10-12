#pragma once
#include "../PlayerAbstract.h"

class PlayerGuardian : public PlayerAbstract
{
	using PlayerAbstract::PlayerAbstract;

public:

	PlayerGuardian(
		const std::string id,
		const std::string name,
		int pv_max,
		int attack_max,
		int attack,
		int defense_max,
		int defense,
		int mana_max
	);


	int useAvadacadavra();

private:

};