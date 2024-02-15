#include<stdio.h>

int main() {


	int a;
	int* pa;
	pa = &a;
	*pa = 100;
	printf("%d\n", *pa);

	int b = 3;
	int c = 5;
	int temp;

	int* p;

	p = &b;
	temp = *p;
	p = &c;
	b = *p;
	p = &temp;
	c = *p;

	printf("%d %d\n", b, c);

	int arr[5] = {};

	int* parr;
	parr = arr;

	for (int i = 0; i < 5; i++) {
		parr = &arr[i];
		*parr = i * 3 + 3;
	}

	for (int i = 0; i < 5; i++) {
		printf("%d", arr[i]);
	}
	return 0;

}