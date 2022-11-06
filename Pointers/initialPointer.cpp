//Change the value of variable using pointer.

#include <iostream>

int main () {

    int x = 10;
    int *xptr = NULL;
    xptr = &x;
    std::cout<<"Value of x before changing the value = "<< *xptr << std::endl;
    std::cout << "Value of x =" << x << std::endl; 
    *xptr = 20;
    std::cout << "Value of x after changing it = " << *xptr << std::endl;
    std::cout << "Adress of x is = " << xptr << std::endl;
    xptr++;
    std::cout << xptr << std::endl;
}