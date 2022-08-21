// Below is the preproccesor directive statement
#include <iostream>
using namespace std ; 

namespace class8F {
int PranayMarks = 99 ;
}

namespace class8E {
int PranayMarks = 70 ;
}
using namespace class8E ;
int main () {
    cout<< "Marks of Pranay in 8F " << PranayMarks <<endl ;
    // cout<< "Marks of Pranay in 8E " << class8E::PranayMarks <<endl ;
    return 0 ;
    }