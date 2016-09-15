//// 
// Silvia Moreno
// HW 1 - CS 171 Review
// 9/8/16
////

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void ex02();
void ex03();

int main() {
	ex02();
	ex03();
	return 0;

}

void ex02() {

	int hasPassedTest;
	hasPassedTest = true;


	int x = rand() % 10;
	int y = rand() % 10;
	if (x >= y)
		cout << "The number for x, " << x << " is greater than the number for  y " << y << endl;

	int numberOfShares;
	int value;
	numberOfShares = 0;
	value = 0;
	cout << "Please enter a value: /n";
	cin >> value;
	if (value < 100)
		cout << "The value is less than 100." << value;

	int bookWidth, boxWidth, answer;
	bookWidth = 0;
	boxWidth = 0;
	answer = 0;
	cout << "Please enter a width of a book:\n";
	cout << "Please enter a width of a box:\n";
	cin >> bookWidth;
	cin >> boxWidth;
	answer = boxWidth / bookWidth;
	if (answer % 2)
		cout << "It is evenly divisible";


	int shelfLife, outsideTemp, resultShelfLife;
	shelfLife = 0;
	outsideTemp = 0;
	resultShelfLife = 0;
	cout << "Please enter a shelf life for a box of chocolate: ";
	cin >> shelfLife;
	cout << "Please enter the temperature outside: ";
	cin >> outsideTemp;
	if (outsideTemp > 90)
		resultShelfLife = shelfLife - 4;




}
void ex03() {

}