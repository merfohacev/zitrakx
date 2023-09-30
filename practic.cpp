#include <iostream>
#include <fstream>
#include <string>
#include "date.h"
#include "planet.h"
#include <vector>

using namespace std;


void reader(ifstream& ist, vector <Planet>& planetVector) {
	while (false == ist.eof()) {
		Planet planet;
		ist >> planet;
		planetVector.push_back(planet);
	}
}

void output(vector <Planet> planetVector) {
	for (Planet planet : planetVector) {
		cout << planet << endl;
	}
}
int main() {
	setlocale(LC_ALL, "Ru");
	string path = "test.txt";
	ifstream fs;
	fs.open(path, fstream::out);
	vector <Planet> planetVector;
	reader(fs, planetVector);
	output(planetVector);
	return 0;
}