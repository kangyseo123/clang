// for ����
// ������ �ִ� ������ Ƚ����ŭ �ݺ��� �� �����ϰ� ����ϴ� �ݺ���

// ��Ÿ ���
// continue��
// ���� �����ϰ� �ִ� �ݺ� ������ �������� �ǳʶٰ� ���� �ݺ� ������ ���������� �����ϰ� ����
// break��
// switch, while���� break�� ������ �ݺ��� Ż��

// ���� ��� for ����
// for(���� : ����){
//	����;
// }

// �Լ��� ���ڿ�
// �Լ� ����
// ��ȯ�� �Լ��̸�(�Ű�����){
// }

#include<iostream>

#define WIDTH 9
#define HEIGHT 3

// �������� ���ϴ� �Լ�

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
	//	cout << "continue���� ���� �ִ� ����" << endl;
	//	continue;
	//	cout << "continue���� �Ŀ� �ִ� ����" << endl;
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
	cout << "������ ������ �Է��ϼ���: ";
	cin >> n;
	cout << square(n) << endl;

	return 0;
}