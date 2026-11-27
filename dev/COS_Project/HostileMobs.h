#pragma once

class HostileMobs {
public:
    HostileMobs();

    // Zombie variables for damage and health
    double getEasyZombieDamage() const;
    double getNormalZombieDamage() const;
    double getHardZombieDamage() const;
    int getZombieHealth() const;
    int getLeaderZombieHealth() const;

    // Skeleton variables for damage and health
    int getSkeletonEasyDamage() const;
    int getSkeletonNormalDamage() const;
    int getSkeletonHardDamage() const;
    int getEasyFireRate() const;
    int getNormalFireRate() const;
    int getHardFireRate() const;
    int getSkeletonHealth() const;

private:
    // Zombie stats
    double easyZombieDamage = 2.5;
    double normalZombieDamage = 3.0;
    double hardZombieDamage = 4.5;
    int zombieHealth = 20;
    int leaderZombieHealth;

    // Skeleton stats
    int skeletonEasyDamage;
    int skeletonNormalDamage;
    int skeletonHardDamage;
    int easyFireRate = 3;
    int normalFireRate = 3;
    int hardFireRate = 2;
    int skeletonHealth = 20;
};