////
// Silvia Moreno
// 09/26/16
// CS-172-1
// Fan Classes
////

#include <iostream>
using namespace std;

class Fan {
public: //variables are public so it can be used for the functions
	int speed;
	bool on;
	double radius;
	Fan() {
		speed= 1; //default speed is 1
		on = false; //default status is off	
		radius = 5; //default radius is 5
	}
	void FanOn() {
		on = true;
	}
	void FanOff() {
		on = false;
	}
	void fast1() {
		speed = 1;
	}
	void fast2() {
		speed = 2;
	}
	void fast3() {
		speed = 3;
	}
	void radiusLength1() {
		radius = 10;
	}
	void radiusLength2() {
		radius = 5;
	}
};
int main()
{
	
	Fan f1; //first object of Fan
	f1.fast3();
	f1.radiusLength1();
	f1.FanOn(); //calls the function from the class, the fan will be on
	Fan f2;
	f2.fast2();
	f2.radiusLength2();
	f2.FanOff();
	cout << "The first speed set is " << f1.fast3 << ", the radius is " << f1.radiusLength1 << ", and the fan is " << f1.FanOn << endl;
	cout << "The second speed set is " << f1.fast2 << ", the radius is " << f1.radiusLength2 << ", and the fan is " << f1.FanOff << endl;
}