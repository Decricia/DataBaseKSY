#include <stdio.h>
//�Լ�

//returntype �Լ���(�Ű�����){
		//��ɾ�
//}

int add(int a, int b) {
	int temp;
	temp = a + b;
	return temp;
}

void Swap(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void PSwap(int *pa, int *pb) {
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main() {

	int a = 20;
	int b = 30;
	
	int ret = add(a, b);

	printf("%d + %d = %d\n", a, b, ret);

	Swap(a, b);

	printf("a = %d, b = %d\n", a, b);

	PSwap(&a, &b);

	printf("a = %d, b = %d\n", a, b);

	return 0;
}