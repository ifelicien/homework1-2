#include <iostream>
using namespace std;

int main(){
	int inputOne, inputTwo, selector;

	cout << "Please enter your first number: ";
	cin >> inputOne;

	cout << "Please enter your second number: ";
	cin >> inputTwo;

	cout << "\nplease select the operation: " << endl;
	cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;

	cout << "\nEnter 1 for Integer Division" << endl;
	cout << "Enter 2 for Floating-point Division" << endl;
	cout << "Enter 3 for modulo " << endl;

	start:
	cout << "\nEnter your selection: ";
	cin >> selector;

	switch (selector){
	case 1:
		cout << "\n\n" << inputOne << " / " << inputTwo << " using integer division is: " << inputOne/inputTwo << endl;
		break;
	case 2:
		cout << "\n\n" << inputOne << " / " << inputTwo << " using integer division is: " << (double)inputOne/(double)inputTwo << endl;
		break;
	case 3:
		cout << "\n\n" << inputOne << " % " << inputTwo << " using integer division is: " << inputOne%inputTwo << endl;
		break;
	default:
		cout << "incorrect input";
		goto start;
	}

	return 0;
}