#include "Header.h"
void ReadPersonData(string& Name, unsigned short& Age, unsigned short& Height, unsigned short& Weight) {
	cout << "Your name:";
	cin >> Name;
	cout << "Your age:";
	cin >> Age;
	cout << "Your height:";
	cin >> Height;
	cout << "Your weight:";
	cin >> Weight;
}