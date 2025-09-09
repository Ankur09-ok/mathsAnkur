#include <iostream>
using namespace std;

//this code is developed by Ankur Borah

int main () {
	int choice;
	double temp, converted;
	
	cout << "temperature Conversion Program" << endl;
	cout << "1. Celsius to Fahrenheit" << endl;
	cout << "2. Fahrenheit to Celsius" << endl;
	cout << " Enter your choice (1 or 2): ";
	cin >> choice;
	
	if (choice == 1) {
		cout << "Enter temperature in Celsius: ";
		cin >> temp;
		converted = (temp * 9.0 / 5.0) + 32;
		cout << temp << " C =" << converted << " F" << endl;
	}
else if (choice == 2) {
	
    cout << "Enter temperature in Fahrenheit: ";
	cin >> temp;
	converted = (temp - 32) *5.0 / 9.0;
	cout << temp << " F =" << converted << "C" << endl;
}
else {
	cout << "INvalid choice!" << endl;
}

return 0;
}
