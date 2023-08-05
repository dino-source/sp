#ifndef WARRIOR_H
#define WARRIOR_H

#include <iostream>
#include "helpers.h"

struct Warrior
{
    explicit Warrior(std::string n)
        : name{n}
        , life{random(70.0, 90.0)}
        , strength{random(3.0, 5.0)}
        , damage{random(1.1, 2.5)}
    {
    }

    void attack(Warrior &enemy)
    {
        std::cout << name << " attacks!!!!!!!!\n";

        chance_to_critical_strike = random(0.1, 199.9);
        if (chance_to_critical_strike > 100.0)
        {
            damage = strength * 2;
        }

        enemy.chance_to_block = random(0.1, 199.9);
        if (enemy.chance_to_block > 100.0)
        {
            damage /= 2;
        }

        enemy.life -= damage;
    }

    void status()
    {
        std::cout
            << name << " status:\n"
            << "Life: " << life << '\n'
            << "Strength: " << strength << '\n'
            << "Damage: " << damage << '\n';

        if (is_dead())
        {
            std::cout << name << " is dead.";
        }

        else
        {
            std::cout << name << " is still alive!";
        }

        std::cout << "\n\n";
    }

    bool is_dead() { return life < 1; }

private:
    std::string name {};
    double life {};
    double strength {};
    double damage {};
    double chance_to_critical_strike {};
    double chance_to_block {};
};

#endif // WARRIOR_H