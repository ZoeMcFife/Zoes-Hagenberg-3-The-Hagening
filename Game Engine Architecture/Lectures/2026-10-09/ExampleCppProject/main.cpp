#include <algorithm>
#include <iostream>
#include <string>

static void arrays();
static void strings();
static void pointers();

int main()
{
    std::cout << "Arrys:" << std::endl;
    arrays();

    std::cout << "Strings:" << std::endl;
    strings();

    std::cout << "Pointers:" << std::endl;
    pointers();
}


void arrays()
{
    int fields[3][3];

    for (int i = 0; i<3; i++)
        for (int j=0; j<3; j++)
            fields[i][j]=0;

    for(int i =0; i < 3*3; i++)
    {
        fields[i / 3][i % 3] = i;
    }

    int* p = &fields[0][0];
    for (int i = 0; i < 3 * 3; i++)
    {
        *(p + i) = i;
    }

    for (int i = 0; i<3; i++)
        for (int j=0; j<3; j++)
            std::cout << fields[i][j] << std::endl;
}

void strings()
{
    std::string str = "Hallo";
    str = str + " Hagenberg";


    std::cout << str << std::endl;
    int i = str.length();

    std::cout << i << std::endl;

    int j = 0;
    //iterate over the string and print it character per character

    while(j < i)
    {
        std::cout << str[j] << "\t";
        j++;
    }

    std::cout << std::endl;
}

void pointers()
{
    int* array;
    int howmany=5;

    array = new int[howmany];

    for (int i = 0; i < howmany; i++)
    {
        *(array+i) = i;
    }

    // Task1: go through the array and print its elements
    // (one per line) without using [];
    // Task2: without using the variable "howmany" in a loop!

    for (int i = 0; i < 5; i++)
    {
        std::cout << *(array + i) << std::endl;
    }

    const int* p = array;
    const int* end = array + howmany;

    while (p < end)
    {
        std::cout << *p << std::endl;
        p++;
    }

    delete array;
}