#include <iostream>
using namespace std;

// TODO: Implement Enemy::attack(), which prints Enemy attacks. Make it virtual. 
// Derive Boss, override attack(), call Enemy::attack() first, and then print Boss adds fire damage. Include a virtual defaulted destructor in the base class.

class Enemy
{
public:
    virtual void attack()
    {
        std::cout << "Enemy attacky" << std::endl;
    }

    virtual ~Enemy() = default;
};

class Boss : public Enemy
{
public:
    virtual void attack()
    {
        Enemy::attack();

        std::cout << "Boss adds fire damage" << std::endl;
    }

};

int main() 
{
    Boss boss;
    boss.attack();

    return 0;
}