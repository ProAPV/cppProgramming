// x is assigned the value of 30 if y is less than 10 and 40 if it is not

#include <iostream>

int main () {

    int y = 0;
    int x = 0;
    std::cout << "Enter the value of y = ";
    std::cin >> y ;

    x = y<10?30:40;
    std::cout << x << std::endl;
}