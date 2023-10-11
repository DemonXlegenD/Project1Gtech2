#include <iostream>
#include "Spell.h"


Spell::Spell(std::string name, int damage, int mana) : name(name), damage(damage), mana_needed(mana) {}

const std::string Spell::getName(){
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