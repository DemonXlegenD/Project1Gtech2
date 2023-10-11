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


int main()
{
	std::cout << "Nintendo!\n";
	std::this_thread::sleep_for(std::chrono::seconds(1));
	std::cout << "Fight To Fight!\n";

	std::string name1 = GameLoop::askName("Joueur 1");
	std::string name2 = GameLoop::askName("Joueur 2");

	PlayerWizard player1(name1, 100, 20, 10, 20, 5, 200);

	player1.afficherInfos();
	std::this_thread::sleep_for(std::chrono::seconds(1));

	return 0;
}
