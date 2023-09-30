
#include <iostream>
#include <fstream>
#include "date.h"

using namespace std;

istream& operator >> (istream& is, Date& date) {
    is >> date.year;
    is.get();
    is >> date.month;
    is.get();
    is >> date.day;
    return is;
}

ostream& operator<< (ostream& os, Date& date) {
    os << date.year << "." << date.month << "." << date.day;
    return os;
}