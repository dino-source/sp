#include <iostream>
#include <string>
struct Spearsman;
struct Swordsman
{
    double strength{5};
    double dexterity{2.3};
    double life{30};
    double mana{0};
    void attack(Spearsman &s)
    {
        s.life = s.life - (strength * dexterity);
    }
};

struct Spearsman
{
    double strength{6.2};
    double dexterity{1.8};
    double life{40};
    double mana{0};
    void attack(Swordsman &s)
    {
        s.life = s.life - (strength * dexterity);
    }
};
int main()
{


}
