#pragma once

class PlayerSteve {
public:
	PlayerSteve();

	int getPlayerHealth() const;
	int getBaseDamage() const;
	double getCritDamage() const;
	double getCritChance() const;

private:
	// Player stats
	int playerHealth = 20;
	int baseDamage = 1;
	double critDamage = 0.5;
	double critChance = 0.7;
};