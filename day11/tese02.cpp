// ���İ� ������
// ��Ģ������
// x + y -> x�� y�� ���Ѵ�
// x - y -> x���� y�� ����
// x * y -> x�� y�� ���Ѵ�
// x / y -> x�� y�� ������
// x % y -> x�� y�� ���� ������
// char - short - int - float - double

#include<iostream>

using namespace std;

int main() {

	/*string name;
	cout << "�̸��� �Է��ϼ���: ";
	cin >> name;
	cout << name << "�� ȯ���մϴ�!" << endl;

	int age;
	cout << "���̸� �Է��ϼ���: ";
	cin >> age;
	cout << "���̴� " << age << "�� �Դϴ�." << endl;
	
	double height;
	cout << "�̸� �Է�: ";
	cin >> name;
	cout << "Ű �Է�: ";
	cin >> height;
	cout << "���� �Է�: ";
	cin >> age;

	cout << "�̸��� " << name << "�Դϴ�" << endl;
	cout << "Ű�� " << height <<"�Դϴ�" << endl;
	cout << "���̴� " << age << "�Դϴ�" << endl;*/
	
	int money;
	int price;
	cout << "���� ������ �ִ� ��: ";
	cin >> money;
	cout << "������ ����: ";
	cin >> price;
	cout << "�� �� �ִ� ������ ����: " << money / price << endl;
	cout << "���� ��: " << money % price << endl;

	double temp;
	cout << "ȭ�� �µ�: ";
	cin >> temp;
	cout << "���� �µ�: " << (5.0 / 9.0) * (temp - 32) << endl;

}