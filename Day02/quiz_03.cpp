#include<stdio.h>

int main() {

	int month;
	int date;
	char alpha;

	printf("당신의 생일 월 입력: ");
	scanf("%d", &month);
	getchar();
	printf("당신의 생일 일 입력: ");
	scanf("%d", &date);
	getchar();
	printf("당신의 생일은 %d월 %d일 이군요!\n", month, date);
	//엔터는 특수문자 취급하기 때문에 getchar를 써서 enter를 빼줘야 함.

	printf("알파벳 하나 입력: ");
	scanf("%c", &alpha);
	printf("%c%c%c\n", alpha, alpha, alpha);
	printf("%c %c\n", alpha, alpha);
	printf("%c%c%c\n", alpha, alpha, alpha);

	return 0;

}