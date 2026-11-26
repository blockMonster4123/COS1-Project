#pragma once

class HostileMobs {
public:
    HostileMobs();

    double getEasyZombieDamage() const;
    double getNormalZombieDamage() const;
    double getHardZombieDamage() const;
    int getZombieHealth() const;
    int getLeaderZombieHealth() const;

private:
    double easyZombieDamage = 2.5;
    double normalZombieDamage = 3.0;
    double hardZombieDamage = 4.5;
    int zombieHealth = 20;
    int leaderZombieHealth;
};