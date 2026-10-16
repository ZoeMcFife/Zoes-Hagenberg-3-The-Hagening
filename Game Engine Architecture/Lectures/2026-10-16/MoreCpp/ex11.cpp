#include <iostream>
using namespace std;

// TODO: Use an abstract GameObject with update() and a virtual destructor. 
// Implement Player, Enemy, and Coin, printing the lines below. 
// Create the local objects shown, then an array containing their addresses. 
// Iterate over the array and call each object's update() through its pointer. No dynamic allocation is needed.


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

class Enemy : public GameObject
{
public:
    virtual void update() override
    {
        std::cout << "Enemy patrols" << std::endl;
    }
};

int main() 
{
    Player player;
    Enemy enemy;
    Coin coin;
    // TODO: Create the array here, then update every object in a loop

    GameObject* objects[] = {&player, &enemy, &coin};

    for (int i = 0; i < 4; i++)
    {
        objects[i]->update();
    }


    // Expected output:
    //Player moves
    //Enemy patrols
    //Coin spins

    return 0;
}