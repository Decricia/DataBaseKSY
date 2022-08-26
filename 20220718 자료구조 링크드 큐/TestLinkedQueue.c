#define _CRT_SECURE_NO_WARNINGS
#include"LinkedQueue.h"

int main(void)
{
	Node* Popped;
	LinkedQueue* Queue;

	LQ_CreateQueue(&Queue);

	LQ_Enqueue(Queue, LQ_CreateNode("ABC"));
	LQ_Enqueue(Queue, LQ_CreateNode("DEF"));
	LQ_Enqueue(Queue, LQ_CreateNode("GHI"));
	LQ_Enqueue(Queue, LQ_CreateNode("JKL"));

	printf("Queue Size: %d\n", Queue->Count);

	while (LQ_IsEmpty(Queue) == 0)
	{
		Popped = LQ_Dequeue(Queue);

		printf("Dequeue: %s \n", Popped->Data);

		LQ_DestroyNode(Popped);
	}

	LQ_DestroyQueue(Queue);

	return 0;
}