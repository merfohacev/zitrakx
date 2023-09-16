#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>

using namespace std;

struct Date {
	string year;
	string month;
	string day;

	Date() {
		year = month = day = "";
	}

};

class planet {

public:

	planet() {
		radius = 0;
	}


private:
	string name;
	Date date;
	double radius;


	friend ostream& operator<< (ostream& os, planet& planet);
	friend istream& operator>> (istream& is, planet& planet);

};


ostream& operator<< (ostream& os, planet& planet)
{
	os << "Название: " << planet.name << "\tДата: " << planet.date.year << "." << planet.date.month << "." << planet.date.day << "\tРадиус: " << planet.radius;
	return os;
}

istream& operator>> (istream& is, planet& planet)
{
	is >> planet.name;
	planet.name = planet.name.substr(1, planet.name.size() - 2);
	getline(is, planet.date.year, '.');
	getline(is, planet.date.month, '.');
	is >> planet.date.day >> planet.radius;

	return is;
}

int main() {
	setlocale(LC_ALL, "Ru");
	string path = "test.txt";
	ifstream fs;
	fs.open(path, fstream::out);
	if (!fs.is_open()) {
		cout << "Ошибка открытия файла" << endl;
	}
	else {
		while (true)
		{
			planet s;
			fs >> s;
			cout << s << endl;
			if (fs.eof()) {
				break;
			}
		}
	}
	return 0;
}