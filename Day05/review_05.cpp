#include<stdio.h>

int main() {

	int num;
	int n;
	int num1;
	int a, b;

	printf("10000~99999 사이의 정수 입력: ");
	scanf("%d", &num);
	printf("%d\n", num % 1000 / 100);

	printf("정수 입력: ");
	scanf("%d", &n);
	printf("%d\n", 20 <= n && n <= 30 ? 1 : 0);

	scanf("%d", &num1);
	printf("%d\n", num1 % 2 == 1 ? 1 : 0);
	                      
	scanf("%d %d", &a, &b);
	printf("%d\n", a >= b ? a : b);
	
	return 0;
}