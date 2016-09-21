//// 
// Silvia Moreno
// HW 1 - CS 171 Review
// 9/8/16
////

#include <iostream>
#include <cstdlib>//allows the random generator to work
#include <ctime>
#include <cmath>//allows math to be used
#include <string> //allows more than one character to be inputed into the program
#include <cctype>

using namespace std;
//header files, universal, it can be used throughout the program
void ex02();
void ex03();
void ex04();
void ex05();

int main() {
	ex02(); //calling the functions in main to be used for the program.
	ex03();
	ex04();
	ex05();

	return 0;
}

void ex02() {

	int hasPassedTest;
	hasPassedTest = true; //initialize the "hasPassedTest" to true

	srand(time(0)); //random generator
	int x = rand() % 10; //for single digit number
	int y = rand() % 10;
	cout << "X = "<< x << " and Y = " << y << endl;
	if (x > y) {// if x is greater than y then the statement will pop out.

		cout << "The number for x, " << x << " is greater than the number for  y " << y << endl;
	}
	else if (x == y) // if they equal then the statement will pop out
		cout << "X and Y are equal to each other." << endl;
	else 
		cout << "X is not greater than or equal to Y.\n";
		
	int numberOfShares;
	int value;
	numberOfShares = 0; //initialized them to 0
	value = 0;
	cout << "Please enter a value: \n";
	cin >> value; //user enters a value
	if (value < 100)
		cout << "The value is less than 100.\n"; //if value is less than 100, this statement will show
	else
		cout << "The value is not less than 100.\n";

	int bookWidth, boxWidth, answer;
	bookWidth = 0;
	boxWidth = 0;
	answer = 0;
	cout << "Please enter a width of a book:\n"; //asks the user to input a number
	cin >> bookWidth;
	cout << "Please enter a width of a box:\n";
	cin >> boxWidth;
	answer = boxWidth / bookWidth; //equation to find an answer
	if (answer % 2) //this is evenly divisible
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
	if (outsideTemp > 90) { // if outside temp, is greater than 90, then the shelflife will decrease by 4
		resultShelfLife = shelfLife - 4;
		cout << "The shelf life due to the temperature is: " << resultShelfLife << " days\n";
	}
	else
		cout << "The shelf life is still " << shelfLife << endl; //if not, then its the same

}
void ex03() {
	double area, diagonal;
	double length, Hyp;
	Hyp = 0;
	diagonal = 0;
	length = 0;
	area = 0;
	cout << "Please enter an area for a square: ";
	cin >> area; //user enters an area of a square
	length = sqrt(area);
	Hyp = (pow(length, 2))*2; //two equations is using the pythagorean theorem to find the diagonal of the box
	diagonal = sqrt(Hyp);
	cout <<"The length of the square is: " << length << endl;
	cout << "The diagonal of the square is: " << diagonal << endl;

	cout << "Are you a girl? (Y or N) ";
	char ch; //character, either yes or no
	cin >> ch;
	if (ch == 'y' || ch == 'Y') //if user inputs y or Y then it will be a yes
		cout << "Yes"<< endl;
	else
		cout << "No" << endl;

	string mailingAddress;	//string outputs the whole address
	cout << "What is your current address? " << endl;
	std::cin.ignore(); // helps to add numbers and variables
	getline(cin,mailingAddress);
	cout << "Your address is: " << mailingAddress << endl; //outputs the users address


}
void ex04Integer(int sum) //parameter
{ 
	int total = 0;
	total = sum * 2; //uses the sum number from ex04 and doubles it
	cout << total;
	cout << endl;

}
int add()
{
	int summation = 0;
	srand(time(0)); //random generator
	int x = rand() % 10;
	int y = rand() % 10;
	summation = x + y;//adds the random generated numbers to find the summation of them both
	return summation; //returns the summation to the called funcion in ex04
}
void parameter(int x, int y)
{ //adds one to the parameter
	x + 1;
	y + 1;
}
void ex04()
{
	int number;
	cout << "Please enter a number between 1-10: ";
	cin >> number;
	while (number < 1 || number > 10)
	{
		cout << "Please try again: ";
		cin >> number;
	}
	int sum = 0;
	sum = number * 3; //the sum is times by three to find the cubic sum of the integers
	cout << "The cubic sum of the number is " << sum << endl;
	do {
		sum--;
		cout << '*'; //outputs the number of stars that the sum corresponds to and it continues while it is greater than 0
	
	} while (sum > 0);
	cout << endl;
	int count =0;
	for (int i = 0; i <= 40; i++)
	{// outputs the even numbers from 0-40
		if (count % 2 ==0) {
			cout << count << " " ; //adds a space in betweent he numbers
		}
		count++; cout << "";
	}
	cout << endl;
	ex04Integer(number); //calls a function in this function that will be used after this functionis done.
	add();
	parameter(5,6);
}
void arrayInfo()
{
	const int SIZE = 5;
	double list[SIZE]; 
	list[0] = 7;
	list[1] = 8; //listed 5 umbers that will be popped out into the program
	list[2] = 9;
	list[3] = 10;
	list[4] = 11;

	for (int i = 0; i < SIZE; i++)
	{
		cout << list[i] << " "; //the list will be outputed with a space in between the numbers
	}
	cout << endl;
}
void arrayValue()
{
	double numbers[5] = { 5,3,2,5,1 }; //size of the array with a list of numbers within the array
	int number=0;
	cout << "Enter a value: \n" ;
	cin >> number;//user will input a value
	for (int i = 0; i < 5; i++)
	{
		if (numbers[i] == number) { 
			cout << "The number inputed is  part of the array." << endl;
			cout << endl;
		}
//determine whether or not the value the user inputed is already in the array
		else {
			cout << "The number is not part of the array." << endl;
			cout << endl;
		}
	}
}
void ex05()
{
	const int NumberofIntegers = 5;
	double numbers[NumberofIntegers];
	double sum = 0;
	double product = 1;
	for (int i = 0; i < NumberofIntegers; i++) {
		cout << "Please enter 5 integers: " << endl;
		cin >> numbers[i]; //user will output 5 numbers
		sum += numbers[i]; //the sum formula for the 5 integers
		product = product * numbers[i]; //product equation that will be displayed after every go through 
	}
	cout << "The sum of the integers is " << sum << endl; //outputs the sum and product of the five integerrs
	cout << "The product of the integers is " << product << endl;
	arrayInfo();
	arrayValue();// calls the function within this function
}
