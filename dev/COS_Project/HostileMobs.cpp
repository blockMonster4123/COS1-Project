#include "HostileMobs.h"
#include <random>

// Randomized damage values for both zombie and skeleton
HostileMobs::HostileMobs() {
	std::random_device device;
	std::mt19937 generator(device());

	// Zombie leader health randomizer
	std::uniform_int_distribution<int> healthRange(40, 100);

	// Skeleton damage randomizer based on difficulty
	std::uniform_int_distribution<int> skeletonEasyDamageRange(2, 4);
	std::uniform_int_distribution<int> skeletonNormalDamageRange(3, 5);
	std::uniform_int_distribution<int> skeletonHardDamageRange(4, 8);

	leaderZombieHealth = healthRange(generator);
	skeletonEasyDamage = skeletonEasyDamageRange(generator);
	skeletonNormalDamage = skeletonNormalDamageRange(generator);
	skeletonHardDamage = skeletonHardDamageRange(generator);
}

// Returning the zombie damage for the different difficulties
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

// Returning the skeleton damage for the different difficulties
int HostileMobs::getSkeletonEasyDamage() const {
	return skeletonEasyDamage;
}

int HostileMobs::getSkeletonNormalDamage() const {
	return skeletonNormalDamage;
}

int HostileMobs::getSkeletonHardDamage() const {
	return skeletonHardDamage;
}

int HostileMobs::getEasyFireRate() const {
	return easyFireRate;
}

int HostileMobs::getNormalFireRate() const {
	return normalFireRate;
}

int HostileMobs::getHardFireRate() const {
	return hardFireRate;
}

int HostileMobs::getSkeletonHealth() const {
	return skeletonHealth;
}