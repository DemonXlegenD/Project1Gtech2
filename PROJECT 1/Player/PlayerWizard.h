#pragma once
#include "../PlayerAbstract.h"

class PlayerWizard : public PlayerAbstract
{
	using PlayerAbstract::PlayerAbstract;

public:
	
	PlayerWizard(
		const std::string id,
		const std::string name,
		int pvMax,
		int attackMax,
		int attack,
		int defenseMax,
		int defense,
		int manaMax
	);

	void addSpellToList() override {
		Spell spellOffensif("yayaya", attack, 0);
		Spell spellDefensif("yoyoyo", defense, 0);
		Spell spellBuff("yiyiyi", attack, 0);
		Spell spellUltimate("yuyuyu", 2, 0);
		spellList.push_back(spellOffensif);
		spellList.push_back(spellDefensif);
		spellList.push_back(spellBuff);
		spellList.push_back(spellUltimate);
	}

	

private:

};