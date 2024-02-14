#include<stdio.h>

int main() {
	int a[5] = { 2, 4, 6, 8, 10 };
	int* pa;
	int* pa1;
	int* pa2;
	pa = a+4;
	pa1 = &a[1];
	pa2 = &a[2];
	
	printf("%d\n", a); // 배열의 변수 이름 주솟값
	printf("%d\n", &a);
	printf("%d\n", &a[0]);
	printf("%d\n", pa);
	
	printf("%d\n", pa);
	printf("%d\n", pa1);
	printf("%d\n", pa2);

	printf("%d\n", *pa);
	printf("%d\n", *pa1);
	printf("%d\n", *pa2);
}