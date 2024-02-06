#include<stdio.h>

int main() {
	//switch

	//int num;
	//printf("숫자 입력: ");
	//scanf("%d", &num);

	//switch (num) {
	//case 1:
	//	printf("아메리카노 주문\n");
	//	break;
	//case 2:
	//	printf("라떼 주문\n");
	//	break;
	//case 3:
	//	printf("바닐라 주문\n");
	//	break;
	//default:
	//	printf("해당 음료 없습니다.\n");
	//	break;
	//}

	//return 0;

	int month;
	printf("월 입력: ");
	scanf("%d", &month);

	switch (month) {
	case 1:
		printf("봄\n");
		break;
	case 2:
		printf("봄\n");
		break;
	case 3:
		printf("봄\n");
		break;
	case 4:
		printf("여름\n");
		break;
	case 5:
		printf("여름\n");
		break;
	case 6:
		printf("여름\n");
		break;
	case 7:
		printf("가을\n");
		break;
	case 8:
		printf("가을\n");
		break;
	case 9:
		printf("가을\n");
		break;
	case 10:
		printf("겨울\n");
		break;
	case 11:
		printf("겨울\n");
		break;
	case 12:
		printf("겨울\n");
		break;
	default:
		printf("숫자 입력 오류");
		break;

	}
}