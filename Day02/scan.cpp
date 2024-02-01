//printf() - 출력
//scanf() - 입력
#include<stdio.h>

int main() {
	
	int a;
	printf("숫자 입력: ");
	scanf("%d", &a); // a에 유저가 입력값 담기
	printf("a의 값은 %d입니다.", a);
		
	return 0;
}