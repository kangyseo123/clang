#pragma once

#include<iostream>

using namespace std;
// 함수의 선언 : "Car.h"
class Car {

	int speed;
	int gear;
	string color;

public:
	int getSpeed();
	void setSpeed(int s);
};
