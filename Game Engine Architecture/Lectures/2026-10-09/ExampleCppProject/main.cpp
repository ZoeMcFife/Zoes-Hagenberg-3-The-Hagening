#include <algorithm>
#include <cstring>
#include <iostream>
#include <string>

static void arrays();
static void strings();
static void pointers();
static void charArrays();
static void pointers3();

int IncrementByThree(int number);
int* IncrementByThreePtr(int* number);

int main()
{
    std::cout << "Arrys:" << std::endl;
    arrays();

    std::cout << "Strings:" << std::endl;
    strings();

    std::cout << "Pointers:" << std::endl;
    pointers();

    std::cout << "Chars:" << std::endl;
    charArrays();

    std::cout << "Pointers 3:" << std::endl;
    pointers3();
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

char* concatenateStrings(char* string1, char* string2)
{
    char* concat = new char[strlen(string1) + strlen(string2) + 1];

    int i = 0;

    for (i = 0; i < strlen(string1); i++)
    {
        concat[i] = string1[i];
    }

    int j = i;

    for (i = 0; i < strlen(string2); i++)
    {
        concat[i + j] = string2[i];
    }


    return concat;
}

// this does silly things
char* concatStrings2(char* string1, char* string2)
{
    char* helper1 = string1;
    char* helper2 = string2;

    while (*(++helper1));
    while (*(helper1++) = *(helper2++));

    return string1;
}

void charArrays()
{
    char s1[50] = "Hello ";
    char s2[50] = "World";

    char* concat = concatenateStrings(s1, s2);

    std::cout << concat << std::endl;

    char s3[5] = {'A', 'B', 'C', 'D', 'E'};

    // this doesn't work
    char* cat2 = concatenateStrings(s1, s3);
    std::cout << cat2 << std::endl;
}

void pointers3()
{
    int adder = IncrementByThree(3);
    int x = 3;
    int* adderPtr = IncrementByThreePtr(&x);

    std::cout << "Result: " << adder << std::endl;

    //Why is this not working?
    std::cout << "Result: " << *adderPtr << std::endl;
}

int IncrementByThree(int number)
{
    number = number+3;
    return number;
}

int* IncrementByThreePtr(int* number)
{
    *number = *number + 3;
    return number;
}
