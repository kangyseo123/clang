#include<stdio.h>

int main() {
	
	//for (int i = 1; i < 10; i++) {
	//	
	//	for (int j = 1; j < 10; j++) {
	//	
	//		printf("%d * %d = %d\n", i, j, i * j);
	//	
	//	}
	//}

	//int n;
	//
	//scanf("%d", &n);

	//for (int i = 1; i <= 100; i++) {
	//	if (i % n == 0) {
	//		printf("%d ", i);
	//	}
	//}
	
	//int num;

	//scanf("%d", &num);

	//for (int i = 0; i < num; i++) {
	//	for (int j = 0; j < num; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//

	int num1;

	scanf("%d", &num1);

	for (int i = 0; i < num1; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;

}