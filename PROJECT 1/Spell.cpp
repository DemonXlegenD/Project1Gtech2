#include <iostream>
#include "Spell.h"


Spell::Spell(const std::string type, std::string name, int damage, int mana) : type(type), name(name), damage(damage), mana_needed(mana) {}

const std::string Spell::getType(){
	return type;
}

const std::string Spell::getName() {
	return name;
}

int Spell::getDamage() {
	return damage;
}
void Spell::setDamage(int new_damage) {
	damage = new_damage;
}

int Spell::getManaNeeded() {
	return mana_needed;
}
void Spell::setManaNeeded(int new_mana) {
	mana_needed = new_mana;
}

Spell::~Spell() {}