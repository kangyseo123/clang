#include<stdio.h>

int main() {
	int a = 1;

	// &(�ּ� ������): ������ �ּڰ��� �˷���
	// *(������[���� ����] ������): �ּҰ��� �ָ� �ּҿ� ��� ���� ����
	//int* pa;
	//pa = &a;
	//printf("%d\n", *pa);
	//*pa = 7;
	//printf("%d\n", a);
	//return 0;

	int m = 20;
	printf("m�� ���� %d\n", m);
	int* pm;
	pm = &m;
	printf("pm�� ����Ű�� �ּҰ�: %d\n", pm);
	printf("pm�� ī��Ű�� ������ ��: %d\n", *pm);


}