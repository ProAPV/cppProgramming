//Program to divide array

#include <iostream>

int main () {

    int divide[11] = {0};
    int divide01[5] = {0};
    int divide02[6] = {0};
    int iterator = 0;
    for (iterator = 0; iterator < 11; iterator++)
    {
        std::cin >> divide[iterator];
    }

    for (iterator=0; iterator<5; iterator++)
    {
    	divide01[iterator] = divide[iterator];
    }
    std::cout << "The numbers in the first Array are : ";
    for (iterator=0; iterator<5; iterator++)
    {
        std::cout << divide01[iterator] << ", ";
    }

    for (iterator=0; iterator<6; iterator++)
    {
        divide02[iterator] = divide[iterator+5];
    }
    std::cout << "The numbers in the first Array are : ";
    for (iterator=0; iterator<6; iterator++)
    {
        std::cout << divide02[iterator] << ", ";
    }
    
}