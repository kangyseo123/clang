// 변수와 자료형
// 변수: 데이터(값)를 저장하는 상자
// 자료형 변수명;

// 선언과 동시에 초기화
// ex : int i = 100;

// 보편적 초기화
// ex: int i{100}; -> int i = 100;
// string s{"hello}; -> string s = "hello";

// 자료형
// 데이터의 종류(data type) 
// 정수형, 부동소수점형, 문자형, 부울형

// 기호 상수
// ex: const double TAX_RATE = 0.25 

// auto 키워드: 타입 자동 추론
// ex: auto d= 10.0; -> d는 실수 형태의 데이터 변수로 자동 추론

// 반환형 함수명(매개변수..)
// -> auto add(int x, int y) {
//	return x+y;
//	}
// int main() {
//	auto sum = add(5, 6); -> 넘겨받는 값에 따라서 자료형 자동 추론
//	cout << "결과 값은 : " << sum << endl; 
//	}

// 출력과 입력
// C++에서의 입력은 cin 객체가, 출력은 cout 객체가 담당함
// iostream 라이브러리에 포함되어 있음
// 출력: cout<<n; 입력: cin>>n;
// int i;
// cin >> i; // 정수를 읽어서 i 변수에 저장
// double f;
// cin >> f; // 실수를 읽어서 f 변수에 저장
// string s;
// cin >> s;


#include<iostream>
#include<string>



using namespace std;

auto add(int x, int y) {
	return x+y;
}

int main() {
	
	//부울형
	bool b;
	b = true;

	//문자형
	char ch;
	ch = 'a';

	//문자열
	string s1 = "Good";
	string s2 = "Afternoon";
	string s3 = s1 + " "+ s2 + "!";
	string s4 = "사과";
	string s5 = s4 + to_string(10) + "개"; // to_string 헤더파일 #include<string>

	
	b = (s1 == s2);

	cout << "bool형: " << b << endl;
	cout << "문자형: " << ch << endl;
	cout << "문자열: " << s3 << endl;
	cout << "문자열 연결: " << s5 << endl;
	
	auto sum = add(5, 6);
	
	cout << "결과 값은 : " << sum << endl; 

	return 0;

}