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

	virtual void addSpellToList() override {
		Spell spellOffensif("offensive", "yayaya", attack, 0);
		Spell spellDefensif("defensive", "yoyoyo", defense, 0);
		Spell spellBuff("buff", "yiyiyi", attack, 0);
		Spell spellUltimate("ultimate", "yuyuyu", 2, 0);
		spellList.push_back(spellOffensif);
		spellList.push_back(spellDefensif);
		spellList.push_back(spellBuff);
		spellList.push_back(spellUltimate);
	}

private:

};