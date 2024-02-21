// �Լ� ȣ�� �� �μ� ���� ���
// �Լ��� �μ� ���� ��� 2����
// ������ ȣ���ϱ� (call-by-value)
// �Լ� ȣ�� �� �μ��� �� �Ű������� ����Ǵ� ���
// ������ ȣ���ϱ� (call-by-reference)
// ���� �μ��� �Լ��� ���޵Ǵ� ���

// �ߺ� �Լ�
// C++������ ���� �̸��� �Լ��� ���� �� ������ �� �ִ�

// ����Ʈ �μ�
// �Ű������� �ʱⰪ�� �����ϴ� ��

// ����Ʈ �μ� ��� �� ������
// � �Լ��� ����Ʈ �μ��� ���� �� ������ ����Ʈ �μ��� �ݵ�� ������ �μ����� �Ѵ� (����Ʈ �μ� �ο� �� ������ �����ʿ��� �������� �ο�)
// void display(char c, int n = 10)

// �ζ��� �Լ� (inline)
// �Լ� ȣ�� �� �ణ�� ������尡 �߻��Ѵ�
// �Լ� ȣ�� ������ ��������(CPU���� �������)�� ����Ǿ�� �ϰ� �μ����� ����Ǿ�� �Ѵ�
// �Լ� ȣ�� �Ŀ��� �������͵��� �ٽ� ���� �Ǵµ�, �Լ��� ũ�Ⱑ ���� ��� �Լ� ȣ���� �ϴ� �غ� �ð��� �� �ɸ� �� �ִ�
// �Լ� ȣ���� ���� �ʰ� �ڵ带 �����Ͽ� �־��ִ� ���� ȿ������ �� ����Ѵ�

// �ع� �Ÿ� ���ϱ�
// 2���� ���ڿ��� �޾Ƽ� ������ ��ġ�� Ʋ�� ���ڰ� �� ���� �ִ��� ����ϴ� ���α׷� �ۼ�

#include<iostream>
#include<string>

using namespace std;

void max(int x, int y) {

	if (x > y)
		cout << x << endl;
	else
		cout << y << endl;
}

void modify(int &x, int &y) {

	x = x + 2;
	y = y + 2;

	cout << x << " " << y << endl;
}

void swap(int& x, int& y) {

	int tmp; // �ӽ� ����

	tmp = x;
	x = y;
	y = tmp;
	
	cout << "x = " << x << " y = " << y << endl;

}

int square(int i) {
	return i * i;
}

double square(double i) {
	return i * i;
}

void print(int n) {
	cout <<"���� ���: " << n << endl;
}

void print(double d) {
	cout <<"�Ǽ� ���: " << d << endl;
}

void print(char c) {
	cout << "���� ���: " << c << endl;
}

// ���� c�� n�� �ݺ��Ͽ� ȭ�鿡 ���
void display(char c = '*', int n = 10) {

	for (int i = 0; i < n; i++) {
		cout << c;
	}
	cout << endl;
}



int main() {

	//int a = 2, b = 3;
	//max(a, b); // �ִ밪 ���
	//modify(a, b); // ���� ��ȭ
	//cout << a << " " << b << endl;
	
	//int a = 100, b = 200;
	//cout << "a = " << a << " b = " << b << endl;
	//swap(a, b);

	//cout << "a = " << a << " b = " << b << endl;

	//cout << square(10) << endl;
	//cout << square(3.14) << endl;

	//print(100);
	//print(3.14);
	//print('C');

	//display('@');
	//display('#', 5);
	//display();

	//string s; // string ��ü s ����
	//string s1 = "Hello"; // string ��ü s1 ���� �� �ʱ�ȭ
	// // ������ �ʱ�ȭ string s{ "Hello!" };
	//string s2 = "World!";
	//string s3 = s1 + s2;
	//string s4 = s1;
	//s += s4;
	//
	//cout << "s: " << s << " " << endl;
	//cout << "s1: " << s1 << " " << endl;
	//cout << "s2: " << s2 << " " << endl;
	//cout << "s3: " << s3 << " " << endl;
	//cout << "s4: " << s4 << " " << endl;

	//if (s1 == s2)
	//	cout << "������ ���ڿ��Դϴ�" << endl;
	//else
	//	cout << "������ ���ڿ��� �ƴմϴ�" << endl;

	//if (s1 > s2)
	//	cout << "s1�� �ڿ� �ֽ��ϴ�" << endl;
	//else
	//	cout << "s2�� �ڿ� �ֽ��ϴ�" << endl;

	// string Ŭ������ �̿��� �����
	
	//string s1, name, addr;

	//cout << "�̸��� �Է��ϼ���: ";
	////cin >> name;
	////cin.ignore();
	//getline(cin, name);

	//cout << "�ּҸ� �Է��ϼ���: ";
	//getline(cin, addr);

	//cout << addr << "�� " << name << " �ȳ��ϼ���" << endl;

	//s1 = "Hello World!";
	//cout << "s1 ���ڿ��� ũ���: " << s1.size() << endl;

	string str1, str2;
	int count = 0;
	cout << "���ڿ�1 �Է�: ";
	cin >> str1;
	cout << "���ڿ�2 �Է�: ";
	cin >> str2;
	//�Է¹��� �� ���ڿ��� ���̰� �������� üũ
	if (str1.length() != str2.length()) {
		cout << "����: ���ڿ��� ���̰� �ٸ�" << endl;
	}
	else {
		for (int i = 0; i < str1.length(); i++) {
			if (str1[i] != str2[i])
				count += 1; // �عְŸ� ī��Ʈ
		}
		cout << "�ع� �Ÿ��� " << count << endl;
	}
	
    return 0;
}
