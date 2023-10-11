#include "GameConfig.h"
#include <iostream>

GameConfig::GameConfig(PlayerAbstract player1, PlayerAbstract player2): player1(player1), player2(player2), round_number(0), timer(0){}

PlayerAbstract GameConfig::getPlayer1() {
	return player1;
}
PlayerAbstract GameConfig::getPlayer2() {
	return player2;
}

int GameConfig::getRound() {
	return round_number;
}
void GameConfig::setRound(int round) {
	round_number = round;
}
void GameConfig::addRound() {
	round_number++;
}

int GameConfig::getTimer() {
	return timer;
}

void GameConfig::showTimer() {
	std::cout << "Temps de jeu : " << timer << "." << std::endl;
}

GameConfig::~GameConfig(){}