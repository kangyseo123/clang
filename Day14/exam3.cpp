#include<iostream>

using namespace std;

int sum(int a = 0, int b = 0, int c = 0, int d = 0) {
	return a + b + c + d;
}


int main() {
	
	//cout << "sum() = " << sum() << endl;
	//cout << "sum(10) = " << sum(10) << endl;
	//cout << "sum(10, 15) = " << sum(10, 15) << endl;
	//cout << "sum(10, 15, 25) = " << sum(10, 15, 25) << endl;
	//cout << "sum(10, 15, 25, 30) = " << sum(10, 15, 25, 30) << endl;
	
	//string s = "When in Rome, do as the Romans.";

	//int index = s.find("Rome");
	//cout << index << endl;	

	// string ��ü���� ���� �����ϱ�

	//string s;
	//
	//cout << "�ֹε�Ϲ�ȣ�� �Է��ϼ���: ";
	//cin >> s;
	//
	//cout << "-�� ���ŵ� �ֹε�Ϲ�ȣ: ";
	//for (auto& c : s) {
	//	if (c == '-')
	//		continue;
	//	cout << c;
	//}
	//cout << endl;

	char ch;
	string solution;
	string list[] = {
		"the",
		"C++",
		"program",
		"language",
	};

	int n = rand() % 4;
	solution = list[n];
	
	string guess(solution.length(), '_');
	
	while (1) {
		cout << guess << endl;
		cout << "���ڸ� �Է��ϼ���: ";
		cin >> ch;
		for (int i = 0; i < solution.length(); i++) {
			if (ch == solution[i]) {
				guess[i] = ch;
			}
		}
		
		if (solution == guess) {
			cout << solution << endl;
			cout << "�����Ͽ����ϴ�";
			break;
		}
	}
	
	return 0;
	
}