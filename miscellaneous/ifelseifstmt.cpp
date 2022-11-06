/*assigning grades (A, B, C) based on marks obtained by a student.

if the percentage is above 90, assign grade A
if the percentage is above 75, assign grade B
if the percentage is above 65, assign grade C*/

#include <iostream>

int main (){

float studentMarks = 0;
float studentPercentage = 0;

std::cout << "Enter the Students marks out of 500 = "<< std::endl;
std::cin >> studentMarks ;
studentPercentage = (studentMarks/500)*100;

if (studentPercentage > 90){
    std::cout<<"The Student has got A grade"<<std::endl;
}
else if(studentPercentage > 75){
    std::cout << "The student has got B grade" << std::endl;
}
else if(studentPercentage > 65){
    std::cout << "The student has got C grade" << std::endl;
}
else {
    std::cout << "The student has failed" << std::endl;
}
}