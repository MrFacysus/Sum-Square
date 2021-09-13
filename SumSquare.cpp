#include <iostream>
#include <string>
#include <cmath>

int main()
{

    std::cout << "Sum Square Solution!\n";

    int answer = 0;
    int squares = 0;
    int sums = 0;

    for (int i = 0; i <= 100; i++)
    {

        sums += i;

    }

    for (int i = 0; i <= 100; i++)
    {

        squares += (i*i);

    }
    
    sums *= sums;

    answer = sums - squares;

    std::cout << answer;

}