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

	// string 객체에서 문자 추출하기

	//string s;
	//
	//cout << "주민등록번호를 입력하세요: ";
	//cin >> s;
	//
	//cout << "-가 제거된 주민등록번호: ";
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
		cout << "글자를 입력하세요: ";
		cin >> ch;
		for (int i = 0; i < solution.length(); i++) {
			if (ch == solution[i]) {
				guess[i] = ch;
			}
		}
		
		if (solution == guess) {
			cout << solution << endl;
			cout << "성공하였습니다";
			break;
		}
	}
	
	return 0;
	
}