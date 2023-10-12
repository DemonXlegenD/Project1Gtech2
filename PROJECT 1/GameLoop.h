#pragma once
#include <iostream>
#include <string>
#include "PlayerAbstract.h"
#include <vector>
#include "./Player/PlayerWizard.h"
#include "./Player/PlayerGuardian.h"
#include "./Player/PlayerKnight.h"
#include "./Player/PlayerWarrior.h"

class GameLoop
{
public:
	GameLoop();
	static int askNumberPlayer();
	static std::string askNameTeam(std::string team);
	static std::string askName(std::string player);
	static std::string askType(std::string namePlayer);
	~GameLoop();
};	

