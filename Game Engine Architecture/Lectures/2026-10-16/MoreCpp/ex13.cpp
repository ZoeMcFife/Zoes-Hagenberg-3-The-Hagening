#include <iostream>
using namespace std;

// TODO: Implement Tomato::print() const and Ham::print() const, printing Tomato and Ham. 
// Derive Pizza publicly from both. First leave Pizza empty and observe the compiler error for pizza.print(). 
// Then implement Pizza::print() const to print Pizza toppings: and call both inherited methods using explicit class qualification.

class Tomato
{
public:
    void print() const
    {
        std::cout << "Tomato" << std::endl;
    }
};

class Ham
{
public:
    void print() const
    {
        std::cout << "Ham" << std::endl;
    }
};

class Pizza : public Tomato, public Ham
{
public:
    void print() const
    {
        std::cout << "Pizza toppings:" << std::endl;
        Tomato::print();
        Ham::print();
    }
};

int main() 
{
    Pizza pizza;
    pizza.print();

    // Expected output:
    //Pizza toppings:
    //Tomato
    //Ham

    return 0;
}