/*Reverse an array of size 7 elements 
Arrray elements should be input by user
and print the reverse array
*/

#include <iostream>

int main () {

int reverseArray[7] = {0};

std::cout << "Enter the numbers in the Array" << std::endl;

int iterator = 0;
for (iterator = 0; iterator < 7; iterator++)
{
    std::cin >> reverseArray[iterator];
}

int temp = 0;
for (iterator = 0; iterator < 7/2; iterator++)
{
    temp = reverseArray[iterator];
    reverseArray[iterator] = reverseArray[7-iterator-1];
    reverseArray[7-iterator-1] = temp;
}

for (iterator = 0; iterator < 7; iterator++)
{
    std::cout << reverseArray[iterator] << ", ";
}
}