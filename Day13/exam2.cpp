#include<iostream>
#include<time.h>

using namespace std;
int main() {

	//srand(time(NULL));

	//int ans = rand() % 100;
	//int guess;
	//int tries = 0;

	//do {
	//	cout << "정답을 추측하여 보세요: ";
	//	cin >> guess;
	//	tries++;
	//	if (guess > ans)
	//		cout << "제시한 정수가 더 높습니다." << endl;
	//	else if (guess < ans)
	//		cout << "제시한 정수가 더 낮습니다." << endl;
	//
	//} while (guess != ans);

	//cout << "축하합니다 시도횟수 = " << tries << endl;
	
	//int a;
	//cout << "도형을 선택하세요(1, 2, 3): ";
	//cin >> a;
	//if (a == 1) {
	//	int row, col;
	//	cout << "가로: ";
	//	cin >> row;
	//	cout << "세로: ";
	//	cin >> col;
	//	cout << "면적: " << row * col << endl;
	//}

	//else if (a == 2) {
	//	int r;
	//	cout << "반지름: ";
	//	cin >> r;
	//	cout << "면적: " << r * r * 3.14 << endl;
	//}

	//else {
	//	int base, height;
	//	cout << "밑변: ";
	//	cin >> base;
	//	cout << "높이: ";
	//	cin >> height;
	//	cout << "면적: " << base * height / 2 << endl;
	//}

	//int i, ans;
	//cout << "산수 문제를 자동으로 출제합니다" << endl;
	//srand(time(NULL));
	//while (true) {
	//	
	//	int x = rand() % 100;
	//	int y = rand() % 100;
	//	cout << x << " + " << y << " = ";
	//	cin >> ans;
	//	
	//	if (x + y == ans) {
	//		cout << "정답입니다." << endl;
	//		break;
	//	}

	//	else
	//		cout << "오답입니다." << endl;
	//}

	//const int STUDENTS = 10;
	//int scores[STUDENTS];
	//int sum = 0;

	//for (int i = 0; i < 10; i++) {
	//	cin >> scores[i];
	//	sum += scores[i];
	//}
	//
	//cout << "학생들의 점수 평균: " << sum / STUDENTS << endl;

	//int list[10];
	//int max;
	//
	//for (int& elem : list)
	//{
	//	elem = rand() % 100 + 1; // 배열에 저장
	//	cout << elem << " ";

	//}
	//cout << endl;
	//max = list[0];
	//for (auto& elem : list) {
	//	if (elem > max)
	//		max = elem;

	//}

	//cout << "최대값 = " << max << endl;

	//const int SIZE = 10;
	//int list[SIZE];
	//int max, person;
	//
	//for (int& elem : list)
	//{
	//	cout << "아침에 먹는 사과의 개수: ";
	//	cin >> elem;
	//}
	//cout << endl;
	//max = list[0];
	//person = 0;
	//for (int i = 1; i < SIZE; i++) {
	//	if (list[i] > max) {
	//		max = list[i];
	//		person = i;
	//	}
	//}

	//cout << "가장 많이 사과를 먹은 사람 번호: " << person +1 << endl;

	// 지뢰찾기
	//bool board[10][10] = { 0 };
	//srand(time(NULL));

	//for (int i = 0; i < 10; i++) {
	//	for (int j = 0; j < 10; j++) {
	//		if ((rand() % 100) < 30)
	//			board[i][j] = true;
	//	}
	//}

	//for (int i = 0; i < 10; i++) {
	//	for (int j = 0; j < 10; j++) {
	//		if (board[i][j]) {
	//			cout << "# ";
	//		}
	//		else {
	//			cout << ", ";
	//		}
	//	}
	//	cout << endl;
	//}

	return 0;
}