// 제어 구조
// 1. 순차 구조
// 2. 선택 구조
// 3. 반복 구조

// 선택 구조
// if~else
// 주어진 조건이 참이냐 거짓이냐에 따라서 서로 다른 문자를 실행한다

// 중첩 if~else
// 조건이 여러개로 조건을 검사해야 하는 경우

// switch문
// 여러 개의 가능한 실행 경로 중에서 하나를 선택하는데 사용한다
// switch 안에 들어 있는 수식을 계산하여 case 절과 비교한다
// case 절과 같은 값이 있으면 실행 후 break문을 만나면 실행을 종료한다.

// 반복 구조

// while 루프
// 반복 구조 같은 처리 과정을 여러 번 되풀이 하는 구조
// while 루프의 조건이 만족되면 반복을 계속하는 구조

// do~while 루프
// do{
//	문장;
//	문장;
//} while(조건식);

#include<iostream>

using namespace std;
int main() {
	
	//bool b; // true, false

	//b = (1 == 2);
	//
	//cout << boolalpha << b << endl; 
	//	
	//
	//int x = 100;

	//if (x == 100)
	//	cout << "x가 100입니다" << endl;
	//else
	//	cout << "x가 100이 아닙니다" << endl;

	//return 0;

	int n = 10;
	
	while (n > 0) {
		cout << n << " ";
		n--;
	}
	
}