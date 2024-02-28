// ���� ������ vs ���� ������
// MyArray buffer1(20);
// MyArray buffer2(30);
// buffer2 = buffer1; -> ���� ������
// MyArray s1; -> �Ϲ� ������
// MyArray s2 = s1; -> ���� ������
// MyArray s2(s1); -> ���� ������
// MyArray s2{s1}; -> ���� ������

// Ŭ���� �ȿ� ��ü �����ϱ�
// 1) is - a : ����� ������� ��
// 2) has - a : �ϳ��� ��ü�� �ٸ� ��ü�� ������ �ִ� ����

// ���� ����
// static�� �ٿ��� �����ϴ� ����, Ŭ�������� �ϳ��� ����
// Ŭ������ ��� ��ü�� �ϳ��� ������ ����
// ī���� ������ ���� ������ �����ϰ� ������

// ���
// ����� ������ �����ϴ� Ŭ�����κ��� �Ӽ��� ������ �̾�޾� �ڽ��� �ʿ��� ����� �߰��ؼ� ���ο� Ŭ������ �������� ����
// ����� �̹� �ۼ��� ������ ����Ʈ��� ������ �� �־� �ŷڼ� �ִ� ����Ʈ��� ����, ����, ������ �� �ְ� ���ִ� �߿��� ���
// �ڵ��� �ߺ��� ���� �� �־� ��ü���� �ڵ��� ũ�Ⱑ �۾���
// ����̶� �̹� �����ϴ� Ŭ�����κ��� ������� �����޴� ���̴�
// �̹� �����ϴ� Ŭ������ �θ� Ŭ����, ����� �޴� Ŭ������ �ڽ� Ŭ������ �Ѵ�
// ��� ����
// class ChildClss : ���� ������ ParentClass{
// .....//�߰��� ��� ������ ��� �Լ�
//}
// ��ӵǴ� �͵�
// �θ�Ŭ������ ��� ������ ��� �Լ��� �ڽ�Ŭ������ ����� �ȴ� -> �����Ӱ� ��밡���ϴ�
// ����� ������ ��ӵ� Ư¡���� �ڽ�Ŭ�������� �߰�, ��ü, ��ȭ��ų �� �ִ�.


#include<iostream>
using namespace std;

class MyArray {
public:
	int size;
	int* data;
	MyArray(int size); // �⺻ ������
	MyArray(const MyArray& other); // ���� ������
	~MyArray(); // �Ҹ���
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
	Date birth; // has - a ����
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
	static int count; // ���� ����
	Circle() :x(0), y(0), radius(0) {
		count++;
	}
	Circle(int x, int y, int r) :x(x), y(y), radius(r) {
		count++;
	}
	//���� ��� �Լ�
	static int getCount() {
		return count;
	}
	~Circle() {
		count--;
	}
};
int Circle::count = 0; //�ʱ�ȭ

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
// Car Ŭ������ ��ӹ޾Ƽ� SportsCar Ŭ������ �ۼ��Ѵ�
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
	//	cout << "�����ϴ�" << endl;
	//}
	//else
	//	cout << "���� �ʽ��ϴ�" << endl;
	
	//Date d(1998, 3, 1);
	//Person p("�質��", d);
	//p.print();

	//Circle c1;
	//cout << "���ݱ��� ������ ���� ����: " << Circle::getCount() << endl;
	//Circle c2(200, 100, 30);
	//cout << "���ݱ��� ������ ���� ����: " << Circle::getCount() << endl;

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
	cout << "�簢���� ����: " << r1.getArea() << endl;

	return 0;
}