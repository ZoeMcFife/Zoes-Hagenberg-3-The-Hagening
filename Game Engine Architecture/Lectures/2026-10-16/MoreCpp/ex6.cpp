#include <iostream>
using namespace std;

// TODO: Implement Character with protected health, initialized by its constructor, and a public getHealth(). 
// Derive Warrior publicly from it. Initialize the base with 100 health. Add train(), which increases health by 20 using direct access to the protected member.

class Character
{
protected:
    int health;

public:
    Character(int health) : health(health) {}

public:
    int getHealth()
    {
        return health;
    }
};

class Warrior : public Character
{
public:
    Warrior() : Character(100) {}

public:
    void train()
    {
        health += 20;
    }
};

int main() 
{
    Warrior warrior;
    warrior.train();
    cout << warrior.getHealth() << endl;

    // Expected output:
    //120

    return 0;
}