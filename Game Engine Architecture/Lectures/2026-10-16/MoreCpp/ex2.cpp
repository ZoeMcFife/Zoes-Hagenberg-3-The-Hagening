#include <iostream>
using namespace std;

// TODO: Implement Enemy with private name and health. Its constructor takes a name and an optional health value defaulting to 50. 
// Initialize both members using a constructor initializer list. Implement print() to print name: health.

class Enemy
{
    string name;
    int health;

    public:
        Enemy(string name, int health = 50) : name(name), health(health) {}

    public:
        void print()
        {
            std::cout << name << " - " << health << " HP" << std::endl;
        }
};

int main() 
{
    Enemy slime("Slime");
    Enemy boss("Boss", 200);
    slime.print();
    boss.print();

    return 0;
}