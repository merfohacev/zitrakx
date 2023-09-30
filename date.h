#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Date{

    int day;
    int month;  
    int year;

    Date() {
        day, month, year = 0;
    }
};

istream& operator >> (istream& ist, Date& date);
ostream& operator << (ostream& ost, Date& date);


#endif // !DATE_H