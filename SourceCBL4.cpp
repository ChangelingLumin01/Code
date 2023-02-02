#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
using namespace std;

void display(double x, string msg);
void display(float x, float y);
double add(float x, float y);
void display(string y);
bool validate(double x);
void read(float& grade1, float& grade2);

int main() {
	float grade1, grade2;

	read(grade1, grade2);
	system("cls");
	display(grade1, grade2);
	display(add(grade1, grade2), "The total ");
	return 0;
}

void read(float& grade1, float& grade2) {
	cout << "Please enter the first grade: ";
	cin >> grade1;
	cout << "\n please enter the second grade: ";
	cin >> grade2;
	if (!(validate(grade1) && validate(grade2))) {
		display("input error...");
		exit(0);
	}
}

double add(float x, float y) {
	double total = x + y;
	return total;
}

void display(string msg) {
	cout << "\n******************************************\n";
	cout << msg << "\n";
	cout << "\n******************************************\n";
}

void display(float x, float y) {
	cout << "\n******************************************\n";
	cout << "The first grade is " << x << endl;
	cout << "The Second grade is " << y;
	cout << "\n******************************************\n";
}

void display(double total, string msg) {
	cout << "\n******************************************\n";
	cout << msg << ": " << total << "\n";
	cout << "\n******************************************\n";
}

bool validate(double x) {
	if (x < 0 || x > 100) return false;
	else return true;
}