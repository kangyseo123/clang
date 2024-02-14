#include<stdio.h>

int main() {
	int a = 1;

	// &(주소 연산자): 변수의 주솟값을 알려줌
	// *(포인터[간접 참조] 연산자): 주소값을 주면 주소에 담긴 값을 읽음
	//int* pa;
	//pa = &a;
	//printf("%d\n", *pa);
	//*pa = 7;
	//printf("%d\n", a);
	//return 0;

	int m = 20;
	printf("m의 값은 %d\n", m);
	int* pm;
	pm = &m;
	printf("pm이 가리키는 주소값: %d\n", pm);
	printf("pm이 카리키는 포인터 값: %d\n", *pm);


}