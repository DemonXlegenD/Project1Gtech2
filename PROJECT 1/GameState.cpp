#include "GameState.h"
#include <iostream>

GameState::GameState(): actualTurnNumber(0), totalTurnNumber(0), timer(0) {}


int GameState::getTimer() {
	return timer;
}
void GameState::showTimer() {
	std::cout << "Temps de jeu : " << timer << "." << std::endl;
}


int GameState::getTotalTurnNumber() {
	return totalTurnNumber;
}
int GameState::getActualTurnNumber() {
	return actualTurnNumber;
}

void GameState::resetActualTurn() {
	actualTurnNumber = 0;
}
void GameState::addTurn() {
	actualTurnNumber++;
}

int GameState::getTotalDamage() {
	return totalDamage;
}

void GameState::addDamage(int damage) {
	totalDamage += damage;
}

int GameState::getTotalHealth() {
	return totalHealth;
}

void GameState::addHealth(int health) {
	totalHealth += health;
}

int GameState::getTotalDefense() {
	return totalDefense;
}

void GameState::addDefense(int defense) {
	totalDefense += defense;
}

GameState::~GameState() {}