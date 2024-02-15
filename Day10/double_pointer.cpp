#include<stdio.h>

int main() {

	int x = 10;
	int* px;
	int** ppx;
	px = &x;
	ppx = &px;
	printf("%d", **ppx);

	int a = 10;
	int* pa = &a;
	int** ppa = &pa;
	printf("a의 값: %d\n", a);
	printf("a의 주소값: %d\n", &a);

	printf("pa의 값[a의 주소값]: %d\n", pa);
	printf("pa의 주소값: %d\n", &pa);

	printf("ppa의 값[pa의 주소값: %d\n", ppa);
	printf("ppa가 가리키는 값[a의 주소값]: %d\n", *ppa);
	printf("ppa의 더블포인터 값[a의 값]: %d\n", **ppa);

	return 0;
}