#pragma once
#include <string>

class Spell
{
public:

	Spell(const std::string name, int damage, int mana_needed);
	~Spell();

	const std::string getName();

	int getDamage();
	void setDamage(int damage);

	int getManaNeeded();
	void setManaNeeded(int mana);

private:

	std::string name;
	int damage;
	int mana_needed;

};

