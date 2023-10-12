#include "Team.h"

Team::Team(std::string name, std::vector<PlayerAbstract> players) : name(name), players(players), score(0) {}

std::string Team::getName() {
	return name;
}
std::vector<PlayerAbstract> Team::getPlayers() {
	return players;
}
int Team::getScore() {
	return score;
}

void Team::addScore() {
	score++;
}

Team::~Team() {}