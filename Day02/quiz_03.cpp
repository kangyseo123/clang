#include<stdio.h>

int main() {

	int month;
	int date;
	char alpha;

	printf("����� ���� �� �Է�: ");
	scanf("%d", &month);
	getchar();
	printf("����� ���� �� �Է�: ");
	scanf("%d", &date);
	getchar();
	printf("����� ������ %d�� %d�� �̱���!\n", month, date);
	//���ʹ� Ư������ ����ϱ� ������ getchar�� �Ἥ enter�� ����� ��.

	printf("���ĺ� �ϳ� �Է�: ");
	scanf("%c", &alpha);
	printf("%c%c%c\n", alpha, alpha, alpha);
	printf("%c %c\n", alpha, alpha);
	printf("%c%c%c\n", alpha, alpha, alpha);

	return 0;

}