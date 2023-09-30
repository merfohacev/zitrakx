#include <iostream>
#include <iomanip>
#include "planet.h"
#include "date.h"
using namespace std;

std::ostream& operator<< (std::ostream& os, Planet& planet)
{
	os << "Название: " << setw(7) << planet.name <<" | " << "Дата:" << planet.date << " | " << "Радиус: " << planet.radius;
	return os;
}

std::istream& operator>> (std::istream& is, Planet& planet)
{
	is >> planet.name;
	planet.name = planet.name.substr(1, planet.name.size() - 2);
	is >> planet.date;
	is >> planet.radius;

	return is;
}