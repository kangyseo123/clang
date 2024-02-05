// Operator [연산자]

// 산술 연산자
// 대입 연산자
// 비교 연산자
// 논리 연산자
// 증감 연산자


# include<stdio.h>

int main() {

	/*int a = 1;
	a++;
	a++;
	printf("a: %d\n", a);
	a--;
	printf("a: %d\n", a);

	int b = 0;
	// ++b: 전위 연산자
	// b++: 후위 연산자
	printf("b: %d\n", ++b); //1
	printf("b: %d\n", b++); //1
	printf("b: %d\n", ++b); //3 */

	// 삼항 연산자
	// (조건) ? 참 값 : 거짓 값

	/*char alpha;
	scanf("%c", &alpha);
	getchar();
	printf("%d\n", 65 <= alpha && alpha <= 90 ? 1 : 0);*/

	//char alpha1;
	//int isCapital = (65 <= alpha1 && alpha1 <= 90);
	//int isLower = (97 <= alpha1 && alpha1 <= 122);
	//int isAlphabet = isCapital || isLower;
	//int result = isAlphabet ? 1 : 0;
	//scanf("%c", &alpha1);
	//getchar();
	//printf("%d", result);

	//콤마 연산자
	int a, b; // ,

	//sizeof 연산자
	// int - 4byte, float - 4byte, double - 8byte, char - 1byte
	// 컴퓨터 RAM - 16GB
	// int 4byte = 32bit = 2 ^ 32(0~+-2^31)
	// 8bit = 1byte
	// 1024byte = 1kb
	// 1024kb = 1mb
	// 1024mb = 1gb

	int m;
	printf("사이즈 m: %d", sizeof(m));
	
	// type casting(형 변환)
	int n = 10;
	double k = (double)n;


	return 0;
}

