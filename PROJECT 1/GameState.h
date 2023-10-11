#pragma once
class GameState
{

public:
	GameState();
	int getTimer();
	void showTimer();


	int getTotalTurnNumber();
	int getActualTurnNumber();

	void resetActualTurn();
	void addRound();
	
	~GameState();
private:
	int timer;
	int totalTurnNumber;
	int actualTurnNumber;
};

