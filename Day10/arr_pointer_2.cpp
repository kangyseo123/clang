#include<stdio.h>

int main() {

	//int arr[5] = { 3,6,9,12,15 };
	//int* ptr;
	//ptr = arr;

	//printf("%d\n", arr);
	//printf("%d\n", &arr);
	//printf("%d\n", &arr[0]);

	//printf("%d\n", *ptr);
	//printf("%d\n", *ptr + 1);
	//printf("%d\n", *(ptr + 1));

	//for (int i = 0; i < 5; i++) {
	//	*(ptr + i) = i; // 0 1 2 3 4
	//}

	int matrix[2][3] = {
		{2,4,6},
		{8,10,12}
	};

	printf("%d\n", matrix);
	printf("%d\n", matrix[0]);
	printf("%d\n", matrix[1]);
	matrix[0]; // 첫 번째 행의 주솟값
	matrix[1]; // 두 번째 행의 주솟값

	//int* p;
	//p = &matrix[0][0];
	//for (int i = 0; i < 6; i++) {
	//	printf("%d ", *(p + i));
	//}

	int (*p1)[3]; // 3칸을 갖는 배열 포인터
	p1 = &matrix[0]; // 첫 번째 행을 지목시킴
	for (int i = 0; i < 3; i++) {
		printf("%d ", (*p1)[i]);
	}


	return 0;
	
}