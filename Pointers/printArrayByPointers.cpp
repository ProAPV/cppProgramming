// Print Array using pointers

#include <iostream>

int main () {

    int arr[3] = {0};
    int *arrptr = arr;
    int iterator = 0;
    for (iterator = 0; iterator<3; iterator++)
    {
        std::cin >> *arrptr;
        arrptr++;
    }
    arrptr = arr;
    for (iterator = 0; iterator < 3; iterator++)
    {
        std::cout << *arrptr << std::endl;
        arrptr++;
    }
}