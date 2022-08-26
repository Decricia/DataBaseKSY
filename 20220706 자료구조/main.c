#include <stdio.h>
#include<stdlib.h>

int global = 100; // 외부 변수, 전역변수

int main() {
	int a = 10; // 로컬변수, 자동변수
	global = 200;

	// malloc. calloc, realloc

	int* pa = (int*)malloc(100); // 동적 메모리 공간 할당

	for (int i = 0; i < 25; i++) {

		pa[i] = i;
	}

	for (int i = 0; i < 25; i++) {

		printf("pa[%d] = %d\n", i, pa[i]);
	}

	free(pa); // 동적메모리 반납 처리 (리턴)

	return 0;
}