#include<stdio.h>

int main() {

	int a;
	printf("첫 번째 수 입력: ");
	scanf("%d", &a);
	int b;
	printf("두 번째 수 입력: ");
	scanf("%d", &b);

	printf("두 수의 합: %d\n", a + b); 
	printf("두 수의 차: %d\n", a - b);
	printf("두 수의 곱: %d\n", a * b);
	printf("두 수의 나눗셈: %d\n", a / b);
	printf("두 수의 나머지: %d\n", a % b); 
	
	return 0;
}