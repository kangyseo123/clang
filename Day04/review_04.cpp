#include<stdio.h>

int main() {

	char alpha1, alpha2;

	printf("대문자 입력: ");
	scanf("%c", &alpha1);
	getchar();
	printf("대문자 %c는 소문자 %c입니다.\n", alpha1, alpha1 + 32);
	
	printf("소문자 입력: ");
	scanf("%c", &alpha2);
	getchar();	
	printf("소문자 %c는 대문자 %c입니다.\n", alpha2, alpha2 - 32);
	
	
	return 0;

}