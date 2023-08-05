#include "fight.h"

void fight(Warrior &w1, Warrior &w2)
{
    for (int i{}; i < 30; ++i)
    {
        w1.attack(w2);
        if (w2.is_dead())
        {
            w2.status();
            return;
        }
        w2.status();

        w2.attack(w1);
        if (w1.is_dead())
        {
            w1.status();
            return;
        }
        w1.status();
    }
}