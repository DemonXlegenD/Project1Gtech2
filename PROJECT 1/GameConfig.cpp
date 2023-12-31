#include "GameConfig.h"
#include <iostream>

GameConfig::GameConfig(Team team1, Team team2, std::vector<PlayerAbstract>): team1(team1), team2(team2), players(players){}


Team GameConfig::getTeam1() {
	return team1;
}
Team GameConfig::getTeam2() {
	return team2;
}

std::vector<PlayerAbstract> GameConfig::getPlayers() {
	return players;
}
PlayerAbstract GameConfig::getPlayerById(std::string id) {
	for (const PlayerAbstract player : players) {
		if (player.getId() == id) {
			return player;
		}
	}
}

PlayerAbstract GameConfig::getPlayerByIndex(int index) {
	return players[index];
}

size_t GameConfig::getNumberPlayers() {
	return players.size();
}


GameConfig::~GameConfig(){}