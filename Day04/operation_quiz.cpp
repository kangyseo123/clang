#include<stdio.h>

int main() {

	int num, time;
	scanf("%d", &num);
	printf("%d��%dõ%d��%d��%d\n", num / 10000, (num % 10000) / 1000, (num % 1000) / 100, (num % 100) / 10, num % 10);

	scanf("%d", &time);
	printf("%d�ð� %d�� %d��\n", time/3600, (time%3600) / 60, time % 60);
	return 0;
	
	
}