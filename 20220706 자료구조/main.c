#include <stdio.h>
#include<stdlib.h>

int global = 100; // �ܺ� ����, ��������

int main() {
	int a = 10; // ���ú���, �ڵ�����
	global = 200;

	// malloc. calloc, realloc

	int* pa = (int*)malloc(100); // ���� �޸� ���� �Ҵ�

	for (int i = 0; i < 25; i++) {

		pa[i] = i;
	}

	for (int i = 0; i < 25; i++) {

		printf("pa[%d] = %d\n", i, pa[i]);
	}

	free(pa); // �����޸� �ݳ� ó�� (����)

	return 0;
}