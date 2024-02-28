// 복사 생성자 vs 대입 연산자
// MyArray buffer1(20);
// MyArray buffer2(30);
// buffer2 = buffer1; -> 대입 연산자
// MyArray s1; -> 일반 생성자
// MyArray s2 = s1; -> 복사 생성자
// MyArray s2(s1); -> 복사 생성자
// MyArray s2{s1}; -> 복사 생성자

// 클래스 안에 객체 포함하기
// 1) is - a : 상속을 기반으로 함
// 2) has - a : 하나의 객체가 다른 객체를 가지고 있는 관계

// 정적 변수
// static을 붙여서 선언하는 변수, 클래스마다 하나만 생성
// 클래스의 모든 객체가 하나의 변수를 공유
// 카운터 변수를 정적 변수로 선언하고 생성자

// 상속
// 상속은 기존에 존재하는 클래스로부터 속성과 동작을 이어받아 자신이 필요한 기능을 추가해서 새로운 클래스로 만들어나가는 과정
// 상속은 이미 작성된 검증된 소프트웨어를 재사용할 수 있어 신뢰성 있는 소프트웨어를 개발, 유지, 보수할 수 있게 해주는 중요한 기술
// 코드의 중복을 줄일 수 있어 전체적인 코드의 크기가 작아짐
// 상속이란 이미 존재하는 클래스로부터 멤버들을 물려받는 것이다
// 이미 존재하는 클래스를 부모 클래스, 상속을 받는 클래스를 자식 클래스라 한다
// 상속 형식
// class ChildClss : 접근 지정자 ParentClass{
// .....//추가된 멤버 변수와 멤버 함수
//}
// 상속되는 것들
// 부모클래스의 멤버 변수와 멤버 함수가 자식클래스로 상속이 된다 -> 자유롭게 사용가능하다
// 상속의 강점은 상속된 특징들을 자식클래스에서 추가, 교체, 상세화시킬 수 있다.


#include<iostream>
using namespace std;

class MyArray {
public:
	int size;
	int* data;
	MyArray(int size); // 기본 생성자
	MyArray(const MyArray& other); // 복사 생성자
	~MyArray(); // 소멸자
	void print();
};

MyArray::MyArray(int size) {
	this->size = size;
	data = new int[size];
}

MyArray::MyArray(const MyArray& other) {
	this->size = other.size;
	this->data = new int[other.size];
	for (int i = 0; i < size; i++)
		this->data[i] = other.data[i];
}

MyArray::~MyArray() {
	if (data != nullptr) {
		delete[] this->data;
		data = nullptr;
	}
}

void MyArray::print() {
	cout << size << " " << data[0] << endl;
}

//class Person {
//public:
//	int age;
//	Person(int a) : age{ a } {}
//};

class Date {
	int year, month, day;
public:
	Date(int y, int m, int d) : year(y), month(m), day(d) {}
	void print() {
		cout << year << "." << month << "." << day << endl;
	}
};

class Person {
	string name;
	Date birth; // has - a 관계
public:
	Person(string n, Date d) : name(n), birth(d) {}
	void print() {
		cout << name << ": ";
		birth.print();
		cout << endl;
	}
};

class Circle {
	int x, y;
	int radius;
public:
	static int count; // 정적 변수
	Circle() :x(0), y(0), radius(0) {
		count++;
	}
	Circle(int x, int y, int r) :x(x), y(y), radius(r) {
		count++;
	}
	//정적 멤버 함수
	static int getCount() {
		return count;
	}
	~Circle() {
		count--;
	}
};
int Circle::count = 0; //초기화

class Car {
	int speed;
public:
	void setSpeed(int s) { 
		speed = s; 
	}
	int getSpeed() {
		return speed;
	}

};
// Car 클래스를 상속받아서 SportsCar 클래스를 작성한다
class SportsCar : public Car {
	bool turbo;
public:
	void setTurbo(bool value) {
		turbo = value;
	}
	int getTurbo() {
		return turbo;
	}
};

class Shape {
	int x, y;
public:
	void setX(int);

	void setY(int);
};

class Rectangle : public Shape {
	int width;
	int height;
public:
	void setWidth(int w) {
		width = w;
	}
	void setHeight(int h) {
		height = h;
	}
	int getArea() {
		return width * height;
	}
};

int main() {

	//MyArray buffer(10);
	//buffer.data[0] = 1;
	//buffer.print();

	//MyArray clone(buffer);
	//buffer.data[0] = 2;
	//
	//buffer.print();
	//clone.print();

	//Person obj1(20);
	//Person obj2(20);
	//// obj2 = obj1;

	//string name = "kim";
	//string name2 = "lee";

	//if (name == name2) {
	//	cout << "같습니다" << endl;
	//}
	//else
	//	cout << "같지 않습니다" << endl;
	
	//Date d(1998, 3, 1);
	//Person p("김나은", d);
	//p.print();

	//Circle c1;
	//cout << "지금까지 생성된 원의 개수: " << Circle::getCount() << endl;
	//Circle c2(200, 100, 30);
	//cout << "지금까지 생성된 원의 개수: " << Circle::getCount() << endl;

	//SportsCar c1;
	//c1.setSpeed(60);
	//c1.setTurbo(true);
	//cout << c1.getSpeed() << " " << c1.getTurbo() << endl;
	//c1.setSpeed(100);
	//c1.setTurbo(false);
	//cout << c1.getSpeed() << " " << c1.getTurbo() << endl;
	
	Rectangle r1;
	r1.setWidth(5);
	r1.setHeight(6);
	cout << "사각형의 면적: " << r1.getArea() << endl;

	return 0;
}