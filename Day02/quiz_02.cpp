#include<stdio.h>

int main() {
	
	int age;
	double height;
	int id;
	
	printf("당신의 나이 입력: ");
	scanf("%d", &age);
	printf("당신의 키 입력: ");
	scanf("%lf", &height);
	printf("당신의 학번 입력: ");
	scanf("%d", &id);
	printf("당신의 나이는 %d이고, 당신의 키는 %.2lf이고, 학번은 %d이군요\n", age, height, id);
	
	
	return 0;

}