#pragma once
class GameStats
{

public:
	GameStats();
	int getTimer();
	void showTimer();


	int getTotalTurnNumber();
	int* getActualTurnNumber();

	void resetActualTurn();
	void addTurn();

	int getActualPlayerRound();
	void addRoundToPlayerRound();
	int getTotalPlayerRound();
	void addRoundToTotalPlayerRound();

	int getTotalDamage();
	void addDamage(int damage);
	int getTotalHealth();
	void addHealth(int health);
	int getTotalDefense();
	void addDefense(int defense);

	~GameStats();
private:

	int timer = 0;
	int totalTurnNumber = 0;
	int actualTurnNumber = 0;

	int actualPlayerRound = 0;
	int totalPlayerRound = 0;

	/*Players state*/
	int totalDamage = 0;
	int totalHealth = 0;
	int totalDefense = 0;






};

