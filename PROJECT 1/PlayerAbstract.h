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
		float speedMax,
		float speed,
		int manaMax,
		std::string typePlayer
	);

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

	float getActualSpeed() const;
	void setActualSpeed(float speed);

	std::string getLastSpellName();
	void setLastSpellName(std::string spell_name);

	void getDamage(int damage);
	void getHealth(int heal);

	void afficherInfos();

	void callUsedSpell(Spell usedSpell);

	std::string getPlayerType();

	Spell useOffensive();
	Spell useDefensive();
	Spell useBuff();
	Spell useUltimate();

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

	float speedMax;
	float speed;


	Spell basic_spell;

	std::string last_spell_name;

	std::string name;
	std::string typePlayer;
};