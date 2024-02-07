// 제어문 (control_statement) [코드를 컨트톨함]
// 1. 조건문(if, switch) [조건에 의한 코드 실행]
// 2. 반복문(for,while) [코드를 n번 실행]

#include<stdio.h>

int main() {

	//int n;
	//int sum = 0;

	//scanf("%d", &n);

	//for (int i = 1; i <= n; i++) {
	//	sum = sum + i;
	//}
	//
	//printf("%d ", sum);

	//return 0;

	//int num;

	//scanf("%d", &num);
	//
	//for (int i = 1; i <= 9; i++) {
	//	printf("%d * %d = %d\n", num, i, num * i);
	//}

	//
	//for (int i = 65; i <= 90; i++) {
	//	printf("%c %c ", i, i+32);
	//}

	//for (int i = 0; i < 10; i++) {
	//	if (i == 7) {
	//		// break; // for문 탈출
	//		continue; // for문 점프
	//	}
	//	printf("%d", i);

	//}

	//for (int i = 65; i <= 90; i++) {
	//	if (76 <= i && i<=78) {
	//		continue;
	//	}
	//	printf("%c ", i);
	//}

	//for (int i = 0; i < 3; i++) {
	//	for (int j = 0; j < 5; j++) {
	//		printf("i: %d; j: %d\n", i, j);
	//	}
	//}

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}
}

	