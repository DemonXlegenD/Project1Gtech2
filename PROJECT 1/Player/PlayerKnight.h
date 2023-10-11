#pragma once
#include "../PlayerAbstract.h"


class PlayerKnight : public PlayerAbstract
{
	using PlayerAbstract::PlayerAbstract;

public:

	PlayerKnight(
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



	int useAvadacadavra();

private:

};

