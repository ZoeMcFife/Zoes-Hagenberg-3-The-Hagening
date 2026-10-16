#include <iostream>
using namespace std;

// TODO: Define Printable with pure virtual print() const, and Damageable with pure virtual takeDamage(int). 
// Give both a virtual destructor. Implement Player, inheriting publicly from both, with private health initially 100. 
// Positive damage reduces health, with a lower bound of zero. Print health as shown. 
// Implement show(const Printable&) and hit(Damageable&); hit applies 25 damage.

class Printable
{
public:
    virtual void print() const = 0;
    virtual ~Printable() = default;
};

class Damageable
{
public:
    virtual void takeDamage(int damage) = 0;

    virtual ~Damageable() = default;
};

class Player : public Damageable, public Printable
{
private:
    int health = 100;

    virtual void takeDamage(int damage)
    {
        health -= damage;

        if (health <= 0)
            health = 0;
    }

public:
    void print() const override
    {
        std::cout << "Health: " << health << std::endl;
    }
};

void show(const Printable& printable)
{
    printable.print();
}

void hit(Damageable& damageable)
{
    damageable.takeDamage(25);
}

int main() 
{
    Player player;
    show(player);
    hit(player);
    show(player);

    // Expected output:
    //Health: 100
    //Health: 75

    return 0;
}