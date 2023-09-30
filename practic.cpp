#include <iostream>
#include <fstream>
#include <string>
#include
#include <stdio.h>

using namespace std;


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