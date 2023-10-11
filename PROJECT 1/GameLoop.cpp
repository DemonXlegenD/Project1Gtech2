#include "GameLoop.h"

GameLoop::GameLoop() {}
std::string GameLoop::askName(std::string player) {
	std::string name;
	do {
		std::cout << player << ", entrez un nom valide : ";
		std::cin >> name;

		// Vérification de la validité de la saisie (par exemple, si la longueur est supérieure à 3 caractères)
		if (name.length() > 3) {
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

PlayerAbstract GameLoop::askType(std::string player, std::string namePlayer) {
	std::string chosenType;
	std::vector<TypeCombattantClass> types;
	types.push_back({ "Magicien", PlayerWizard(namePlayer, 100, 50, 20, 10, 5, 500)});
	types.push_back({ "Guerrier", PlayerWizard(namePlayer, 100, 50, 20, 10, 5, 500)});
	types.push_back({ "Chevalier", PlayerWizard(namePlayer, 100, 50, 20, 10, 5, 500)});
	types.push_back({ "Gardien", PlayerWizard(namePlayer, 100, 50, 20, 10, 5, 500)});

	do {
		std::cout << player << ", choisissez un type de combattant : " << std::endl;
		int index = 1;
		for (const TypeCombattantClass type : types) {
			std::cout << index << "." << type.name << std::endl;
			index++;
		}

		std::cin >> chosenType;


		// Vérification de la validité de la saisie (par exemple, si la longueur est supérieure à 3 caractères)
		if (type.length() > 3) {
			std::cout << "Saisie valide : " << type << std::endl;
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

GameLoop::~GameLoop() {}