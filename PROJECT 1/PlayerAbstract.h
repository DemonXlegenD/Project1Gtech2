#pragma once
#include <iostream>
#include "Spell.h"
#include <vector>

class PlayerAbstract
{ 
public:

	PlayerAbstract(
		const std::string id,
		const std::string name,

		int pvMax,
		int attackMax,
		int attack,
		int defenseMax,
		int defense,
		int manaMax,
		std::string typePlayer
	);
	std::vector<Spell> spellList;

	enum archetypeEnum {
		wizard,
		knight,
		warrior,
		guardian
	};
	std::string getId() const;
	std::string getName() const;


	int getActualPv() const;
	void setActualPv(int pv);

	int getActualAttack() const;
	void setActualAttack(int attack);

	int getActualDefense() const;
	void setActualDefense(int defense);

	int getActualMana() const;
	void setActualMana(int mana);

	std::string getLastSpellName();
	void setLastSpellName(std::string spell_name);

	void getDamage(int damage);
	void getHealth(int heal);

	void afficherInfos();

	void callUsedSpell(Spell usedSpell);

	void getArchetype() {

	}

	std::string getPlayerType();


	virtual void addSpellToList();

	std::vector<Spell> getSpellList() const {
		return spellList;
	}


	//virtual std::vector<Spell> createSpellList();

	~PlayerAbstract();

protected:

	std::string id;


	int pvMax;
	int pv;

	int attackMax;
	int attack;

	int defenseMax;
	int defense;

	int manaMax;
	int mana;

	Spell basic_spell;

	std::string last_spell_name;

	std::string name;
	std::string typePlayer;

	archetypeEnum archetype;
};