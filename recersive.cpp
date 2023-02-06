#include <iostream>
using namespace std;

void display(int);
//int factorial(int);
//int loopFactorial(int);

int main() {
	int n, result;
	cout << "Enter any number: ";
	cin >> n;
	display(n);
	/*factorial(n);
	loopFactorial(n);*/
}

void display(int n) {
	int r = 0;
	if (n >= 1) {
		display(n - 1);
		cout << "\n" <<  n;
		return;
	}
	else {
		return;
	}
	/*This function counts up by 1, and
	keeps going until the number hits your input*/
}

//int factorial(int n) {
//	int r = 0;
//	if (n > 1) {
//		cout << "\n* " << n;
//		r = n * factorial(n - 1);
//		return r;
//	}
//	else {
//		return 1;
//	}
//}
//
//int loopFactorial(int n) {
//	int r = 1;
//	for (int i = 1; i <= n; i++) {
//		cout << "\n* " << i;
//		r = r * i;
//	}
//	return r;
//}