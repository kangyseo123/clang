#include<iostream>

using namespace std;

class Time {

public:
	int hour; 
	int minute;

	Time(int h, int m) {
		hour = h;
		minute = m;

	}
	
	// �ʱ�ȭ���ִ� �ڵ�, ������
	//Time(int h, int m) :hour(h), minute(m) {

	//}

	//Time(int h, int m) :hour{ h }, minute{ m }{

	//}

	void print() {
		cout << hour << ":" << minute << endl;
	}

};

// ���� �Լ�
void init_time(Time& obj, int h, int m) {
	obj.hour = h;
	obj.minute = m;
}


class MyString {
private:
	char* s;
	int size;
public:
	MyString(char* c) { // ���� �޸� �Ҵ� �� ���ڿ� ����
		size = strlen(c) + 1; // NULL ���� ����
		c = new char[size]; // ���� �Ҵ�
		strcpy(s, c);
		cout << "������ ����" << endl;
	}
	
	~MyString(){ //�Ҹ���
		delete[] s;
		cout << "�Ҹ��� ����" << endl;
	} 

};

int main() {

	//Time a; // ��ü a ����
	//a.hour = 10;
	//a.minute = 25;
	//a.print();
	//init_time(a, 10 ,25);
	//a.print();

	//Time b;
	//b.hour = 26;
	//b.minute = 76;

	//Time a; // �������� �������� ������ �°� �ʱ�ȭ�ؾ� ��.
	//a.print();

	Time b(10, 25);
	b.print();

	Time c{ 10,25 };
	c.print();

	return 0;
}