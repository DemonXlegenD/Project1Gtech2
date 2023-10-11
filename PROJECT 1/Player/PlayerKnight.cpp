#include "PlayerKnight.h"

PlayerKnight::PlayerKnight(const std::string n, int pv_max, int attack_max, int attack, int defense_max, int defense, int mana_max) : PlayerAbstract(n, pv_max, attack_max, attack, defense_max, defense, mana_max) {}

int PlayerKnight::useAvadacadavra() {

	return attack_actuel * 2;
}