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
	printf("a�� ��: %d\n", a);
	printf("a�� �ּҰ�: %d\n", &a);

	printf("pa�� ��[a�� �ּҰ�]: %d\n", pa);
	printf("pa�� �ּҰ�: %d\n", &pa);

	printf("ppa�� ��[pa�� �ּҰ�: %d\n", ppa);
	printf("ppa�� ����Ű�� ��[a�� �ּҰ�]: %d\n", *ppa);
	printf("ppa�� ���������� ��[a�� ��]: %d\n", **ppa);

	return 0;
}