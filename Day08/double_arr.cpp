#include<stdio.h>

int main() {
	//int eng_score[3] = { 50, 60, 80 };
	//int math_score[3] = { 70, 60, 90 };
	//int eng_sum = 0, math_sum = 0;

	//int b[2][3] = { {1,2,3},{4,5,6} };
	//int score[2][3] = { {50, 60, 80}, {70, 60 ,90} };

	//for (int i = 0; i < 2; i++) {
	//	for (int j = 0; j < 3; j++) {
	//		printf("%d ", score[i][j]);
	//		if (i == 0)
	//			eng_sum += score[i][j];
	//		else
	//			math_sum += score[1][j];
	//	}
	//}
	//printf("\n");
	//printf("%d %d\n", eng_sum, math_sum);

	int score[3][4] = {
		{70, 80, 80, 80},
		{60, 70, 50, 40},
		{70, 50, 80, 60},
	};

	int sum = 0;
	
	for (int i = 0; i < 3; i++) {
		sum += score[i][3];
	}
	printf("Å½±¸ÀÇ Æò±ÕÀº %dÀÔ´Ï´Ù.\n", sum / 3);
}