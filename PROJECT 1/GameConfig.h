#pragma once
#include "PlayerAbstract.h"
#include "Team.h"
#include <vector>
#include "./Utils/QuickSort.h"
#include "./GameLoop.h"

class GameConfig
{
public:
	GameConfig();

	int getNumberPlayers();
	int getNumberTeams();
	void setNumberPlayers();
	void setNumberTeams(int nbr);
	void createTeam(std::string id);
	
	std::vector<Team*> getTeams();
	Team* getTeamById(std::string id);
	Team* getTeamByIndex(int index);

	std::vector<PlayerAbstract*> getAllPlayers();
	void setAllPlayers();
	PlayerAbstract* getPlayerById(std::string id);
	PlayerAbstract* getPlayerByIndex(int index);


	~GameConfig();


private:


	int numberPlayers = 2;
	int numberTeams = 2;
	std::vector<Team*> teams;
	std::vector<PlayerAbstract*> allPlayers;

	void resizeTeams(int size);
	void resizeAllPlayers(int size);

};

