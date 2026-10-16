#include <iostream>
using namespace std;

// TODO: Implement Score with private points. In the constructor and setPoints(int points), keep the parameter name identical to the member name and 
// use this->points to assign the member. Make getPoints() callable on a const object.

class Score
{
private:
    int points;

public:
    Score(int points) : points(points) {}

public:
    void setPoints(int points)
    {
        this->points = points;
    }

public:
    int getPoints() const
    {
        return points;
    }

};

int main() 
{
    Score score(10);
    score.setPoints(25);
    const Score finalScore(99);
    cout << score.getPoints() << '\n';
    cout << finalScore.getPoints() << '\n';

    return 0;
}