#include <iostream>
using namespace std;

int main(){
	int inputOne, inputTwo, selector;

	cout << "Please enter your first number: ";
	cin >> inputOne;

	cout << "Please enter your second number: ";
	cin >> inputTwo;

	cout << "please select the operation: " << endl;
	cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;

	cout << "Enter 1 for Integer Division" << endl;
	cout << "Enter 2 for Floating-point Division" << endl;
	cout << "Enter 3 for modulo " << endl;

	cout << "Enter your selection: ";
	cin >> selector;

	switch (selector){
	case 1:

	default:
		break;
	}

	return 0;
}