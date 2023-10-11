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
void GameState::addRound() {
	actualTurnNumber++;
}

GameState::~GameState() {}