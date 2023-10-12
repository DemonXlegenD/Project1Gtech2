#pragma once
#include <string>
#include <vector>
#include "PlayerAbstract.h"
#include "GameLoop.h"

class Team
{
public:

	  Team(std::string id, std::string name);
	  std::string getId();
	  std::string getName();
	  void resizePlayers(int numberPlayers);
	  void createPlayer(std::string id, std::string name);
	  std::vector<PlayerAbstract*> getPlayers();
	  PlayerAbstract* getPlayerById(std::string id);
	  PlayerAbstract* getPlayerByIndex(int index);
	  int getScore();
	  void addScore();
	  ~Team();

private:
	std::string id;
	std::string name;
	std::vector<PlayerAbstract*> players;
	int score = 0;
};

