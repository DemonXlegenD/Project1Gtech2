#pragma once
#include <iostream>
#include "Spell.h"

class PlayerAbstract
{
public:

	PlayerAbstract(const std::string name, int pv_max, int attack_max, int attack_actuel, int defense_max, int defense_actuel, int mana_max, std::string typePlayer);

	std::string getName() const;


	int getPvActuel() const;
	void setPvActuel(int pv);

	int getAttackActuel() const;
	void setAttackActuel(int attack);

	int getDefenseActuel() const;
	void setDefenseActuel(int defense);

	int getManaActuel() const;
	void setManaActuel(int mana);

	std::string getLastSpellName();
	void setLastSpellName(std::string spell_name);

	void getDamage(int damage);
	void getHealth(int damage);

	void afficherInfos();

	void callUsedSpell(Spell usedSpell);

	~PlayerAbstract();

protected:
	int pv_max;
	int pv_actuel;

	int attack_max;
	int attack_actuel;

	int mana_max;
	int mana_actuel;

	int defense_max;
	int defense_actuel;


	Spell basic_spell;

	std::string last_spell_name;

	std::string name;
	std::string typePlayer;
};