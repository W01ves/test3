#define _CRT_SECURE_NO_WARNINGS 1
#include "QListNode.h"

void test1()
{
	Queue q;
	QueueInit(&q);

	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);

	//QueuePop(&q);
	//QueuePop(&q);
	//QueuePop(&q);
	//QueuePop(&q);

	//QueuePush(&q, 4);
	//QueueFront(&q);

	int n = QueueSize(&q);
	int m1 = QueueFront(&q);
	int m2 = QueueBack(&q);

	QueueDestroy(&q);
}


int main()
{
	test1();
	return 0;
