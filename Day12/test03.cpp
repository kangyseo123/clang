#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
int main() {
	
	srand(time(NULL)); //시간을 종자값으로 설정

	int dice1, dice2;

	
		dice1 = rand() % 6 + 1; //1~6사이의 난수 발생
		dice2 = rand() % 6 + 1;	//1~6사이의 난수 발생
	
		cout <<"두 주사위의 합: "<< dice1 + dice2 << endl; //두 주사위의 합 출력
	

	return 0;
}