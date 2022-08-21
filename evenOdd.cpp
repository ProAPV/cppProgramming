#include <iostream>

int main () {

    int number1 ;

    std::cout << "Enter a Number" << std::endl ;
    
    std::cin >> number1 ;
// Single = is used to assign the number whereas == is used to compare the numbers to check if they are equal or not
    if (number1 == 0) {
        std::cout << "The number is neither odd nor even" << "\n" << "End" ;
    }
    else if (number1%2 == 0) {
        std::cout << "It is an even number" << std::endl ;
    }
    else {
        std::cout << "It is an odd number" << std::endl ;
    }    

}