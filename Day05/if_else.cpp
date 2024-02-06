#include<stdio.h>

int main() {
	//int num;
	//printf("정수 입력:");
	//scanf("%d", &num);

	//if (num > 0) {
	//	printf("양수입니다.\n");
	//}
	//else if (num == 0) {
	//	printf("0입니다.\n");
	//}
	//else {
	//	printf("음수입니다.\n");

	//}

	/*int kor, math, eng;
	
	scanf("%d %d %d", &kor, &math, &eng);

	int avg = (a + b + c) / 3;

	if (avg >= 90) {
		printf("A입니다.\n");
	}

	else if (avg >= 80) {
		printf("B입니다.\n");
	}
	
	else if (avg >= 70) {
		printf("C입니다.\n");
	}
	else {
		printf("탈락입니다.\n");
	}*/
	
	//int num;
	//printf("정수 입력: ");
	//scanf("%d", &num);

	// 중첩 if문(nested if문)

	//if (num > 0) {
	//	if (num == 10) {
	//		printf("10 입니다.");
	//	}
	//	else {
	//		printf("양의 정수입니다.");
	//	}
	//}

	int num;
	scanf("%d", &num);
	
	if (num > 0) {
		
		if (num % 2 == 1) {
			printf("양의 홀수입니다.\n");
		}
		
		else {
			printf("양의 짝수입니다.\n");
		}
	}

	else if (num < 0) {
		
		if (num % 2 == 1) {
			printf("음의 홀수입니다.\n");
		}

		else {
			printf("음의 짝수입니다.\n");
		}
	}
	
	else {
		printf("0입니다.\n");
	}
	
	return 0;
}
