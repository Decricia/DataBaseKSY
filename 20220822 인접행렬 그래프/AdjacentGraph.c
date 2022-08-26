#include <stdio.h>
#include <stdlib.h>

typedef struct Graph {
	int Vertex;
	int** Matrix;
}Graph;

// �������� ������ �迭 ����
int** MakeMatrix(int column, int row) {
	int** pparray = (int**)malloc(sizeof(int*) * column);

	for (int i = 0; i < column; i++) {
		pparray[i] = (int*)malloc(sizeof(int) * row);
	}


	for (int i = 0; i < column; i++) {
		for (int j = 0; j < row; j++) {
			pparray[i][j] = 0;
		}
	}

	return pparray;
}

// ���� ������ �迭�� ��ȯó��
void FreeMatrix(int** parray, int column) {
	for (int i = 0; i < column; i++) {
		free(parray[i]);
	}

	free(parray);
}

// ������Ŀ� �������� �Է�
void AddEdge(int** parray, int column, int row) {
	parray[column- 1][row - 1] = 1;
	parray[row - 1][column - 1] = 1;
}

// ��������� �������� ���
void PrintMatrix(int** parray, int column, int row) {

	int i, j = 0;

	for (i = 0; i < column; i++)
	{
		printf("%d: ", i+1);
		for (j = 0; j < row; j++)
		{
			if (parray[i][j] )
			{
				printf("%d[0]", j+1);
			}
		}
		printf("\n");
	}
	
}


int main() {
	int** pMatrix;
	pMatrix = MakeMatrix(5,  5); // �����迭 5 x 5

	//��������
	
	AddEdge(pMatrix, 1, 2);
	AddEdge(pMatrix, 1, 3);
	AddEdge(pMatrix, 1, 4);

	AddEdge(pMatrix, 2, 1);
	AddEdge(pMatrix, 2, 3);
	AddEdge(pMatrix, 2, 5);

	AddEdge(pMatrix, 3, 1);
	AddEdge(pMatrix, 3, 2);

	AddEdge(pMatrix, 4, 1);
	AddEdge(pMatrix, 4, 5);

	AddEdge(pMatrix, 5, 1);
	AddEdge(pMatrix, 5, 2);
	AddEdge(pMatrix, 5, 4);



	//�������� ���
	PrintMatrix(pMatrix, 5, 5);
	FreeMatrix(pMatrix, 5, 5);


	return 0;
}