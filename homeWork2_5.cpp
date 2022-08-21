#include <iostream>

//Question 2.5
int main () {
float Fahrenheit = 0, celcius = 0 ;

std::cout << "Enter the temperature in Fahrenheit" << std::endl ;

std::cin >> Fahrenheit ;

celcius = (Fahrenheit-32.0)*(5.0/9.0) ;

std::cout << "The temperature in celcius is " << celcius << std::endl ;

}