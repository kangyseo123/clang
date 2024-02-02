#include<stdio.h>
#include<math.h>

int main() {

	int year;
	double a, b, c;
	double temp;
	double height, weight;

	scanf("%d", &year);
	printf("%d\n", 2024 - year);

	scanf("%lf %lf %lf", &a, &b, &c);
	printf("%.2f\n", (a + b + c) / 3);
	
	scanf("%lf", &temp);
	printf("%.2f\n", temp * 5.9 + 32);

	scanf("%lf %lf", &height, &weight);
	printf("%.2f\n", weight / (height * height));


	return 0;

}

