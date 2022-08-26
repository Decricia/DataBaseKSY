#include"Score.h"
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

void BubbleSort(Score DataSet[], int Length)
{
	int i = 0;
	int j = 0;
	Score temp 	;

	for (int i = 0; i < Length - 1; i++) {
		for (int j = 0; j < Length - (1 + i); j++) {
			if (DataSet[j + 1].score < DataSet[j].score)
			{				
				temp = DataSet[j+1];
				DataSet[j+1] = DataSet[j];
				DataSet[j] = temp;
			}
		}
	}
}

int main() {
	//int array[] = { 4, 2, 1, 6, 5, 3 };
	int i = 0;
	int Length = sizeof DataSet / sizeof DataSet[0];	
	

	BubbleSort(DataSet, Length);

	for ( i = 0; i < 100; i++) {
		printf("number: %d score: %lf\n", DataSet[i].number,DataSet[i].score);
	}

	printf("\n");

	return 0;
}