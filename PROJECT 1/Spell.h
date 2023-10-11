#pragma once
#include <string>

class Spell
{
public:

	Spell(const std::string name, int damage, int mana_needed);

	const std::string getName();

	int getDamage();
	void setDamage(int damage);

	int getManaNeeded();
	void setManaNeeded(int mana);

	~Spell();

private:

	std::string name;
	int damage;
	int mana_needed;

};

