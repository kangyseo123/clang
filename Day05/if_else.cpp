#include<stdio.h>

int main() {
	//int num;
	//printf("���� �Է�:");
	//scanf("%d", &num);

	//if (num > 0) {
	//	printf("����Դϴ�.\n");
	//}
	//else if (num == 0) {
	//	printf("0�Դϴ�.\n");
	//}
	//else {
	//	printf("�����Դϴ�.\n");

	//}

	/*int kor, math, eng;
	
	scanf("%d %d %d", &kor, &math, &eng);

	int avg = (a + b + c) / 3;

	if (avg >= 90) {
		printf("A�Դϴ�.\n");
	}

	else if (avg >= 80) {
		printf("B�Դϴ�.\n");
	}
	
	else if (avg >= 70) {
		printf("C�Դϴ�.\n");
	}
	else {
		printf("Ż���Դϴ�.\n");
	}*/
	
	//int num;
	//printf("���� �Է�: ");
	//scanf("%d", &num);

	// ��ø if��(nested if��)

	//if (num > 0) {
	//	if (num == 10) {
	//		printf("10 �Դϴ�.");
	//	}
	//	else {
	//		printf("���� �����Դϴ�.");
	//	}
	//}

	int num;
	scanf("%d", &num);
	
	if (num > 0) {
		
		if (num % 2 == 1) {
			printf("���� Ȧ���Դϴ�.\n");
		}
		
		else {
			printf("���� ¦���Դϴ�.\n");
		}
	}

	else if (num < 0) {
		
		if (num % 2 == 1) {
			printf("���� Ȧ���Դϴ�.\n");
		}

		else {
			printf("���� ¦���Դϴ�.\n");
		}
	}
	
	else {
		printf("0�Դϴ�.\n");
	}
	
	return 0;
}
