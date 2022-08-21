#include <iostream>

enum months {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main () {

    enum months month;
    month = June;

    std::cout << "month"  << month + 1 << std::endl;   
}