#include<stdio.h>

int main() {

	int num, time;
	scanf("%d", &num);
	printf("%d만%d천%d백%d십%d\n", num / 10000, (num % 10000) / 1000, (num % 1000) / 100, (num % 100) / 10, num % 10);

	scanf("%d", &time);
	printf("%d시간 %d분 %d초\n", time/3600, (time%3600) / 60, time % 60);
	return 0;
	
	
}