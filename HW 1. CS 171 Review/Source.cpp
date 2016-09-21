//// 
// Silvia Moreno
// HW 1 - CS 171 Review
// 9/8/16
////

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
#include <cctype>

using namespace std;

void ex02();
void ex03();
void ex04();
void ex05();

int main() {
	//ex02();
	//ex03();
	//ex04();
	ex05();
	return 0;
}
//
//void ex02() {
//
//	int hasPassedTest;
//	hasPassedTest = true;
//
//	srand(time(0));
//	int x = rand() % 10;
//	int y = rand() % 10;
//	cout << "X = "<< x << " and Y = " << y << endl;
//	if (x > y) {
//
//		cout << "The number for x, " << x << " is greater than the number for  y " << y << endl;
//	}
//	else if (x == y)
//		cout << "X and Y are equal to each other." << endl;
//	else
//		cout << "X is not greater than or equal to Y.\n";
//		
//	int numberOfShares;
//	int value;
//	numberOfShares = 0;
//	value = 0;
//	cout << "Please enter a value: \n";
//	cin >> value;
//	if (value < 100)
//		cout << "The value is less than 100.\n";
//	else
//		cout << "The value is not less than 100.\n";
//
//	int bookWidth, boxWidth, answer;
//	bookWidth = 0;
//	boxWidth = 0;
//	answer = 0;
//	cout << "Please enter a width of a book:\n";
//	cin >> bookWidth;
//	cout << "Please enter a width of a box:\n";
//	cin >> boxWidth;
//	answer = boxWidth / bookWidth;
//	if (answer % 2)
//		cout << "It is evenly divisible\n";
//	else
//		cout << "It is not evenly divisible\n";
//
//
//	int shelfLife, outsideTemp, resultShelfLife;
//	shelfLife = 0;
//	outsideTemp = 0;
//	resultShelfLife = 0;
//	cout << "Please enter a shelf life for a box of chocolate: \n";
//	cin >> shelfLife;
//	cout << "Please enter the temperature outside: \n";
//	cin >> outsideTemp;
//	if (outsideTemp > 90) {
//		resultShelfLife = shelfLife - 4;
//		cout << "The shelf life due to the temperature is: " << resultShelfLife << " days\n";
//	}
//	else
//		cout << "The shelf life is still " << shelfLife << endl;
//
//}
//void ex03() {
//	double area, diagonal;
//	double length, Hyp;
//	Hyp = 0;
//	diagonal = 0;
//	length = 0;
//	area = 0;
//	cout << "Please enter an area for a square: ";
//	cin >> area;
//	length = sqrt(area);
//	Hyp = (pow(length, 2))*2;
//	diagonal = sqrt(Hyp);
//	cout <<"The length of the square is: " << length << endl;
//	cout << "The diagonal of the square is: " << diagonal << endl;
//
//	cout << "Are you a girl? (Y or N) ";
//	char ch;
//	cin >> ch;
//	if (ch == 'y' || ch == 'Y')
//		cout << "Yes"<< endl;
//	else
//		cout << "No" << endl;
//
//	string mailingAddress;	
//	cout << "What is your current address? " << endl;
//	std::cin.ignore();
//	getline(cin,mailingAddress);
//	cout << "Your address is: " << mailingAddress << endl;
//
//
//}
//void ex04Integer(int sum)
//{
//	int total = 0;
//	total = sum * 2;
//	cout << total;
//	cout << endl;
//
//}
//int add()
//{
//	int summation = 0;
//	srand(time(0));
//	int x = rand() % 10;
//	int y = rand() % 10;
//	summation = x + y;
//	return summation;
//}
//void parameter(int x, int y)
//{
//	x + 1;
//	y + 1;
//}
//void ex04()
//{
//	int number;
//	cout << "Please enter a number between 1-10: ";
//	cin >> number;
//	while (number < 1 || number > 10)
//	{
//		cout << "Please try again: ";
//		cin >> number;
//	}
//	int sum = 0;
//	sum = number * 3;
//	cout << "The cubic sum of the number is " << sum << endl;
//	do {
//		sum--;
//		cout << '*';
//	
//	} while (sum > 0);
//	cout << endl;
//	int count =0;
//	for (int i = 0; i <= 40; i++)
//	{
//		if (count % 2 ==0) {
//			cout << count << " " ;
//		}
//		count++; cout << "";
//	}
//	cout << endl;
//	ex04Integer(number);
//	add();
//	parameter(5,6);
//}

void ex05()
{
	const int NumberofIntegers = 5;
	double numbers[NumberofIntegers];
	double sum = 0;
	double product = 1;
	for (int i = 0; i < NumberofIntegers; i++) {
		cout << "Please enter 5 integers: " << endl;
		cin >> numbers[i];
		sum += numbers[i];
		product = product * numbers[i];
	}
	cout << "The sum of the integers is " << sum << endl;
	cout << "The product of the integers is " << product << endl;


}