#include <iostream>
using namespace std;

// TODO: Copy this starter program, predict its output, and run it. Change the method declarations so the call through Animal& prints Woof. 
// Use override in Dog and add a virtual defaulted destructor to Animal.
class Animal
{
public:
    virtual void speak() const { cout << "Animal\n"; }

    virtual ~Animal() = default;
};

class Dog : public Animal
{
public:
    virtual void speak() const { cout << "Woof\n"; }
};


void playSound(Animal& animal)
{
    animal.speak();
}

int main() 
{
    Dog dog;
    playSound(dog);
    return 0;
}