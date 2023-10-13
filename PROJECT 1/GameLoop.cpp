#include "GameLoop.h"

GameLoop::GameLoop() {}



int GameLoop::askNumberPlayer() {
	int numberPlayer = 0;
	do {

		std::cout << "Combien de joueurs dans la partie (2): ";
		std::cin >> numberPlayer;

		// Verification de la validite de la saisie (par exemple, si la longueur est superieure à 3 caractères)
		if (numberPlayer > 1 && numberPlayer % 2 == 0 && numberPlayer < 9) {
			std::cout << "Saisie valide, nombre de joueurs = " << numberPlayer << std::endl;
			break;  // Sort de la boucle lorsque la saisie est valide
		}
		else {
			std::cout << "Saisie invalide. Reessayez." << std::endl;
			// Efface le tampon d'entree pour eviter des boucles infinies si l'utilisateur entre des caractères non valides
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		std::this_thread::sleep_for(std::chrono::seconds(2));
		system("cls");
	} while (true);
	std::this_thread::sleep_for(std::chrono::seconds(2));
	system("cls");
	return numberPlayer;
}

std::string GameLoop::askNameTeam(std::string team) {
	std::string name;
	do {
		std::cout << team << ", entrez un nom d'equipe valide : ";
		std::cin >> name;

		// Verification de la validite de la saisie (par exemple, si la longueur est superieure à 3 caractères)
		if (name.length() > 3) {
			std::cout << "Saisie valide : " << name << std::endl;
			break;  // Sort de la boucle lorsque la saisie est valide
		}
		else {
			std::cout << "Saisie invalide. Reessayez." << std::endl;
			// Efface le tampon d'entree pour eviter des boucles infinies si l'utilisateur entre des caractères non valides
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		std::this_thread::sleep_for(std::chrono::seconds(2));
		system("cls");
	} while (true);
	std::this_thread::sleep_for(std::chrono::seconds(2));
	system("cls");
	return name;
}

std::string GameLoop::askName(std::string player) {
	std::string name;
	do {
		std::cout << player << ", entrez un nom valide : ";
		std::cin >> name;

		// Verification de la validite de la saisie (par exemple, si la longueur est superieure à 3 caractères)
		if (name.length() >= 3) {
			std::cout << "Saisie valide : " << name << std::endl;
			break;  // Sort de la boucle lorsque la saisie est valide
		}
		else {
			std::cout << "Saisie invalide. Reessayez." << std::endl;
			// Efface le tampon d'entree pour eviter des boucles infinies si l'utilisateur entre des caractères non valides
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		std::this_thread::sleep_for(std::chrono::seconds(2));
		system("cls");
	} while (true);
	std::this_thread::sleep_for(std::chrono::seconds(2));
	system("cls");

	return name;
}

PlayerAbstract GameLoop::askType(std::string idPlayer, std::string namePlayer) {

	std::string classFile = "./Data/Class.txt";
	std::ifstream fichier(classFile);
	std::string chosenType;
	std::vector<TypeCombattantClass> combattants;
	int pvMax;
	int attackMax;
	int attack;
	int defenseMax;
	int defense;
	int manaMax;

	if (fichier.is_open()) {
		std::string ligne;
		std::string categorieActuelle;

		while (std::getline(fichier, ligne)) {
			if (ligne.find("[wizard]") != std::string::npos) {
				std::istringstream flux(ligne);
				std::string cle;
				int valeur;

				if (flux >> cle >> valeur) {
					if (cle == "pvMax") pvMax = valeur;
					else if (cle == "attackMax")attackMax = valeur;
					else if (cle == "attack")attack = valeur;
					else if (cle == "defenseMax")defenseMax = valeur;
					else if (cle == "defense") defense = valeur;
					else if (cle == "manaMax") manaMax = valeur;

				}
				combattants.push_back({ "Magicien", PlayerWizard(idPlayer, namePlayer, pvMax, attackMax, attack, defenseMax, defense, manaMax) });
			}
			else if (ligne.find("[warrior]") != std::string::npos) {
				std::istringstream flux(ligne);
				std::string cle;
				int valeur;

				if (flux >> cle >> valeur) {
					if (cle == "pvMax") pvMax = valeur;
					else if (cle == "attackMax")attackMax = valeur;
					else if (cle == "attack")attack = valeur;
					else if (cle == "defenseMax")defenseMax = valeur;
					else if (cle == "defense") defense = valeur;
					else if (cle == "manaMax") manaMax = valeur;

				}
				combattants.push_back({ "Guerrier", PlayerWarrior(idPlayer, namePlayer, pvMax, attackMax, attack, defenseMax, defense, manaMax) });
			}
			else if (ligne.find("[knight]") != std::string::npos) {
				std::istringstream flux(ligne);
				std::string cle;
				int valeur;

				if (flux >> cle >> valeur) {
					if (cle == "pvMax") pvMax = valeur;
					else if (cle == "attackMax")attackMax = valeur;
					else if (cle == "attack")attack = valeur;
					else if (cle == "defenseMax")defenseMax = valeur;
					else if (cle == "defense") defense = valeur;
					else if (cle == "manaMax") manaMax = valeur;

				}
				combattants.push_back({ "Chevalier", PlayerKnight(idPlayer, namePlayer, pvMax, attackMax, attack, defenseMax, defense, manaMax) });
			}
			else if (ligne.find("[guardian]") != std::string::npos) {
				std::istringstream flux(ligne);
				std::string cle;
				int valeur;

				if (flux >> cle >> valeur) {
					if (cle == "pvMax") pvMax = valeur;
					else if (cle == "attackMax")attackMax = valeur;
					else if (cle == "attack")attack = valeur;
					else if (cle == "defenseMax")defenseMax = valeur;
					else if (cle == "defense") defense = valeur;
					else if (cle == "manaMax") manaMax = valeur;

				}
				combattants.push_back({ "Gardien", PlayerGuardian(idPlayer, namePlayer, pvMax, attackMax, attack, defenseMax, defense, manaMax) });
			}

		}

		fichier.close();
	}
	else {
		std::cerr << "Impossible d'ouvrir le fichier " << classFile << std::endl;
	}



	do {
		std::cout << namePlayer << ", choisissez un type de combattant : " << std::endl;
		int index = 1;
		for (const TypeCombattantClass combattant : combattants) {
			std::cout << index << "." << combattant.name << std::endl;
			index++;
		}

		std::cin >> chosenType;
		index = 1;
		for (const TypeCombattantClass combattant : combattants) {
			if (chosenType == combattant.name || chosenType == std::to_string(index)) {
				std::this_thread::sleep_for(std::chrono::seconds(1));
				system("cls");
				return combattant.type;
			}
			index++;
		}
		std::cout << "Saisie invalide. Reessayez." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		system("cls");
	} while (true);
	std::this_thread::sleep_for(std::chrono::seconds(2));
	system("cls");
}

std::string GameLoop::askAction(std::vector<std::string> actions) {
	std::string chosenAction;

	do {
		
		std::cout << "Choisissez une action: " << std::endl;
		int index = 1;
		for (const std::string action : actions) {
			std::cout << index << "." << action << std::endl;
			index++;
		}
		std::cin >> chosenAction;
		std::cout << "\n" << std::endl;
		index = 1;
		for (const std::string action : actions) {
			if (chosenAction == action || chosenAction == std::to_string(index)) {
				std::cout << "Vous avez choisi " << action << std::endl;
				std::this_thread::sleep_for(std::chrono::seconds(1));
				system("cls");
				return action;
			}
			index++;
		}
		std::cout << "\n" << std::endl;

		std::cout << "Saisie invalide. Reessayez." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::this_thread::sleep_for(std::chrono::seconds(2));
		system("cls");
	} while (true);
	std::this_thread::sleep_for(std::chrono::seconds(2));
	system("cls");
}


Spell GameLoop::askSpell(std::vector<Spell> spells) {
	std::string chosenSpell;

	do {
		std::cout << "Choisissez un spell: " << std::endl;
		int index = 1;
		for (Spell spell : spells) {
			std::cout << index << "." << spell.getName() << std::endl;
			index++;
		}
		std::cout << "5.Retour (menu action)" << std::endl;
		std::cout << "\n" << std::endl;

		std::cin >> chosenSpell;
		index = 1;
		for (Spell spell : spells) {
			if (chosenSpell == spell.getName() || chosenSpell == std::to_string(index)) {
				return spell;
			}
			index++;
		}

		if (chosenSpell == "Retour" || chosenSpell == "5") break;
		std::cout << "Saisie invalide. Reessayez." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::this_thread::sleep_for(std::chrono::seconds(2));
		system("cls");
	} while (true);
	std::this_thread::sleep_for(std::chrono::seconds(2));
	system("cls");
}

void GameLoop::statsPlayer(PlayerAbstract player) {
	player.afficherInfos();
}

void GameLoop::winOrLose(std::string nameWinnerPlayer, std::string nameLoserPlayer) {
	std::cout << nameWinnerPlayer << " a gagne la partie et " << nameLoserPlayer << " a perdu" << std::endl;
}




bool GameLoop::startAgain() {
	std::string response;
	bool stopPlaying = false;
	do {
		std::cout << "Voulez-vous relancer une partie? ";
		std::cin >> response;

		// Verification de la validite de la saisie (par exemple, si la longueur est superieure à 3 caractères)
		if (response == std::string("yes") || response == std::string("Yes") || response == std::string("Y") || response == std::string("y")) {
			std::cout << "Merci d'avoir joue!" << std::endl;
			stopPlaying = true;
			break;  // Sort de la boucle lorsque la saisie est valide
		}
		else if (response == std::string("no") || response == std::string("No") || response == std::string("N") || response == std::string("n")) {
			std::cout << "C'est partie pour un nouveau tour!" << std::endl;
			break;  // Sort de la boucle lorsque la saisie est valide
		}
		else {
			std::cout << "Saisie invalide. Reessayez." << std::endl;
			// Efface le tampon d'entree pour eviter des boucles infinies si l'utilisateur entre des caractères non valides
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		std::this_thread::sleep_for(std::chrono::seconds(2));
		system("cls");
	} while (true);
	system("cls");
	return stopPlaying;
}

void readFile() {

}

GameLoop::~GameLoop() {}