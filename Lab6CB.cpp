//add 200 for every employee outside the city, and without a car
//add 100 for every employee outside the city, and has a car
// only elegible for those with a salary less than 3000

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

bool eligible(string city, const string CITY, double& salary, bool hasCar);

int main() {
	const string CITY = "Ottowa";
	string city, employeeName, employeeID, myStr;
	bool hasCar = false;
	double salary;
	ofstream MyFile("report.txt");

	MyFile << "\n ~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~" << endl;

	for (int i = 0; i < 3; i++) {
		cout << "Enter Name: ";
		getline(cin, employeeName);
		cout << "Enter ID: ";
		getline(cin, employeeID);
		cout << "Enter City: ";
		getline(cin, city);
		cout << "Enter Salary: ";
		getline(cin, myStr);
		stringstream(myStr) >> salary;

		cout << "Do you own a car? 1 for yes, 0 for no: ";
		getline(cin, myStr);
		stringstream(myStr) >> hasCar;
		system("cls");
		
		if (eligible(city, CITY, salary, hasCar)) {
			cout << "Congrats, you are eligible for a raise, your salary is now: " << salary;

			MyFile << "city: " << city;
			MyFile << "Name: " << employeeName << "ID: " << employeeID << "Salary: " << salary << endl;
		}
		else {
			cout << "Sorry you arent eligable for a raise";
		}
		MyFile << "\n ~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~+~" << endl;
		MyFile.close();
		return 0;
	}
}

bool eligible(string city, const string CITY, double& salary, bool hasCar) {
	if ((city!=CITY) && (salary < 3000)) {
		if (!hasCar) {
			salary += 200;
		}
		else salary += 100;
	return true;
	}
	else return false;
}