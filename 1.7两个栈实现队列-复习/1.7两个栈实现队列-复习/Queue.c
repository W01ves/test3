#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

typedef struct Queue
{
	Stack S1;
	Stack S2;
}Queue;

//创建队列
Queue* QueueCreate()
{
	Queue* q = (Queue*)malloc(sizeof(Queue));
	StackInit(&q->S1);
	StackInit(&q->S2);
	return q;
}


//入队列
void QueuePush(Queue* q,int x)
{
	assert(q);
	StackPush(&q->S1, x);
}

//判空
bool QueueIsEmpty(Queue* q)
{
	assert(q);
	return (StackIsEmpty(&q->S1) && StackIsEmpty(&q->S2));
}


//出队列
int QueuePop(Queue* q)
{
	assert(q);
	assert(!QueueIsEmpty(q));
	//如果S2为空，将栈S1元素都放入栈S2中
	if (StackIsEmpty(&q->S2))
	{
		while (!StackIsEmpty(&q->S1))
		{
			int tmp = StackTop(&q->S1);
			StackPop(&q->S1);
			StackPush(&q->S2, tmp);
		}
	}
	//出队列
	int ret = StackTop(&q->S2);
	StackPop(&q->S2);
	return ret;
}


//销毁队列
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

