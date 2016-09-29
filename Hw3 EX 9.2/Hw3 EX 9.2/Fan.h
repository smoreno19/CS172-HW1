#include <iostream>
using namespace std;

class Fan {
public: //variables are public so it can be used for the functions
	int speed;
	bool on;
	double radius;
	Fan() {
		speed = 1; //default speed is 1
		on = false; //default status is off	
		radius = 5; //default radius is 5
	}
	void fanOn() {

	}
	void fanOff() {
	}
};
#pragma once
