#include<stdio.h>

int main() {
	
	int n;
	int m;

	printf("정사각형의 한 변의 길이 입력: ");
	scanf("%d", &n);
	printf("%d의 길이 정사각형의 넓이는 %d이고, 둘레는 %d이다.\n", n, n * n, 4 * n);
	
	printf("원의 반지름 길이 입력: ");
	scanf("%d", &m);
	printf("%d의 반지름 원의 넓이는 %.2lf이고, 둘레는 %.2lf이다.", m, 3.14 * m * m, 2 * 3.14 * m);

	return 0;
}