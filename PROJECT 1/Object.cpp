#include "Object.h"

Object::Object(){}

std::string Object::getName() {
	return name;
}
int Object::getStock() {
	return stock;
}
int Object::getHealth() {
	return health;
}
int Object::getDamage() {
	return damage;
}
int Object::getMana() {
	return mana;
}

Object::~Object() {}