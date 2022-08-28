#include <iostream>

void autoStorageClass () {

/*A variable defined within a function or block with an auto specifier belongs
to the automatic storage class.
Auto variables can only be accessed within the block/function where they have 
been declared and not outside them which defines their scope.
These are also referred to as local variables. By default, the variable declared
in a program is auto storage variables and if they are not assigned then they
hold a garbage value.
auto keyword is used to defined an auto storage class in a program. */
    {
        auto storageVariableX = 123.234; 
        std::cout << storageVariableX << std::endl ;
    }
    //std::cout << storageVariableX << std::endl ;
}

void registerStorageClass () {
/*Register storage class is only for those variables that are being used very
often in a program. The reason is, there are very few CPU registers at our 
disposal and many of them might be busy processing or something else.
A typical application of the register storage class is loop counters,
 which get used a number of times in a program.
Just like auto storage, it has the scope to a limited block where it is used.
The difference is that the variables declared with a register keyword are 
stored in the register memory instead of RAM memory for quick access.
It also means that the variable size is equal to the register size, usually one word.*/
{
    register int registerVariableX = 1234567;
    std::cout << registerVariableX << std::endl ;
} 
    //std::cout << registerVariableX << std::endl ;     
}
static int count = 5;
void staticStorageClasses(void)
{
/*The keyword static is used to declare this type of variables in a c++ program.
The name static is given to variables that can hold their values between calls
of a function. They are allocated only once and their values are preserved
between any number of function calls.
Space is allocated for static variables in the program code itself and hence no
new memory is allocated to it as they are not re-declared in the program.
Their scope is local to the function where they are defined.
Also, a global static variable can be accessed anywhere throughout the program.
The static variable has the default value 0 which is provided by compiler.*/
   // local static variable
   static int temp = 1;
   temp++;
   std::cout << "temp is: " << temp << ",  count is: " << count <<std::endl;

}


int main () {

while (count--)
{
    staticStorageClasses();
}
registerStorageClass () ;
autoStorageClass () ;
return 0 ;

}
