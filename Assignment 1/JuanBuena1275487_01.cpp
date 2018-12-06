/*COSC 1410, Assignment 1
Thursday, September 04, 2014
Write a program to make centimeter-to-inch/inch-to-centimeter conversion.
Assume the user will always enter numbers
*/

#include <iostream>
using namespace std;
//Init the functions
float inch_centimeter(float inchParameter);
float centimeter_inch(float centParameter);


int main() {
	//Init the variables
	int selection;
	float inches, cent;
	//Printing the Menu
	cout << "1 for inch-to-centimeter conversion\n";
	cout << "2 for centimeter-to-inch conversion\n";
	cout << "Please make a selection:";
	//Input from the user to make selection
	cin >> selection;
	cout << "-------------------------------" << endl;
	//Init if selection is 1
	if (selection == 1) {
		cout << "Please enter the value in inches:";
		cin >> inches;
		//Printing and calling the function
		cout << inches << " inches = " << inch_centimeter(inches) << " centimeters\n";
	}
	//Init if selection is 2
	else if (selection == 2) {
		cout << "Please enter the value in centimeters:";
		cin >> cent;
		//Printing and calling the function
		cout << cent << " centimeters = " << centimeter_inch(cent) << " inches\n";
	}
	//Print if the input is not valid
	else {
		cout << "Please enter a valid selection!\n";
	}
	system("pause");
	return 0;
}
float inch_centimeter(float inchParameter){
	const float ITC = 2.54;	//To convert from inches to centimeters multiply by 2.54

	return (inchParameter*ITC);
}

float centimeter_inch(float centParameter) {
	const float CTI = 0.393701; //To convert from centimeters to inches multiply by 0.393701

	return (centParameter*CTI);
}