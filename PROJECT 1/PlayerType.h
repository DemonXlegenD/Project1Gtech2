#pragma once
#include "../PlayerAbstract.h"

class PlayerType : public PlayerAbstract {

	using PlayerAbstract::PlayerAbstract;

public:

	PlayerType(const std::string n,
		int pv_max,
		int attack_max,
		int attack,
		int defense_max,
		int defense,
		int mana_max,
		std::string playerType) :
		PlayerAbstract(n,
			pv_max,
			attack_max,
			attack,
			defense_max,
			defense,
			mana_max) {};

	void displayStats() override {
		std::cout << "Type de joueur avec " << health << " de santé, " << attack << " d'attaque et " << defense << " de défense." << std::endl;
	}

};