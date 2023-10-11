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
	static std::string askName(std::string player);
	static PlayerAbstract askType(std::string player, std::string namePlayer);
	~GameLoop();
};	

