#pragma once

#include<iostream>

using namespace std;
// �Լ��� ���� : "Car.h"
class Car {

	int speed;
	int gear;
	string color;

public:
	int getSpeed();
	void setSpeed(int s);
};
