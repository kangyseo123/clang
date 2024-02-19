#include<iostream>
#include<string>

using namespace std;
int main() {

	//int x;
	//int y;
	//cout << "x값을 입력하세요: ";
	//cin >> x;
	//cout << "y값을 입력하세요: ";
	//cin >> y;

	//if (x >= y)
	//	cout << "x가 y보다 큽니다" << endl;
	//else
	//	cout << "y가 x보다 큽니다" << endl;
	
	//int x;
	//cout << "x값을 입력하세요: ";
	//cin >> x;

	//if (x > 0)
	//	cout << "x는 양수입니다." << endl;
	//else if (x < 0)
	//	cout << "x는 음수입니다." << endl;
	//else
	//	cout << "x는 0입니다." << endl;
		
	//int age;
	//cout << "나이를 입력하세요: ";
	//cin >> age;

	//if (age <= 12)
	//	cout << "어린이입니다." << endl;
	//else if (age <= 19)
	//	cout << "청소년입니다." << endl;
	//else
	//	cout << "어른입니다." << endl;

	//char code;
	//char secret_code = 'h';
	//cout << "코드를 입력하세요: ";
	//cin >> code;

	//if (code < secret_code)
	//	cout << "코드가 앞에 있습니다." << endl;
	//else if (code > secret_code)
	//	cout << "코드가 뒤에 있습니다." << endl;
	//else
	//	cout << "정답입니다." << endl;

	//int a, b, c;
	//
	//cout << "세 개의 정수를 입력하세요: " << endl;
	//cin >> a >> b >> c;

	//if (a > b && a > c)
	//	cout << "가장 큰 수는 a입니다." << endl;
	//else if (b > a && b > c)
	//	cout << "b가 가장 큽니다." << endl;
	//else
	//	cout << "c가 가장 큽니다." << endl;

	//int number;
	//
	//cout << "숫자를 입력하세요: ";
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
	//cout << "영문자를 입력하고 컨트롤 z를 입력하세요" << endl;
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
	//cout << "자음의 개수: " << consonant << endl;
	//cout << "모음의 개수: " << vowel << endl;

	//int fruit;
	//cin >> fruit;
	//switch (fruit) {
	//case 1: 
	//	cout << "사과";
	//	break;
	//case 2: 
	//	cout << "배";
	//	break;
	//case 5:
	//	cout << "바나나";
	//	break;
	//default:
	//	cout << "과일입니다";
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
		cout << "문자열을 입력하세요: ";
		getline(cin, str);
		cout << "사용자의 입력은: " << str << endl;
			
	} while (str != "종료");
	
	return 0;
}