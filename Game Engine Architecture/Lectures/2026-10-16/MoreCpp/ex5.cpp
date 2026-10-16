#include <iostream>
using namespace std;

// TODO: Implement Effect with a private name. Its constructor prints Create <name> and its destructor prints Destroy <name>. 
// Use the nested scope below and predict the order of all five lines.

class Effect
{
private:
    string name;

public:
    Effect(string name) : name(name)
    {
        std::cout << "Create " << name << "\n";
    }

    ~Effect()
    {
        std::cout << "Destroy " << name << "\n";
    }
};

int main() 
{
    Effect smoke("Smoke");
    {
        Effect spark("Spark");
    }
    cout << "Back in main\n";

    return 0;
}