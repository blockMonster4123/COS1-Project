#include "PlayerSteve.h"

PlayerSteve::PlayerSteve() = default;

int PlayerSteve::getPlayerHealth() const {
	return playerHealth;
}

int PlayerSteve::getBaseDamage() const {
	return baseDamage;
}

double PlayerSteve::getCritDamage() const {
	return critDamage;
}

double PlayerSteve::getCritChance() const {
	return critChance;
}