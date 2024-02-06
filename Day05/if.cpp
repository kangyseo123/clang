// 프로그램 위에서 아래로 실행
// 제어문(control statement)
// 1. 조건문 [어떤 조건에 의해서 코드 실행]
// - if, switch
// 2. 반복문 [여러 번 코드 실행]
// - for, while

#include <stdio.h>

int main() {

	// 조건문 - if문 / if-else문
	int num;
	printf("정수 입력: ");
	scanf("%d", &num);

	// if 조건
	if (num > 0 && num % 2 == 0) {
		printf("양의 짝수입니다.\n");
	}
	else {
		printf("정수입니다.\n");
	}

	printf("프로그램 끝");


	return 0;
}
