#include<stdio.h>

int main() {

	char coffee[3][20];
	for (int i = 0; i < 3; i++) {
		printf("%d��° �޴� �Է�: ",i+1);
		scanf("%s", coffee[i]);
	}

	for (int i = 0; i < 3; i++) {
		printf("%d��° �޴��� %s\n", i, coffee[i]);
	}

	return 0;
}