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
#include "Team.h"



int main()
{
	std::cout << "Nintendo!\n";
	std::this_thread::sleep_for(std::chrono::seconds(1));
	std::cout << "Fight To Fight!\n";

	int numberPlayer = GameLoop::askNumberPlayer();
	int numberTeams = 2;
	std::vector<PlayerAbstract> players;

	std::vector<Team> teams;
	for (int i = 0; i < numberTeams; i++) {

		std::string name(GameLoop::askNameTeam("Team " + std::to_string(i + 1)));
		std::this_thread::sleep_for(std::chrono::seconds(1));
		std::vector<PlayerAbstract> playersTeam;

		for (int i = 0; i < numberPlayer / 2; i++) {
			std::string name(GameLoop::askName("Joueur " + std::to_string(i + 1)));
			std::this_thread::sleep_for(std::chrono::seconds(1));
			PlayerAbstract player(GameLoop::askType("Joueur " + std::to_string(i + 1), name));
			playersTeam.push_back(player);
			players.push_back(player);
			std::this_thread::sleep_for(std::chrono::seconds(1));
			playersTeam[i].afficherInfos();
			std::this_thread::sleep_for(std::chrono::seconds(1));
		}
		teams.push_back(Team(name, playersTeam));
	}





	GameConfig config(teams[0], teams[1], players);

	int playerNumberTurn = 0;

	do {
		std::cout << "FIGHT" << std::endl;

		do {
			std::cout << "Au tour du joueur " << 1 << " : " << players[0].getName() << ".\n";
			players[0].addSpellToList();
			for (int j = 0; j < players[0].getSpellList().size(); j++) {
				std::cout << players[0].getSpellList()[j].getName() << std::endl;
			}
			std::cout << "Choisir une action a faire" << std::endl;

		} while (true);

		do {
			std::cout << "Au tour du joueur " << 2 << " : " << players[1].getName() << ".\n";
			players[1].addSpellToList();
			for (int j = 0; j < players[1].getSpellList().size(); j++) {
				std::cout << players[1].getSpellList()[j].getName() << std::endl;
			}

		} while (true);


	} while (config.getPlayerByIndex(0).getActualPv() > 0 && config.getPlayerByIndex(1).getActualPv() > 0);

	int actionTurn = 0;


	return 0;
}
