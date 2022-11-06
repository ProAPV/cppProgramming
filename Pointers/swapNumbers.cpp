//Swap values using pointers.

#include <iostream>

void swap (int *a,int *b){
    int temp = *a;
    *a = *b; 
    *b = temp;
}
int main () {

    int a = 12345;
    int b = 67890;

/*    int *apointer = &a;
    int *bpointer = &b;
*/
    swap (&a, &b);
    std::cout << a << ", " << b << std::endl;
}