#include "HostileMobs.h"
#include <random>

HostileMobs::HostileMobs() {
	std::random_device device;
	std::mt19937 generator(device());
	std::uniform_int_distribution<int> healthRange(40, 100);

	leaderZombieHealth = healthRange(generator);
}

double HostileMobs::getEasyZombieDamage() const {
	return easyZombieDamage;
}

double HostileMobs::getNormalZombieDamage() const {
	return normalZombieDamage;
}

double HostileMobs::getHardZombieDamage() const {
	return hardZombieDamage;
}

int HostileMobs::getZombieHealth() const {
	return zombieHealth;
}

int HostileMobs::getLeaderZombieHealth() const {
	return leaderZombieHealth;
}