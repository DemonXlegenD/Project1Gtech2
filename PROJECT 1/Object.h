#pragma once
#include <string>
class Object
{
public:
	Object();
	std::string getName();
	int getStock();
	int getHealth();
	int getDamage();
	int getMana();
	~Object();

private:
	std::string name;
	int stock;
	int health;
	int damage;
	int mana;
};

