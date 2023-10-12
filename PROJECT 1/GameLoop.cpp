#include "GameLoop.h"

GameLoop::GameLoop() {}


int GameLoop::askNumberPlayer() {
	int numberPlayer = 0;
	do {
		std::cout << "Combien de joueurs dans la partie (2,4,6,8): ";
		std::cin >> numberPlayer;

		// V�rification de la validit� de la saisie (par exemple, si la longueur est sup�rieure � 3 caract�res)
		if (numberPlayer > 1 && numberPlayer % 2 == 0 && numberPlayer < 9) {
			std::cout << "Saisie valide, nombre de joueurs = " << numberPlayer << std::endl;
			break;  // Sort de la boucle lorsque la saisie est valide
		}
		else {
			std::cout << "Saisie invalide. R�essayez." << std::endl;
			// Efface le tampon d'entr�e pour �viter des boucles infinies si l'utilisateur entre des caract�res non valides
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	} while (true);
	return numberPlayer;
}

std::string GameLoop::askNameTeam(std::string team) {
	std::string name;
	do {
		std::cout << team << ", entrez un nom d'equipe valide : ";
		std::cin >> name;

		// V�rification de la validit� de la saisie (par exemple, si la longueur est sup�rieure � 3 caract�res)
		if (name.length() > 3) {
			std::cout << "Saisie valide : " << name << std::endl;
			break;  // Sort de la boucle lorsque la saisie est valide
		}
		else {
			std::cout << "Saisie invalide. R�essayez." << std::endl;
			// Efface le tampon d'entr�e pour �viter des boucles infinies si l'utilisateur entre des caract�res non valides
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	} while (true);

	return name;
}

std::string GameLoop::askName(std::string player) {
	std::string name;
	do {
		std::cout << player << ", entrez un nom valide : ";
		std::cin >> name;

		// V�rification de la validit� de la saisie (par exemple, si la longueur est sup�rieure � 3 caract�res)
		if (name.length() >= 3) {
			std::cout << "Saisie valide : " << name << std::endl;
			break;  // Sort de la boucle lorsque la saisie est valide
		}
		else {
			std::cout << "Saisie invalide. R�essayez." << std::endl;
			// Efface le tampon d'entr�e pour �viter des boucles infinies si l'utilisateur entre des caract�res non valides
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	} while (true);

	return name;
}

std::string GameLoop::askType(std::string namePlayer) {
	std::string chosenType;
	std::vector<std::string> types;
	types.push_back("Magicien");
	types.push_back("Guerrier");
	types.push_back("Chevalier");
	types.push_back("Gardien");

	do {
		std::cout << namePlayer << ", choisissez un type de combattant : " << std::endl;
		int index = 1;
		for (const std::string type : types) {
			std::cout << index << "." << type << std::endl;
			index++;
		}

		std::cin >> chosenType;
		index = 1;
		for (const std::string type : types) {
			if (chosenType == type || chosenType == std::to_string(index)) {
				return type;
			}
			index++;
		}
		std::cout << "Saisie invalide. R�essayez." << std::endl;
	} while (true);
}

GameLoop::~GameLoop() {}