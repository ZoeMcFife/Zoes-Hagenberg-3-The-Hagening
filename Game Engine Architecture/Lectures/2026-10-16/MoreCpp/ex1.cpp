#include <iostream>
using namespace std;

// TODO: Implement Player with private health, initially 100. Add public methods takeDamage(int) and getHealth().
// Ignore zero or negative damage and prevent health from falling below zero. Access health only through these methods.

class Player
{
private:
    int health = 100;

public:
    void takeDamage(const int damage)
    {
        if (damage <= 0)
        {
            return;
        }

        if (damage >= health)
        {
            health = 0;
            return;
        }

        health -= damage;
    }

public:
    int getHealth()
    {
        return health;
    }
};

int main()
{
    Player player;
    player.takeDamage(30);
    cout << player.getHealth() << '\n';
    player.takeDamage(-10);
    cout << player.getHealth() << '\n';
    player.takeDamage(100);
    cout << player.getHealth() << '\n';

    return 0;
}