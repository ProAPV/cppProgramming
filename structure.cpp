#include <iostream>

struct Aadhar {
    int dateOfBirth;
    int age;
    int phoneNumber;
};

int main () {
    Aadhar candidate1;

    std::cout << "Enter you date of birth " << std::endl;
    std::cin >> candidate1.dateOfBirth ; 

    std::cout << "Enter your age " << std::endl;
    std::cin >> candidate1.age ;

    std::cout << "Enter your phone number " << std::endl;
    std::cin >> candidate1.phoneNumber ;

    std::cout << "The date of birth of the candidate is " 
    << candidate1.dateOfBirth << "\n" << "His age is " << candidate1.age <<
    "\n" << "and his phoneNumber is " << candidate1.phoneNumber << std::endl;
}