// 동적 메모리 할당
// 프로그램 실행 도중에 동적으로 메모리를 할당받는 것을 의미
// 컴퓨터가 사용하지 않은 메모리 공간을 관리하는데 이것을 힙(heap)라고 함
// 동적 메모리는 힙에 할당받는 메모리
// new와 delete
// 동적 메모리는 new라는 연산자를 이용하여 할당된다
// 포인터 = new 자료형;
// n = new T(타입);
// T 타입의 변수 하나를 저장할 수 있는 공간을 할당한다
// 포인터변수 = new 자료형;
// int *p;
// p = new int; // 동적 메모리 할당
// p = new int[3]; // 배열 동적 메모리 할당
// 배열 이름은 그 배열의 시작 주소이다
// 배열의 이름은 배열의 전체 바이트 수가 반환된다
// p = new int[3]{10,20,30};
// 할당되는 배열의 초기값을 지정한다
// 1차원 배열은 정적 배열
// 컴파일 시 크기가 결정되어 메모리의 크기를 변경할 수 없다
// 동적 메모리 할당
// new에 의해서 실행 시간에 메모리를 생성, 그 크기를 변경할 수 있다
// 동적 메모리는 사용이 끝나면 반드시 해제시켜야 한다
// delete p;
// delete[] p;
// const 포인터
// const 키워드는 포인터 앞이나 뒤에 사용할 수 있다


#include<iostream>
using namespace std;

class MyArray {
public:
	int size;
	int* data;
	MyArray(int size) {
		this->size = size;
		data = new int[size]; // 동적 할당
	}
	~MyArray() {
		if (data != NULL)
			delete[] this->data;
	}
};
int main() {
	MyArray buffer(10);
	buffer.data[0] = 1; {
		MyArray clone = buffer;
	}

	return 0;
}