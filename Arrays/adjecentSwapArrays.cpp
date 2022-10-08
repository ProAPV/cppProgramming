/*Given an array arr[], the task is to rearrange the array elements by swapping adjacent elements
Input: arr[] = { 1, 2, 3, 4, 5, 7 } 
Output: 2 1 4 3 7 5 */

#include <iostream>

int main () {

int arr[7] = {0};

std::cout << "Enter the numbers of arrays" << std::endl;\

int iterator = 0;
for (iterator = 0; iterator < 7; iterator++)
{
    std::cin >> arr[iterator];
}

int temp = 0;
for (iterator = 0; iterator < 6; iterator+=2)
{
    temp = arr[iterator];             //temp = 0
    arr[iterator] = arr[iterator+1];  //0 = 1
    arr[iterator+1] = temp;           //1 = 0
}

for (iterator = 0; iterator< 7; iterator++)
{
    std::cout << arr[iterator] << "," ;
}
}