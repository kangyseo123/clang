// Operator [������]

// ��� ������
// ���� ������
// �� ������
// �� ������
// ���� ������


# include<stdio.h>

int main() {

	/*int a = 1;
	a++;
	a++;
	printf("a: %d\n", a);
	a--;
	printf("a: %d\n", a);

	int b = 0;
	// ++b: ���� ������
	// b++: ���� ������
	printf("b: %d\n", ++b); //1
	printf("b: %d\n", b++); //1
	printf("b: %d\n", ++b); //3 */

	// ���� ������
	// (����) ? �� �� : ���� ��

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

	//�޸� ������
	int a, b; // ,

	//sizeof ������
	// int - 4byte, float - 4byte, double - 8byte, char - 1byte
	// ��ǻ�� RAM - 16GB
	// int 4byte = 32bit = 2 ^ 32(0~+-2^31)
	// 8bit = 1byte
	// 1024byte = 1kb
	// 1024kb = 1mb
	// 1024mb = 1gb

	int m;
	printf("������ m: %d", sizeof(m));
	
	// type casting(�� ��ȯ)
	int n = 10;
	double k = (double)n;


	return 0;
}

