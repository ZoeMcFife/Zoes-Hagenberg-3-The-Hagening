#include <iostream>
using namespace std;

// TODO: Implement Enemy with virtual type() const, returning Enemy, and a virtual destructor. 
// Derive Boss and override type() to return Boss. Implement printByValue(Enemy enemy) and printByReference(const Enemy& enemy), each printing enemy.type(). 

class Enemy
{
public:
    virtual void type() const
    {
        std::cout << "Enemy" << std::endl;
    }

    virtual ~Enemy() = default;
};

class Boss : public Enemy
{
public:
    virtual void type() const
    {
        std::cout << "Boss" << std::endl;
    }
};

void printByValue(Enemy enemy)
{
    enemy.type();
}

void printByReference(Enemy& enemy)
{
    enemy.type();
}

int main() 
{
    Boss boss;
    printByValue(boss);
    printByReference(boss);

    return 0;
}