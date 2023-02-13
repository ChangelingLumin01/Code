#include <iostream>
#include <string>
using namespace std;

void color(string & tShirt, string & shoes) {
		cout << "What is the color of your shirt? ";
		cin >> tShirt;
		cout << "What is the color of your shoes? ";
		cin >> shoes;
		return;

}

void soccor(string tShirt, string shoes) {
	if ((tShirt == "yellow") && (shoes == "white"))
		cout << "Play Ball!";
	else if ((tShirt != "yellow") && (shoes == "white"))
		cout << "Please put on a Yellow Shirt!";
	else if ((tShirt == "yellow") || (shoes == "white"))
		cout << "You are in the waiting list...";
	return;
}

void basketball(string tShirt, string shoes) {
	if ((tShirt != "yellow") && (shoes != "white"))
		cout << "Play basketball instead...";
	return;
}

int main() {
	string tShirt, shoes;
	color(tShirt, shoes);
	soccor(tShirt, shoes);
	basketball(tShirt, shoes);
	return 0;
}