/* Enter 2 number by user 
Print those two number and find the difference between those 2 numbers.
*/

#include <iostream>

int main () {

    float number1 = 0, number2 = 0, difference = 0 ;

    std::cout << "Enter 2 numbers" << std::endl ;

    // Taking input from user
    std::cin >> number1 ;
    std::cin >> number2 ;
    // Displaying 2 numbers
    std::cout << number1 << "\n" << number2 << std::endl ;

    if ((number1 - number2) >0)
    {   
        difference = number1 - number2 ;
        std::cout << "The dfference of the 2 numbers is " << difference << std::endl ;
    }
    else if ((number2 - number1) >0)
    {
        difference = number2 - number1 ;
        std::cout << "The difference of the 2 number is " << difference << std::endl ;
    }
    else {
        std::cout << "There is no difference betweent the numbers" << std::endl ;
    }
}