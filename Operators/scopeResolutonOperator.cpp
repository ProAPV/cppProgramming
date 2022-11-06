#include <iostream>

int v = 10;

int main () {

    int v = 11;
    std::cout << v << std::endl;
    std::cout << ::v << std::endl;

    int a[3] = {1,2,3};
    for (int i = 0; i < 3; i++)
    {
        std::cout << a[i] << std::endl;
    }

    } 