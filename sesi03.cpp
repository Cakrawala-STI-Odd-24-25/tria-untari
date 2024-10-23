// sesi03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <string>
using namespace std;

const float CM_IN_INCH = 2.54;
const int INCH_IN_FOOT = 12;

int main()
{
	int feet;
	int inch;
	int totalInches;
	float totalCentimeter;

	cout << "Masukkan panjang dalam kaki: ";
	cin >> feet;
	cout << endl;

	cout << "Masukkan panjang dalam inci: ";
	cin >> inch;
	cout << endl;

	totalInches = (feet * INCH_IN_FOOT) + inch;

	cout << "Total Inci: " << totalInches << endl;

	totalCentimeter = totalInches * CM_IN_INCH;

	cout << "Total Sentimeter: " << totalCentimeter << endl;

	return 0;
}