// ���α׷� ������ �Ʒ��� ����
// ���(control statement)
// 1. ���ǹ� [� ���ǿ� ���ؼ� �ڵ� ����]
// - if, switch
// 2. �ݺ��� [���� �� �ڵ� ����]
// - for, while

#include <stdio.h>

int main() {

	// ���ǹ� - if�� / if-else��
	int num;
	printf("���� �Է�: ");
	scanf("%d", &num);

	// if ����
	if (num > 0 && num % 2 == 0) {
		printf("���� ¦���Դϴ�.\n");
	}
	else {
		printf("�����Դϴ�.\n");
	}

	printf("���α׷� ��");


	return 0;
}
