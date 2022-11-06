//Division by 2 using bitwise operators

#include <iostream>

int main () {

int x[5] = {2,44,666,8888,23};

int i = 0;
int rightShift = 0;
for (i = 0; i < 5; i++)
{
    rightShift = x[i] >> 1;
    std::cout << rightShift << std::endl;
}

}