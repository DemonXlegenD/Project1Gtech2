#include "PlayerAbstract.h"


PlayerAbstract::PlayerAbstract(
	const std::string n = "player",
	int pv_max = 100,
	int attack_max = 20,
	int attack = 5,
	int defense_max = 10,
	int defense = 5,
	int mana_max = 500,
	std::string typePlayer = "Villageois"
) :
	name(n),
	pv_max(pv_max),
	pv_actuel(pv_max),
	attack_max(attack_max),
	attack_actuel(attack),
	defense_max(defense_max),
	defense_actuel(defense),
	mana_max(mana_max),
	mana_actuel(mana_max),
	basic_spell(std::string("Attaque de base"), 30, 10),
	typePlayer(typePlayer)
{}

std::string PlayerAbstract::getName() const
{
	return std::string();
}

int PlayerAbstract::getPvActuel() const {
	return pv_actuel;
}

void PlayerAbstract::setPvActuel(int pv) {
	if (pv > pv_max) {
		pv_actuel = pv_max;
	}
	else {
		pv_actuel = pv;
	}
}

int PlayerAbstract::getAttackActuel() const {
	return attack_actuel;
}

void PlayerAbstract::setAttackActuel(int attack) {
	if (attack > attack_max) {
		attack_actuel = attack_max;
	}
	else {
		attack_actuel = attack;
	}
}

int PlayerAbstract::getDefenseActuel() const {
	return defense_actuel;
}

void PlayerAbstract::setDefenseActuel(int defense) {
	if (defense > defense_max) {
		defense_actuel = defense_max;
	}
	else {
		defense_actuel = defense;
	}
}

int PlayerAbstract::getManaActuel() const {
	return mana_actuel;
}

void PlayerAbstract::setManaActuel(int mana) {
	if (mana > mana_max) {
		mana_actuel = mana_max;
	}
	else {
		mana_actuel = mana;
	}
}

std::string PlayerAbstract::getLastSpellName() {
	return last_spell_name;
}

void PlayerAbstract::setLastSpellName(std::string spell_name) {
	last_spell_name = spell_name;
}

void PlayerAbstract::afficherInfos() {
	std::cout << "Nom : " << name << ", Type : " << typePlayer << ", Attack : " << attack_actuel << ", Defense : " << defense_actuel << ", PV : " << pv_actuel << std::endl;
}

void PlayerAbstract::getDamage(int damage)
{
	pv_actuel -= (damage - (defense_actuel / 100 * damage));
}

void PlayerAbstract::getHealth(int health)
{
	pv_actuel += health;
}

void PlayerAbstract::callUsedSpell(Spell usedSpell) {
	std::cout << "Joueur " << name << " a utiliser le sort " << usedSpell.getName() << "." << std::endl;
}

PlayerAbstract::~PlayerAbstract() {}
