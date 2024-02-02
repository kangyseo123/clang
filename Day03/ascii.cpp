#include<stdio.h>
#include<ctype.h>

int main() {

	/*char alpha = 'a';
	printf("alpha: %c\n", alpha);
	printf("alpha: %d\n", alpha);*/

	//char alpha;
	//int a;

	//scanf("%c", &alpha);
	//printf("%c의 순서는 %d입니다.\n", alpha, alpha - 97);

	//scanf("%d", &a);
	//printf("%d번째 대문자는 %c입니다.\n", a, a + 65);

	char alpha1, alpha2;

	scanf("%c", &alpha1);
	getchar();
	printf("입력: %c -> 출력: %c\n", alpha1, alpha1 - 32);

	scanf("%c", &alpha2);
	getchar();
	printf("입력: %c -> 출력: %c\n", alpha2, alpha2 + 32);

	return 0;

}
