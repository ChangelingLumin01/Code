/*Lab 5 Intermediate c++
  Writen by Curtis Brandstetter
  student number: 4244784
  
  This program takes a string you write into the console
  Prints it out
  then reverses it
  and prints the result
  Works with both letters and numbers*/

#include<iostream>
#include<string>
#include<sstream>
using namespace std;

void inverse(string s);
void loopReverse(string s);
string read(string s, string message);
void lineF(char Lineblock, int lineLen);

int main() {
	string s = "";
	lineF('~', 40);
	s = read(s, "Please write a string into the console that you want to reverse ");
	lineF('~', 40);
	cout << "\n The string you wrote is: " << s << endl;
	lineF('~', 40);
	cout << "\n The reversed string is: ";
	loopReverse(s);
	lineF('~', 40);
	inverse(s);
	lineF('~', 40);
	return 0;
}

void inverse(string s) {
	if (s.size() > 0)
	{
		inverse(s.substr(0 + 1, s.size() - 1));
		cout << s.substr(0, 1);
	}
	return;
}

void loopReverse(string s) {
	for (int i = s.size() - 1; i >= 0; i--) {
		cout << s.substr(i, 1);
	}
	return;
}

string read(string s, string message) {
	cout << message << ": ";
	getline(cin, s);
	system("cls");
	return s;
}

void lineF(char Lineblock, int lineLen) {
	cout << endl;
	for (int i = 0; i <= lineLen; i++)
		cout << Lineblock;
	cout << endl;
	return;
}