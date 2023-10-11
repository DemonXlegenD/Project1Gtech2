#pragma once
#include <string>
#include <vector>
#include "PlayerAbstract.h"
class Team
{
public:

	  Team(std::string name, std::vector<PlayerAbstract> players);
	  std::string getName();
	  std::vector<PlayerAbstract> getPlayers();
	  int getScore();
	  void addScore();
	  ~Team();

private:
	std::string name;
	std::vector<PlayerAbstract> players;
	int score;
};

