#include<stdio.h>

int main() {

	char coffee[3][20];
	for (int i = 0; i < 3; i++) {
		printf("%d번째 메뉴 입력: ",i+1);
		scanf("%s", coffee[i]);
	}

	for (int i = 0; i < 3; i++) {
		printf("%d번째 메뉴는 %s\n", i, coffee[i]);
	}

	return 0;
}