// Write a program to output weather a number is divisible by 2 and 3 or by only one of them.

#include <iostream>

int main () {

    int x = 0;
    std::cout<<"Enter the value of x";
    std::cin >> x ;

    if (x%2 == 0 && x%3 == 0)
    {
        std::cout << "x is divisible by both 2 and 3" << std::endl;
    }
    else if (x%2 == 0)
    {
        std::cout << "x is only divisble by 2" << std::endl; 
    }
    else if (x%3 == 0)
    {
        std::cout << "x is only divisible by 3" << std::endl;
    }
    else
    {
        std::cout << "x is not divisible by either 2 or 3" << std::endl;
    }
    
}