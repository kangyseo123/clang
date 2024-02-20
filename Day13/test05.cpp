// for 루프
// 정해져 있는 일정한 횟수만큼 반복할 때 유용하게 사용하는 반복문

// 기타 제어문
// continue문
// 현재 수행하고 있는 반복 과정의 나머지를 건너뛰고 다음 반복 과정을 강제적으로 시작하게 만듬
// break문
// switch, while에서 break를 만나면 반복문 탈출

// 범위 기반 for 루프
// for(변수 : 범위){
//	문장;
// }

// 함수와 문자열
// 함수 정의
// 반환형 함수이름(매개변수){
// }

#include<iostream>

#define WIDTH 9
#define HEIGHT 3

// 제곱근을 구하는 함수

int square(int n) {
	return n * n;
}

using namespace std;
int main() {
	
	//int sum = 0;

	//for (int i = 1; i <= 10; i++)
	//	sum += i;

	//cout << sum << endl;
	

	//int fact = 1;
	//int n;

	//cin >> n;

	//for (int i = 1; i <= n; i++)
	//	fact *= i;

	//cout << fact << endl;


	//int i = 0;
	//do {
	//	
	//	i++;
	//	cout << "continue문장 전에 있는 문장" << endl;
	//	continue;
	//	cout << "continue문장 후에 있는 문장" << endl;
	//} while (i < 3);

	//int list[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	//for (int i : list) {
	//	cout << i << " ";
	//}

	//int table[HEIGHT][WIDTH];
	//int r, c;

	//for (r = 0; r < HEIGHT; r++) {
	//	for (c = 0; c < WIDTH; c++) {
	//		table[r][c] = (r + 1) * (c + 1);
	//	}
	//}

	//for (r = 0; r < HEIGHT; r++) {
	//	for (c = 0; c < WIDTH; c++) {
	//		cout << r + 1 << " * " << c + 1 << " = " << table[r][c] << endl;
	//	}
	//}

	int n;
	cout << "제곱할 정수를 입력하세요: ";
	cin >> n;
	cout << square(n) << endl;

	return 0;
}