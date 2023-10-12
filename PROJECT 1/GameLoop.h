#pragma once
#include <iostream>
#include <string>
#include "PlayerAbstract.h"
#include <vector>
#include "./Player/PlayerWizard.h"
#include "./Player/PlayerGuardian.h"
#include "./Player/PlayerKnight.h"
#include "./Player/PlayerWarrior.h"

struct TypeCombattantClass {
	std::string name;
	PlayerAbstract type;
};

class GameLoop
{
public:
	GameLoop();
	static int askNumberPlayer();
	static std::string askNameTeam(std::string team);
	static std::string askName(std::string player);
	static PlayerAbstract askType(std::string idPlayer, std::string namePlayer);
	static bool startAgain();
	~GameLoop();
};	

