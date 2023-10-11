#pragma once
#include "PlayerAbstract.h"
#include "Team.h"
#include <vector>

class GameConfig
{
public :
	GameConfig(Team team1, Team team2, std::vector<PlayerAbstract>);
	Team getTeam1();
	Team getTeam2();
	std::vector<PlayerAbstract> getPlayers();
	PlayerAbstract getPlayerById(int id);
	size_t getNumberPlayers();


	~GameConfig();


private:
	Team team1;
	Team team2;
	std::vector<PlayerAbstract> players;

};

