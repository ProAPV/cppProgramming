// Array concatenation program in Cpp

#include <iostream>

int main () {

    int arr[5] = {0};
    int arr1[6] = {0};
    int arrfinal[11] = {0};

    int iterator = 0;
    for (iterator = 0; iterator < 5; iterator++)
    {
        std::cin >> arr[iterator];
    }
    std::cout << "Now enter the number of the second array " << std::endl;
    for (iterator = 0; iterator < 6; iterator++)
    {
        std::cin >> arr1[iterator];
    }
    std::cout << "Concatenated result" << std::endl;
    for (iterator = 0; iterator < 5; iterator++)
    {
        arrfinal[iterator] = arr[iterator];
    }

    for ( iterator = 5; iterator < 11; iterator++)
    {
        arrfinal[iterator] = arr1[iterator-5];
    }
    
    for (iterator = 0; iterator < 11; iterator++)
    {
        std::cout << arrfinal[iterator] << ", ";
    }
}