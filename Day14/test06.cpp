// 함수 호출 시 인수 전달 방법
// 함수의 인수 전달 방법 2가지
// 값으로 호출하기 (call-by-value)
// 함수 호출 시 인수의 값 매개변수로 복사되는 방법
// 참조로 호출하기 (call-by-reference)
// 원본 인수가 함수에 전달되는 방법

// 중복 함수
// C++에서는 같은 이름의 함수를 여러 개 정의할 수 있다

// 디폴트 인수
// 매개변수의 초기값을 설정하는 것

// 디폴트 인수 사용 시 주의점
// 어떤 함수라도 디폴트 인수를 가질 수 있지만 디폴트 인수는 반드시 마지막 인수여야 한다 (디폴트 인수 부여 시 방향은 오른쪽에서 왼쪽으로 부여)
// void display(char c, int n = 10)

// 인라인 함수 (inline)
// 함수 호출 시 약간의 오버헤드가 발생한다
// 함수 호출 전에는 레지스터(CPU안의 저장공간)가 저장되어야 하고 인수들이 복사되어야 한다
// 함수 호출 후에는 레지스터들이 다시 복구 되는데, 함수의 크기가 작을 경우 함수 호출을 하는 준비 시간이 더 걸릴 수 있다
// 함수 호출을 하지 않고 코드를 복사하여 넣어주는 편이 효율적일 때 사용한다

// 해밍 거리 구하기
// 2개의 문자열을 받아서 동일한 위치에 틀린 글자가 몇 개나 있는지 계산하는 프로그램 작성

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

	int tmp; // 임시 변수

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
	cout <<"정수 출력: " << n << endl;
}

void print(double d) {
	cout <<"실수 출력: " << d << endl;
}

void print(char c) {
	cout << "문자 출력: " << c << endl;
}

// 문자 c를 n번 반복하여 화면에 출력
void display(char c = '*', int n = 10) {

	for (int i = 0; i < n; i++) {
		cout << c;
	}
	cout << endl;
}



int main() {

	//int a = 2, b = 3;
	//max(a, b); // 최대값 출력
	//modify(a, b); // 값의 변화
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

	//string s; // string 객체 s 생성
	//string s1 = "Hello"; // string 객체 s1 생성 후 초기화
	// // 보편적 초기화 string s{ "Hello!" };
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
	//	cout << "동일한 문자열입니다" << endl;
	//else
	//	cout << "동일한 문자열이 아닙니다" << endl;

	//if (s1 > s2)
	//	cout << "s1이 뒤에 있습니다" << endl;
	//else
	//	cout << "s2가 뒤에 있습니다" << endl;

	// string 클래스를 이용한 입출력
	
	//string s1, name, addr;

	//cout << "이름을 입력하세요: ";
	////cin >> name;
	////cin.ignore();
	//getline(cin, name);

	//cout << "주소를 입력하세요: ";
	//getline(cin, addr);

	//cout << addr << "의 " << name << " 안녕하세요" << endl;

	//s1 = "Hello World!";
	//cout << "s1 문자열의 크기는: " << s1.size() << endl;

	string str1, str2;
	int count = 0;
	cout << "문자열1 입력: ";
	cin >> str1;
	cout << "문자열2 입력: ";
	cin >> str2;
	//입력받은 두 문자열의 길이가 동일한지 체크
	if (str1.length() != str2.length()) {
		cout << "오류: 문자열의 길이가 다름" << endl;
	}
	else {
		for (int i = 0; i < str1.length(); i++) {
			if (str1[i] != str2[i])
				count += 1; // 해밍거리 카운트
		}
		cout << "해밍 거리는 " << count << endl;
	}
	
    return 0;
}
