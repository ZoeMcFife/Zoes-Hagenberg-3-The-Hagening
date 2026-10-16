#include <iostream>
using namespace std;

// TODO: Implement Score, initially containing zero points, with add(int) and getPoints(). 
// Write awardCopy(Score score) and awardOriginal(Score& score). Each function adds 10 points to its parameter. Predict the output before running.

class Score
{
private:
    int points = 0;

public:
    void add(int points)
    {
        this->points += points;
    }

public:
    int getPoints() const
    {
        return this->points;
    }
};

void awardCopy(Score score)
{
    score.add(10);
}

void awardOriginal(Score &score)
{
    score.add(10);
}

int main() 
{
    Score score;
    awardCopy(score);
    cout << score.getPoints() << '\n';
    awardOriginal(score);
    cout << score.getPoints() << '\n';

    return 0;
}