// ���� �޸� �Ҵ�
// ���α׷� ���� ���߿� �������� �޸𸮸� �Ҵ�޴� ���� �ǹ�
// ��ǻ�Ͱ� ������� ���� �޸� ������ �����ϴµ� �̰��� ��(heap)��� ��
// ���� �޸𸮴� ���� �Ҵ�޴� �޸�
// new�� delete
// ���� �޸𸮴� new��� �����ڸ� �̿��Ͽ� �Ҵ�ȴ�
// ������ = new �ڷ���;
// n = new T(Ÿ��);
// T Ÿ���� ���� �ϳ��� ������ �� �ִ� ������ �Ҵ��Ѵ�
// �����ͺ��� = new �ڷ���;
// int *p;
// p = new int; // ���� �޸� �Ҵ�
// p = new int[3]; // �迭 ���� �޸� �Ҵ�
// �迭 �̸��� �� �迭�� ���� �ּ��̴�
// �迭�� �̸��� �迭�� ��ü ����Ʈ ���� ��ȯ�ȴ�
// p = new int[3]{10,20,30};
// �Ҵ�Ǵ� �迭�� �ʱⰪ�� �����Ѵ�
// 1���� �迭�� ���� �迭
// ������ �� ũ�Ⱑ �����Ǿ� �޸��� ũ�⸦ ������ �� ����
// ���� �޸� �Ҵ�
// new�� ���ؼ� ���� �ð��� �޸𸮸� ����, �� ũ�⸦ ������ �� �ִ�
// ���� �޸𸮴� ����� ������ �ݵ�� �������Ѿ� �Ѵ�
// delete p;
// delete[] p;
// const ������
// const Ű����� ������ ���̳� �ڿ� ����� �� �ִ�


#include<iostream>
using namespace std;

class MyArray {
public:
	int size;
	int* data;
	MyArray(int size) {
		this->size = size;
		data = new int[size]; // ���� �Ҵ�
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