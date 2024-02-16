// ������ �ڷ���
// ����: ������(��)�� �����ϴ� ����
// �ڷ��� ������;

// ����� ���ÿ� �ʱ�ȭ
// ex : int i = 100;

// ������ �ʱ�ȭ
// ex: int i{100}; -> int i = 100;
// string s{"hello}; -> string s = "hello";

// �ڷ���
// �������� ����(data type) 
// ������, �ε��Ҽ�����, ������, �ο���

// ��ȣ ���
// ex: const double TAX_RATE = 0.25 

// auto Ű����: Ÿ�� �ڵ� �߷�
// ex: auto d= 10.0; -> d�� �Ǽ� ������ ������ ������ �ڵ� �߷�

// ��ȯ�� �Լ���(�Ű�����..)
// -> auto add(int x, int y) {
//	return x+y;
//	}
// int main() {
//	auto sum = add(5, 6); -> �Ѱܹ޴� ���� ���� �ڷ��� �ڵ� �߷�
//	cout << "��� ���� : " << sum << endl; 
//	}

// ��°� �Է�
// C++������ �Է��� cin ��ü��, ����� cout ��ü�� �����
// iostream ���̺귯���� ���ԵǾ� ����
// ���: cout<<n; �Է�: cin>>n;
// int i;
// cin >> i; // ������ �о i ������ ����
// double f;
// cin >> f; // �Ǽ��� �о f ������ ����
// string s;
// cin >> s;


#include<iostream>
#include<string>



using namespace std;

auto add(int x, int y) {
	return x+y;
}

int main() {
	
	//�ο���
	bool b;
	b = true;

	//������
	char ch;
	ch = 'a';

	//���ڿ�
	string s1 = "Good";
	string s2 = "Afternoon";
	string s3 = s1 + " "+ s2 + "!";
	string s4 = "���";
	string s5 = s4 + to_string(10) + "��"; // to_string ������� #include<string>

	
	b = (s1 == s2);

	cout << "bool��: " << b << endl;
	cout << "������: " << ch << endl;
	cout << "���ڿ�: " << s3 << endl;
	cout << "���ڿ� ����: " << s5 << endl;
	
	auto sum = add(5, 6);
	
	cout << "��� ���� : " << sum << endl; 

	return 0;

}