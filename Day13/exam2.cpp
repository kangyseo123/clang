#include<iostream>
#include<time.h>

using namespace std;
int main() {

	//srand(time(NULL));

	//int ans = rand() % 100;
	//int guess;
	//int tries = 0;

	//do {
	//	cout << "������ �����Ͽ� ������: ";
	//	cin >> guess;
	//	tries++;
	//	if (guess > ans)
	//		cout << "������ ������ �� �����ϴ�." << endl;
	//	else if (guess < ans)
	//		cout << "������ ������ �� �����ϴ�." << endl;
	//
	//} while (guess != ans);

	//cout << "�����մϴ� �õ�Ƚ�� = " << tries << endl;
	
	//int a;
	//cout << "������ �����ϼ���(1, 2, 3): ";
	//cin >> a;
	//if (a == 1) {
	//	int row, col;
	//	cout << "����: ";
	//	cin >> row;
	//	cout << "����: ";
	//	cin >> col;
	//	cout << "����: " << row * col << endl;
	//}

	//else if (a == 2) {
	//	int r;
	//	cout << "������: ";
	//	cin >> r;
	//	cout << "����: " << r * r * 3.14 << endl;
	//}

	//else {
	//	int base, height;
	//	cout << "�غ�: ";
	//	cin >> base;
	//	cout << "����: ";
	//	cin >> height;
	//	cout << "����: " << base * height / 2 << endl;
	//}

	//int i, ans;
	//cout << "��� ������ �ڵ����� �����մϴ�" << endl;
	//srand(time(NULL));
	//while (true) {
	//	
	//	int x = rand() % 100;
	//	int y = rand() % 100;
	//	cout << x << " + " << y << " = ";
	//	cin >> ans;
	//	
	//	if (x + y == ans) {
	//		cout << "�����Դϴ�." << endl;
	//		break;
	//	}

	//	else
	//		cout << "�����Դϴ�." << endl;
	//}

	//const int STUDENTS = 10;
	//int scores[STUDENTS];
	//int sum = 0;

	//for (int i = 0; i < 10; i++) {
	//	cin >> scores[i];
	//	sum += scores[i];
	//}
	//
	//cout << "�л����� ���� ���: " << sum / STUDENTS << endl;

	//int list[10];
	//int max;
	//
	//for (int& elem : list)
	//{
	//	elem = rand() % 100 + 1; // �迭�� ����
	//	cout << elem << " ";

	//}
	//cout << endl;
	//max = list[0];
	//for (auto& elem : list) {
	//	if (elem > max)
	//		max = elem;

	//}

	//cout << "�ִ밪 = " << max << endl;

	//const int SIZE = 10;
	//int list[SIZE];
	//int max, person;
	//
	//for (int& elem : list)
	//{
	//	cout << "��ħ�� �Դ� ����� ����: ";
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

	//cout << "���� ���� ����� ���� ��� ��ȣ: " << person +1 << endl;

	// ����ã��
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