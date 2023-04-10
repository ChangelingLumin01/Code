//Created By: Curtis Brandstetter
//Date: 10/04/2023
//Student ID: 4244784

#include <iostream>
using namespace std;
struct Node {
	int data;
	struct Node* prev;
	struct Node* next;
};
struct Node* head = NULL;
struct Node* tail = NULL;
void insert(int newdata) {
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->data = newdata;
	newnode->next = NULL;
	if (head == NULL) {
		head = newnode;
		tail = newnode;
	}
	else {
		newnode->prev = tail;
		tail->next = newnode;
		tail = newnode;
	}
}
void display() {
	/*Displays the data of the linked list inside a box*/
	struct Node* ptr;
	ptr = head;
	while (ptr != NULL) {
		cout << "+----+ \n";
		cout << "| " << ptr->data << " |" << endl;
		cout << "+----+ \n";
		ptr = ptr->next;
	}
}
int main() {
	insert('B');
	insert('I');
	insert('N');
	insert('G');
	insert('O');
// Bingo was his name-o... Sorry Dad humor....
	cout << "+---------------------------+ \n";
	cout << "| " << "The doubly linked list is" << " |" << endl;
	cout << "+---------------------------+ \n";
// Probably should mention how much I like using boxes whenever I display data in the consol.
// Makes it easier to read, and looks nice too.
	display();
	return 0;
}
/* I have noticed a small quirk while displaying the data.
   If you replace the intagers with a single character instead,
   the data comes back in the consol as a double digit.*/