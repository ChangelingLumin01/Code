#include <iostream>
#include <string>
using namespace std;



int main() {
	int a;
	int b;
	char calculate;

	cout << "input your first number: \n";
	cin >> a;
	cout << "input your second number: \n";
	cin >> b;
	cout << "+, - or *? \n";
	cin >> calculate;

	switch (calculate) {
	case '+':
		cout << a << "+" << b << "=" << a + b;
		break;
	case '-':
		cout << a << "-" << b << "=" << a - b;
		break;
	case '*':
		cout << a << "*" << b << "=" << a * b;
		break;
	default:
		cout << "404 unerversal shutdown beep boop \n";
	}
	
}