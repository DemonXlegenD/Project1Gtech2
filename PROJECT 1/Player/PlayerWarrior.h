#pragma once
#include "../PlayerAbstract.h"



class PlayerWarrior : public PlayerAbstract
{
	using PlayerAbstract::PlayerAbstract;

public:

	PlayerWarrior(
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
	);


private:

};
