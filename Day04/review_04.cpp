#include<stdio.h>

int main() {

	char alpha1, alpha2;

	printf("�빮�� �Է�: ");
	scanf("%c", &alpha1);
	getchar();
	printf("�빮�� %c�� �ҹ��� %c�Դϴ�.\n", alpha1, alpha1 + 32);
	
	printf("�ҹ��� �Է�: ");
	scanf("%c", &alpha2);
	getchar();	
	printf("�ҹ��� %c�� �빮�� %c�Դϴ�.\n", alpha2, alpha2 - 32);
	
	
	return 0;

}