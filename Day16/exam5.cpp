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
	
	// 초기화해주는 코드, 생성자
	//Time(int h, int m) :hour(h), minute(m) {

	//}

	//Time(int h, int m) :hour{ h }, minute{ m }{

	//}

	void print() {
		cout << hour << ":" << minute << endl;
	}

};

// 보조 함수
void init_time(Time& obj, int h, int m) {
	obj.hour = h;
	obj.minute = m;
}


class MyString {
private:
	char* s;
	int size;
public:
	MyString(char* c) { // 동적 메모리 할당 후 문자열 저장
		size = strlen(c) + 1; // NULL 포함 길이
		c = new char[size]; // 동적 할당
		strcpy(s, c);
		cout << "생성자 실행" << endl;
	}
	
	~MyString(){ //소멸자
		delete[] s;
		cout << "소멸자 실행" << endl;
	} 

};

int main() {

	//Time a; // 객체 a 생성
	//a.hour = 10;
	//a.minute = 25;
	//a.print();
	//init_time(a, 10 ,25);
	//a.print();

	//Time b;
	//b.hour = 26;
	//b.minute = 76;

	//Time a; // 만들어놓은 생성자의 유형에 맞게 초기화해야 함.
	//a.print();

	Time b(10, 25);
	b.print();

	Time c{ 10,25 };
	c.print();

	return 0;
}