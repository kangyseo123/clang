#include<stdio.h>

int main() {

	int score[4][3] = { {50,80,90}, {60, 70, 70}, {70, 70, 80}, {90, 90, 100} };
	int sum = 0;
	
	for (int i = 0; i < 4; i++) {
		printf("%d��° �л� ", i+1);
		for (int j = 0; j < 3; j++) {
			if (j == 0) {
				printf("���� ����: %d ", score[i][j]);
			}
			if (j == 1) {
				printf("���� ����: %d ", score[i][j]);
				sum += score[i][j];
			}
			if (j == 2) {
				printf("���� ����: %d ", score[i][j]);
			}
		}
		printf("\n");

	}

	printf("���� ���: %d", sum / 4);

	return 0;
}