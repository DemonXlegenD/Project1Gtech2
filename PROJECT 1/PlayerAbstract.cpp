#include "PlayerAbstract.h"


PlayerAbstract::PlayerAbstract(
	const std::string id,
	const std::string name = "player",
	int pvMax = 100,
	int attackMax = 20,
	int attack = 5,
	int defenseMax = 10,
	int defense = 5,
	float speedMax = 1.0f,
	float speed = 0.5f,
	int manaMax = 500,
	std::string typePlayer = "Villageois"
) :
	id(id),
	name(name),
	pvMax(pvMax),
	pv(pvMax),
	attackMax(attackMax),
	attack(attack),
	defenseMax(defenseMax),
	defense(defense),
	speedMax(speedMax),
	speed(speed),
	manaMax(manaMax),
	mana(manaMax),
	basic_spell(std::string("Attaque de base"), 30, 10),
	typePlayer(typePlayer)
{}

std::string PlayerAbstract::getId() const
{
	return id;
}

std::string PlayerAbstract::getName() const
{
	return name;
}

int PlayerAbstract::getActualPv() const {
	return pv;
}

void PlayerAbstract::setActualPv(int newPv) {
	if (newPv > pvMax) {
		pv = pvMax;
	}
	else {
		pv = newPv;
	}
}

int PlayerAbstract::getActualAttack() const {
	return attack;
}

void PlayerAbstract::setActualAttack(int newAttack) {
	if (newAttack > attackMax) {
		attack = attackMax;
	}
	else {
		attack = newAttack;
	}
}

int PlayerAbstract::getActualDefense() const {
	return defense;
}

void PlayerAbstract::setActualDefense(int newDefense) {
	if (newDefense > defenseMax) {
		defense = defenseMax;
	}
	else {
		defense = newDefense;
	}
}

float PlayerAbstract::getActualSpeed() const {
	return speed;
}

void PlayerAbstract::setActualSpeed(float newSpeed) {
	if (newSpeed > speedMax) {
		speed = speedMax;
	}
	else {
		speed = newSpeed;
	}
}

int PlayerAbstract::getActualMana() const {
	return mana;
}

void PlayerAbstract::setActualMana(int newMana) {
	if (newMana > manaMax) {
		mana = manaMax;
	}
	else {
		mana = newMana;
	}
}

std::string PlayerAbstract::getLastSpellName() {
	return last_spell_name;
}

void PlayerAbstract::setLastSpellName(std::string spell_name) {
	last_spell_name = spell_name;
}

void PlayerAbstract::afficherInfos() {
	std::cout << "Nom : " << name << ", Type : " << typePlayer << ", Attack : " << attack << ", Defense : " << defense << ", PV : " << pv << std::endl;
}

void PlayerAbstract::getDamage(int damage)
{
	pv -= (damage - (defense / 100 * damage));
}

void PlayerAbstract::getHealth(int health)
{
	pv += health;
}

void PlayerAbstract::callUsedSpell(Spell usedSpell) {
	std::cout << "Joueur " << name << " a utiliser le sort " << usedSpell.getName() << "." << std::endl;
}

void PlayerAbstract::getPlayerType(std::string typePlayer) {
	if (typePlayer === "Wizard") {
		return new PlayerWizard;
	}
	else if (typePlayer === "Warrior") {
		return new PlayerWarrior;
	}
	else if (typePlayer === "Knight") {
		return new PlayerKnight;
	}
	else if (typePlayer === "Guardian") {
		return new PlayerGuardian;
	}
}


Spell PlayerAbstract::useOffensive() {

	return Spell{ "Heavy Swing",attack,0 };

}
Spell PlayerAbstract::useDefensive() {

	return { "Bloodwhetting",defense + (int)(defense * 1.2f),100 };
}
Spell PlayerAbstract::useBuff() {

	return { "Inner Release",attack + (int)(attack * 1.2f),100 };
}
Spell PlayerAbstract::useUltimate() {

	return { "Inner Chaos",attack * 2,200 };
}
void PlayerAbstract::setActionList(std::vector<Spell> actionList) {
	actionList.push_back(PlayerAbstract::useOffensive());
	actionList.push_back(PlayerAbstract::useDefensive());
	actionList.push_back(PlayerAbstract::useBuff());
	actionList.push_back(PlayerAbstract::useUltimate());
}

std::vector<Spell> PlayerAbstract::getActionList() {
	return actionList;
}


PlayerAbstract::~PlayerAbstract() {}
