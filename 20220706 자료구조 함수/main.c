#include <stdio.h>
//함수

//returntype 함수명(매개변수){
		//명령어
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