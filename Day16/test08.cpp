// 멤버 함수 중복 정의
// 멤버 함수도 함수의 일종이므로 중복 정의가 가능
// 디폴트 매개변수 기법도 사용 가능

// 클래스의 인터페이스와 구현의 분리
// 프로그램의 규모가 커지게 되면 클래스 안의 코드가 방대해져 전체적인 내용을 파악하기 어려워짐
// 클래스 안에 원형
// 클래스 밖에 정의

// 객체 지향 프로그램의 개념들
// 1. 캡슐화
// 클래스: (데이터 + 알고리즘) -> 캡슐화
// 코드의 재사용을 쉽게하기 위해서 하나의 묶음으로 정리해놓은 것
// 2. 정보 은닉
// 월: month (1~12)
// month++;
// private:
// protected:
// public:
// 3. 상속과 다형성
// 상속은 기존의 코드를 재사용하기 위한 기법
// 이미 작성된 클래스(부모 클래스)를 이어받아서 새로운 클래스(자식 클래스)를 생성하는 기법
// 다형성이란 객체가 취하는 동작이 상황에 따라서 달라지는 것

// 생성자와 소멸자
// 1. 생성자
// 객체 변수의 초기화를 담당하는 역할
// 2. 소멸자
// 생성된 객체가 범위를 벗어나면 객체는 소멸됨
// 이때마다 호출되는 특정한 멤버함수가 소멸자
// 파일을 닫거나 메모리를 반환하는 작업과 같이 프로그램을 종료하기 전에 자원을 반납하는데 유용하게 사용할 수 있음

#include<iostream>
#include"Car.h"
using namespace std;

class PrintData {
public:
	void print(int i) {
		cout << i << endl;
	}

	void print(double i) {
		cout << i << endl;
	}

	void print(string s = "No Data!") {
		cout << s << endl;
	}


};

class Circle {
public:
	int radius;
	string color;

	double calcArea(); // 클래스 안에는 함수의 원형만 정의
};

// 클래스 외부에서 멤버 함수들이 정의
double Circle::calcArea() {
	return 3.14 * radius * radius;

}

int main() {
	
	//PrintData obj;
	//obj.print(10);
	//obj.print(3.14);
	//obj.print("C++ is interesting");
	//obj.print();

	Circle c1; // 객체 생성(인스턴스)
	c1.radius = 10;
	cout << c1.calcArea() << endl;


	return 0;
}