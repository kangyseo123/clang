#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
int main() {
	
	srand(time(NULL)); //�ð��� ���ڰ����� ����

	int dice1, dice2;

	
		dice1 = rand() % 6 + 1; //1~6������ ���� �߻�
		dice2 = rand() % 6 + 1;	//1~6������ ���� �߻�
	
		cout <<"�� �ֻ����� ��: "<< dice1 + dice2 << endl; //�� �ֻ����� �� ���
	

	return 0;
}