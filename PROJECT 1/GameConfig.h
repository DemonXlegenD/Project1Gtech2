#pragma once
#include "PlayerAbstract.h"

class GameConfig
{
public :
	GameConfig(PlayerAbstract player1, PlayerAbstract player2);
	PlayerAbstract getPlayer1();
	PlayerAbstract getPlayer2();

	int getRound();
	void setRound(int round);
	void addRound();

	int getTimer();
	void showTimer();
	~GameConfig();


private:
	PlayerAbstract player1;
	PlayerAbstract player2;
	int round_number;
	int timer;
};

