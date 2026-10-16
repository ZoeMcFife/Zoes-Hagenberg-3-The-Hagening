#include <iostream>
using namespace std;

// TODO: Implement an abstract GameObject with virtual void update() = 0 and a virtual defaulted destructor. 
// Implement concrete subclasses Player and Coin, whose overrides print Player moves and Coin spins. 
// Implement tick(GameObject& object) to call update().

class GameObject
{
public:
    virtual void update() = 0;

    virtual ~GameObject() = default;
};

class Player : public GameObject
{
public:
    virtual void update() override
    {
        std::cout << "Player moves" << std::endl;
    }
};

class Coin : public GameObject
{
public:
    virtual void update() override
    {
        std::cout << "Coin spins" << std::endl;
    }
};


void tick(GameObject& gameObject)
{
    gameObject.update();
}

int main() 
{
    Player player;
    Coin coin;
    tick(player);
    tick(coin);

    return 0;
}