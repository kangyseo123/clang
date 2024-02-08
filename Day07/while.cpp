#include<stdio.h>

int main() {

	int n;
	int sum = 0;
	int i = 1;

	scanf("%d", &n);

	while (1) {
		
		if (i == n) {
			sum += i;
			break;
		}
		
		sum += i;
		i++;
	}
	
	printf("%d", sum);

	int num;
	int i = 1;

	scanf("%d", &num);

	while (i <= num) {
		
		if (num % i == 0) {
			printf("%d ", i);
		}
		
		i++;
	}

	int num1 = 1;
	int sum1 = 0;

	while (num1 != 0) {
		scanf("%d", &num1);
		sum1 += num1;
	}

	printf("%d", sum1);

	return 0;

}