#include<stdio.h>

int main() {

	int temp;
	int n, m;
	int num1, num2, num3, num4, num5;
	int sum = 0;
	int a, b;

	scanf("%d", &temp);

	if (temp < 0) {
		printf("�߿�Ƿ� �ǳ�Ȱ�� ����\n");
	}

	else if (temp <= 40) {
		printf("����Ƿ� �ǿ�Ȱ�� ����\n");
	}
	
	else {
		printf("�ǳ�Ȱ�� ����\n");
	}

	scanf("%d %d", &n, &m);

	if (m * m == n) {
		printf("%d*%d=%d\n", m, m, n);
	}

	else if (n * n == m) {
		printf("%d*%d=%d\n", n, n, m);
	}

	else {
		printf("none\n");
	}

	scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

	if (num1 > 0) {
		sum = sum + num1;
	}

	if (num2 > 0) {
		sum = sum + num2;
	}

	if (num3 > 0) {
		sum = sum + num3;
	}

	if (num4 > 0) {
		sum = sum + num4;
	}

	if (num5 > 0) {
		sum = sum + num5;
	}

	printf("%d\n", sum);

	scanf("%d %d", &a, &b);
	
	if (a >= b) {
		printf("%d", a);
	}
	else {
		printf("%d", b);
	}

	return 0;
}