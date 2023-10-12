#include "GameConfig.h"
#include <iostream>

GameConfig::GameConfig() {}

int GameConfig::getNumberPlayers() {
	return numberPlayers;
}
int GameConfig::getNumberTeams() {
	return numberTeams;
}

void GameConfig::setNumberPlayers() {
	numberPlayers = GameLoop::askNumberPlayer();
	this->resizeAllPlayers(numberPlayers);
}

void GameConfig::setNumberTeams(int nbr) {
	numberTeams = nbr;
	this->resizeTeams(numberTeams);
}

void GameConfig::createTeam(std::string id) {
	std::cout << "Creation d'une equipe" << std::endl;
	Team* const createdTeam = new Team(id, "Nom d'equipe");
	teams.push_back(createdTeam);
	std::cout << "Creation terminee" << std::endl;
}

void GameConfig::resizeTeams(int size) {
	teams.resize(size);
}
void GameConfig::resizeAllPlayers(int size) {
	allPlayers.resize(size);
}

std::vector<Team*> GameConfig::getTeams() {
	return teams;
}
Team* GameConfig::getTeamById(std::string id) {
	for (Team* team : teams) {
		if (team->getId() == id) {
			return team;
		}
	}
	return nullptr;
}
Team* GameConfig::getTeamByIndex(int index) {
	if (index < teams.size() - 1) {
		return teams[index];
	}
	return nullptr;
}

std::vector<PlayerAbstract*> GameConfig::getAllPlayers() {
	quicksort(allPlayers, 0, allPlayers.size() - 1);
	return allPlayers;
}

void GameConfig::setAllPlayers() {
	for (Team* const team : teams) {
		for (PlayerAbstract* const player : team->getPlayers()) {
			allPlayers.push_back(player);
		}
	}
}


PlayerAbstract* GameConfig::getPlayerById(std::string id) {
	for (PlayerAbstract* player : allPlayers) {
		if (player->getId() == id) {
			return player;
		}
	}
	return nullptr;
}

PlayerAbstract* GameConfig::getPlayerByIndex(int index) {
	if (index < allPlayers.size() - 1) {
		return allPlayers[index];
	}
	return nullptr;
}



GameConfig::~GameConfig() {
	for (Team* team : teams) {
		delete team;
	}
	for (PlayerAbstract* player : allPlayers) {
		delete player;
	}
	
}