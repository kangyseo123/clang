#include<stdio.h>

int main() {
	
	int n;
	int m;

	printf("���簢���� �� ���� ���� �Է�: ");
	scanf("%d", &n);
	printf("%d�� ���� ���簢���� ���̴� %d�̰�, �ѷ��� %d�̴�.\n", n, n * n, 4 * n);
	
	printf("���� ������ ���� �Է�: ");
	scanf("%d", &m);
	printf("%d�� ������ ���� ���̴� %.2lf�̰�, �ѷ��� %.2lf�̴�.", m, 3.14 * m * m, 2 * 3.14 * m);

	return 0;
}