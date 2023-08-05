// Playground to study debugger facilities

#include "fight.h"

int main()
{
    Warrior w1("Swordsman");
    w1.status();

    Warrior w2("Spearsman");
    w2.status();

    fight(w1, w2);
}
