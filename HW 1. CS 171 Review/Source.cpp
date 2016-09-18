//// 
// Silvia Moreno
// HW 1 - CS 171 Review
// 9/8/16
////

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
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

	srand(time(0));
	int x = rand() % 10;
	int y = rand() % 10;
	cout << "X = "<< x << " and Y = " << y << endl;
	if (x >= y) {
		
		cout << "The number for x, " << x << " is greater than the number for  y " << y << endl;
	}
	else
		cout << "X is not greater than or equal to Y.\n";
		

	int numberOfShares;
	int value;
	numberOfShares = 0;
	value = 0;
	cout << "Please enter a value: \n";
	cin >> value;
	if (value < 100)
		cout << "The value is less than 100.\n";
	else
		cout << "The value is not less than 100.\n";

	int bookWidth, boxWidth, answer;
	bookWidth = 0;
	boxWidth = 0;
	answer = 0;
	cout << "Please enter a width of a book:\n";
	cin >> bookWidth;
	cout << "Please enter a width of a box:\n";
	cin >> boxWidth;
	answer = boxWidth / bookWidth;
	if (answer % 2)
		cout << "It is evenly divisible\n";
	else
		cout << "It is not evenly divisible\n";


	int shelfLife, outsideTemp, resultShelfLife;
	shelfLife = 0;
	outsideTemp = 0;
	resultShelfLife = 0;
	cout << "Please enter a shelf life for a box of chocolate: \n";
	cin >> shelfLife;
	cout << "Please enter the temperature outside: \n";
	cin >> outsideTemp;
	if (outsideTemp > 90) {
		resultShelfLife = shelfLife - 4;
		cout << "The shelf life due to the temperature is: " << resultShelfLife << " days\n";
	}
	else
		cout << "The shelf life is still " << shelfLife << endl;

}
void ex03() {
	double area, diagonal;
	int length, Hyp;
	Hyp = 0;
	diagonal = 0;
	length = 0;
	area = 0;
	cout << "Please enter an area for a square: ";
	cin >> area;
	length = sqrt(area);
	Hyp = (pow(length, 2))*2;
	diagonal = sqrt(Hyp);
	cout <<"The length of the square is: " << length << endl;
	cout << "The diagonal of the square is: " << diagonal << endl;


}