/* Write a Program to calculate sum of array in Cpp */

#include <iostream>

int main () 
{

    int arr[5] = {0};

    int iterator = 0;
    for (iterator = 0; iterator < 5; iterator++)
    {
        std::cin >> arr[iterator];
    }

    int sum = 0;
    for (iterator = 0; iterator < 5; iterator++)
    {
        sum = sum + arr[iterator];
    }
    std::cout << "The sum of the numbers in the array = " << sum << std::endl;
}