#include "Team.h"
#include "GameLoop.h"

Team::Team(std::string id, std::string name) : id(id), name(name)
{
}


std::string Team::getId() {
	return id;
}
std::string Team::getName() {
	return name;
}

void Team::resizePlayers(int numberPlayers) {
	players.resize(numberPlayers);
}

void Team::createPlayer(std::string idPlayer, std::string namePlayer) {
	std::cout << "Creation d'un nouveau joueur" << std::endl;

	std::string type(GameLoop::askType(idPlayer));

	if (type == std::string("Magicien")) {
		PlayerWizard* wizard = new PlayerWizard(idPlayer, namePlayer, 100, 50, 20, 10, 5, 1.0f, 0.6f, 500);
		players.push_back(wizard);
	}
	else if (type == std::string("Guerrier")) {
		PlayerWarrior* warrior = new PlayerWarrior(idPlayer, namePlayer, 100, 50, 20, 10, 5, 1.0f, 0.6f, 500);
		players.push_back(warrior);
	}
	else if (type == std::string("Chevalier")) {
		PlayerKnight*  knight = new PlayerKnight(idPlayer, namePlayer, 100, 50, 20, 10, 5, 1.0f, 0.6f, 500);
		players.push_back(knight);
	}
	else if (type == std::string("Gardien")) {
		PlayerGuardian*  guardian = new PlayerGuardian(idPlayer, namePlayer, 100, 50, 20, 10, 5, 1.0f, 0.6f, 500);
		players.push_back(guardian);
	}

	std::cout << "apres" << std::endl;
	std::cout << "Creation terminee" << std::endl;
}
std::vector<PlayerAbstract*> Team::getPlayers() {
	return players;
}

PlayerAbstract* Team::getPlayerById(std::string id) {
	for (PlayerAbstract* player : players) {
		if (player->getId() == id) {
			return player;
		}
	}
	return nullptr;
}

PlayerAbstract* Team::getPlayerByIndex(int index) {
	if (index < players.size() - 1) {
		return players[index];
	}

	return nullptr;
}

int Team::getScore() {
	return score;
}

void Team::addScore() {
	score++;
}

Team::~Team() {
	for (PlayerAbstract* player : players) {
		delete player;
	}
}