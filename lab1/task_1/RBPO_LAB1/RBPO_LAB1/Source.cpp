#include <iostream>
#include <string>
#include <locale>
using namespace std;

unsigned short height;
string sal2 = "";

unsigned short ReadPersonAge() {
	unsigned short Age;
	cout << "Your aget: ";
	cin >> Age;
	return Age;
}

string ReadPersonName() {
	string name;
	cout << "Your name: ";
	cin >> name;
	return name;
}

void ReadPersonData(string& Name, unsigned short& Age, double& Salary) {
	cout << "Your name: ";
	cin >> Name;
	cout << "Your age: ";
	cin >> Age;
	cout << "Your selary: ";
	cin >> Salary;
}


void ReadPersonHeight() {
	cout << "Your height: ";
	cin >> height;
}

void ReadPersonWeight(unsigned short& Weight) {
	cout << "Your weight: ";
	cin >> Weight;
}

void ReadPersonSalary(double* Salary) {
	cout << "Your Sellary: ";
	cin >> *Salary;
}


void ReadPersonData(string& Name, unsigned short& Age, unsigned short& Weight, unsigned short& Height) {
	cout << "Your name: ";
	cin >> Name;
	cout << "Your height: ";
	cin >> Height;
	cout << "Your weight: ";
	cin >> Weight;
	cout << "Your age: ";
	cin >> Age;

}

void WritePersonData(string& Name, const string& Height, const string& Weight, const unsigned short* Age) {
	cout << "Name=" << Name << " Height=" << Height << " Weight=" << Weight << " Age=" << *Age;
}



int main() {
	string Name = ReadPersonName();
	unsigned short Age = ReadPersonAge();
	unsigned short Weight = 0;
	double Sal1 = 10;
	ReadPersonSalary(&Sal1);
	ReadPersonWeight(Weight);
	sal2 = to_string(Sal1);
	string Height1 = to_string(height);
	string Weight1 = to_string(Weight);
	ReadPersonData(Name, Age, Sal1);
	ReadPersonData(Name, Age, Weight, height);
	WritePersonData(Name, Height1, Weight1, &Age);
	return 0;
}