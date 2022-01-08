#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

typedef struct Queue
{
	Stack S1;
	Stack S2;
}Queue;

//��������
Queue* QueueCreate()
{
	Queue* q = (Queue*)malloc(sizeof(Queue));
	StackInit(&q->S1);
	StackInit(&q->S2);
	return q;
}


//�����
void QueuePush(Queue* q,int x)
{
	assert(q);
	StackPush(&q->S1, x);
}

//�п�
bool QueueIsEmpty(Queue* q)
{
	assert(q);
	return (StackIsEmpty(&q->S1) && StackIsEmpty(&q->S2));
}


//������
int QueuePop(Queue* q)
{
	assert(q);
	assert(!QueueIsEmpty(q));
	//���S2Ϊ�գ���ջS1Ԫ�ض�����ջS2��
	if (StackIsEmpty(&q->S2))
	{
		while (!StackIsEmpty(&q->S1))
		{
			int tmp = StackTop(&q->S1);
			StackPop(&q->S1);
			StackPush(&q->S2, tmp);
		}
	}
	//������
	int ret = StackTop(&q->S2);
	StackPop(&q->S2);
	return ret;
}


//���ٶ���
void QueueFree(Queue* q)
{
	assert(q);
	StackFree(&q->S1);
	StackFree(&q->S2);
	free(q);
}



int main()
{
	Queue* q = QueueCreate();

  	QueuePush(q, 1);
	QueuePush(q, 2);
	QueuePush(q, 3);
  	QueuePush(q, 4);

	QueuePop(q);
	QueuePop(q);
	QueuePop(q);

	QueuePush(q, 5);
	QueuePush(q, 6);
	QueuePush(q, 7);

	QueueFree(q);

	return 0;
}

