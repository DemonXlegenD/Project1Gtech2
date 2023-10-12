#include "GameStats.h"
#include <iostream>

GameStats::GameStats() {}


int GameStats::getTimer() {
	return timer;
}
void GameStats::showTimer() {
	std::cout << "Temps de jeu : " << timer << "." << std::endl;
}


int GameStats::getTotalTurnNumber() {
	return totalTurnNumber;
}
int* GameStats::getActualTurnNumber() {
	return &actualTurnNumber;
}

void GameStats::resetActualTurn() {
	actualTurnNumber = 0;
}
void GameStats::addTurn() {
	actualTurnNumber++;
}

int GameStats::getActualPlayerRound() {
	return actualPlayerRound;
}
void GameStats::addRoundToPlayerRound() {
	actualPlayerRound++;
}
int GameStats::getTotalPlayerRound() {
	return totalPlayerRound;
}
void GameStats::addRoundToTotalPlayerRound() {
	totalPlayerRound++;
}

int GameStats::getTotalDamage() {
	return totalDamage;
}

void GameStats::addDamage(int damage) {
	totalDamage += damage;
}

int GameStats::getTotalHealth() {
	return totalHealth;
}

void GameStats::addHealth(int health) {
	totalHealth += health;
}

int GameStats::getTotalDefense() {
	return totalDefense;
}

void GameStats::addDefense(int defense) {
	totalDefense += defense;
}

GameStats::~GameStats() {}