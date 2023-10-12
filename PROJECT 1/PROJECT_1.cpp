// PROJECT 1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <thread>
#include <chrono>
#include <fstream>
#include <string>

#include "PlayerAbstract.h"
#include "./Player/PlayerWizard.h"
#include "GameLoop.h"
#include "GameConfig.h"
#include "GameStats.h"
#include "Team.h"



int main()
{
	std::cout << "Nintendo!\n";
	std::this_thread::sleep_for(std::chrono::seconds(1));
	std::cout << "Fight To Fight!\n";

	GameConfig config;
	config.setNumberTeams(2);
	config.setNumberPlayers();

	for (int i = 0; i < config.getNumberTeams(); i++) {
		config.createTeam("Team " + std::to_string(i + 1));
		std::this_thread::sleep_for(std::chrono::seconds(1));
		for (int j = 0; j < config.getNumberPlayers() / 2; j++) {
			std::string id("Joueur " + std::to_string(j + 1));
			config.getTeamByIndex(i)->createPlayer(id, GameLoop::askName(id));
			std::this_thread::sleep_for(std::chrono::seconds(1));
			std::this_thread::sleep_for(std::chrono::seconds(1));
		}
	}

	GameStats stats;
	int* turns = stats.getActualTurnNumber();

	do {
		std::cout << "Turns " << turns << std::endl;

		for (int i = 0; i < config.getNumberPlayers(); i++) {
			do {
				std::cout << "Au tour du" << config.getPlayerByIndex(i)->getId() << " : " << config.getPlayerByIndex(i)->getName() << "." << std::endl;

				break;
			} while (true);
		}


		break;
	} while (config.getPlayerByIndex(0)->getActualPv() > 0 && config.getPlayerByIndex(1)->getActualPv() > 0);


	return 0;
}
