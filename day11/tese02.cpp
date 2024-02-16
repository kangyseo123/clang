// 수식과 연산자
// 사칙연산자
// x + y -> x와 y를 더한다
// x - y -> x에서 y를 뺀다
// x * y -> x와 y를 곱한다
// x / y -> x를 y로 나눈다
// x % y -> x를 y로 나눈 나머지
// char - short - int - float - double

#include<iostream>

using namespace std;

int main() {

	/*string name;
	cout << "이름을 입력하세요: ";
	cin >> name;
	cout << name << "님 환영합니다!" << endl;

	int age;
	cout << "나이를 입력하세요: ";
	cin >> age;
	cout << "나이는 " << age << "살 입니다." << endl;
	
	double height;
	cout << "이름 입력: ";
	cin >> name;
	cout << "키 입력: ";
	cin >> height;
	cout << "나이 입력: ";
	cin >> age;

	cout << "이름은 " << name << "입니다" << endl;
	cout << "키는 " << height <<"입니다" << endl;
	cout << "나이는 " << age << "입니다" << endl;*/
	
	int money;
	int price;
	cout << "현재 가지고 있는 돈: ";
	cin >> money;
	cout << "사탕의 가격: ";
	cin >> price;
	cout << "살 수 있는 사탕의 개수: " << money / price << endl;
	cout << "남은 돈: " << money % price << endl;

	double temp;
	cout << "화씨 온도: ";
	cin >> temp;
	cout << "섭씨 온도: " << (5.0 / 9.0) * (temp - 32) << endl;

}