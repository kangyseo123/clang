#include<stdio.h>

int main() {
	
	int age;
	double height;
	int id;
	
	printf("����� ���� �Է�: ");
	scanf("%d", &age);
	printf("����� Ű �Է�: ");
	scanf("%lf", &height);
	printf("����� �й� �Է�: ");
	scanf("%d", &id);
	printf("����� ���̴� %d�̰�, ����� Ű�� %.2lf�̰�, �й��� %d�̱���\n", age, height, id);
	
	
	return 0;

}