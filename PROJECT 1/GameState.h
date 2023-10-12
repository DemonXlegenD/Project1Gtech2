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
	void addTurn();

	int getTotalDamage();
	void addDamage(int damage);
	int getTotalHealth();
	void addHealth(int health);
	int getTotalDefense();
	void addDefense(int defense);

	~GameState();
private:

	int timer;
	int totalTurnNumber;
	int actualTurnNumber;

	/*Players state*/
	int totalDamage;
	int totalHealth;
	int totalDefense;






};

