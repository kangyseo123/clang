#include<iostream>
#include<string>

using namespace std;
int main() {

	//int x;
	//int y;
	//cout << "x���� �Է��ϼ���: ";
	//cin >> x;
	//cout << "y���� �Է��ϼ���: ";
	//cin >> y;

	//if (x >= y)
	//	cout << "x�� y���� Ů�ϴ�" << endl;
	//else
	//	cout << "y�� x���� Ů�ϴ�" << endl;
	
	//int x;
	//cout << "x���� �Է��ϼ���: ";
	//cin >> x;

	//if (x > 0)
	//	cout << "x�� ����Դϴ�." << endl;
	//else if (x < 0)
	//	cout << "x�� �����Դϴ�." << endl;
	//else
	//	cout << "x�� 0�Դϴ�." << endl;
		
	//int age;
	//cout << "���̸� �Է��ϼ���: ";
	//cin >> age;

	//if (age <= 12)
	//	cout << "����Դϴ�." << endl;
	//else if (age <= 19)
	//	cout << "û�ҳ��Դϴ�." << endl;
	//else
	//	cout << "��Դϴ�." << endl;

	//char code;
	//char secret_code = 'h';
	//cout << "�ڵ带 �Է��ϼ���: ";
	//cin >> code;

	//if (code < secret_code)
	//	cout << "�ڵ尡 �տ� �ֽ��ϴ�." << endl;
	//else if (code > secret_code)
	//	cout << "�ڵ尡 �ڿ� �ֽ��ϴ�." << endl;
	//else
	//	cout << "�����Դϴ�." << endl;

	//int a, b, c;
	//
	//cout << "�� ���� ������ �Է��ϼ���: " << endl;
	//cin >> a >> b >> c;

	//if (a > b && a > c)
	//	cout << "���� ū ���� a�Դϴ�." << endl;
	//else if (b > a && b > c)
	//	cout << "b�� ���� Ů�ϴ�." << endl;
	//else
	//	cout << "c�� ���� Ů�ϴ�." << endl;

	//int number;
	//
	//cout << "���ڸ� �Է��ϼ���: ";
	//cin >> number;
	//switch (number) {
	//case 0:
	//	cout << "zero" << endl;
	//	break;
	//case 1:
	//	cout << "one" << endl;
	//	break;
	//case 2:
	//	cout << "two" << endl;
	//	break;
	//default:
	//	cout << "many" << endl;
	//	break;
	//}

	//int vowel = 0, consonant = 0;
	//char ch;
	//cout << "�����ڸ� �Է��ϰ� ��Ʈ�� z�� �Է��ϼ���" << endl;
	//while (cin >> ch) {
	//	switch (ch) {
	//	case 'a': case 'e': case 'i': case 'o': case 'u':
	//		vowel++;
	//		break;
	//	default:
	//		consonant++;
	//		break;
	//	}
	//}
	//cout << "������ ����: " << consonant << endl;
	//cout << "������ ����: " << vowel << endl;

	//int fruit;
	//cin >> fruit;
	//switch (fruit) {
	//case 1: 
	//	cout << "���";
	//	break;
	//case 2: 
	//	cout << "��";
	//	break;
	//case 5:
	//	cout << "�ٳ���";
	//	break;
	//default:
	//	cout << "�����Դϴ�";
	//	break;
	//}

	//int num;
	//cin >> num;
	//int i = 1;
	//while (i<=9) {
	//	cout << num << " * " << i << " = " << num * i << endl;
	//	i++;
	//}

	string str;

	do {
		cout << "���ڿ��� �Է��ϼ���: ";
		getline(cin, str);
		cout << "������� �Է���: " << str << endl;
			
	} while (str != "����");
	
	return 0;
}