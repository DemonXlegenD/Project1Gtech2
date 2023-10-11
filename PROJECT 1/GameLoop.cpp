#include "GameLoop.h"

GameLoop::GameLoop() {}
std::string GameLoop::askName(std::string player) {
	std::string name;
	do {
		std::cout << player << ", entrez un nom valide : ";
		std::cin >> name;

		// Vérification de la validité de la saisie (par exemple, si la longueur est supérieure à 3 caractères)
		if (name.length() >= 3) {
			std::cout << "Saisie valide : " << name << std::endl;
			break;  // Sort de la boucle lorsque la saisie est valide
		}
		else {
			std::cout << "Saisie invalide. Réessayez." << std::endl;
			// Efface le tampon d'entrée pour éviter des boucles infinies si l'utilisateur entre des caractères non valides
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	} while (true);

	return name;
}

PlayerAbstract GameLoop::askType(std::string namePlayer) {
	std::string chosenType;
	std::vector<TypeCombattantClass> combattants;
	combattants.push_back({ "Magicien", PlayerWizard(namePlayer, 100, 50, 20, 10, 5, 500) });
	combattants.push_back({ "Guerrier", PlayerWarrior(namePlayer, 100, 50, 20, 10, 5, 500) });
	combattants.push_back({ "Chevalier", PlayerKnight(namePlayer, 100, 50, 20, 10, 5, 500) });
	combattants.push_back({ "Gardien", PlayerGuardian(namePlayer, 100, 50, 20, 10, 5, 500) });

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
				return combattant.type;
			}
			index++;
		}
		std::cout << "Saisie invalide. Réessayez." << std::endl;
	} while (true);
}

GameLoop::~GameLoop() {}