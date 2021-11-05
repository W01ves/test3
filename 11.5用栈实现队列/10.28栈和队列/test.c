#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"

typedef struct
{
	Stack s1;
	Stack s2;
} MyQueue;


MyQueue* myQueueCreate()
{
	MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
	StackInit(&obj->s1);
	StackInit(&obj->s2);
	return obj;
}

bool myQueueEmpty(MyQueue* obj)
{
	assert(obj);
	return (StackIsEmpty(&obj->s1) && StackIsEmpty(&obj->s2));
}

void myQueuePush(MyQueue* obj, int x)
{
	assert(obj);
	StackPush(&obj->s1, x);
}

int myQueuePop(MyQueue* obj)
{
	assert(obj);
	assert(!myQueueEmpty(obj)); //队列不为空

	//如果s2为空 ， 将s1倒入s2
	if (StackIsEmpty(&obj->s2) == 1)
	{
		while (!StackIsEmpty(&obj->s1))
		{
			STDataType x = StackTop(&obj->s1);
			StackPop(&obj->s1);
			StackPush(&obj->s2, x);
		}
	}
	int x = StackTop(&obj->s2);
	StackPop(&obj->s2);
	return x;
}

int myQueuePeek(MyQueue* obj)
{
	assert(obj);
	assert(!myQueueEmpty(obj)); //队列不为空
	if (StackIsEmpty(&obj->s2) == 1)
	{
		while (!StackIsEmpty(&obj->s1))
		{
			STDataType x = StackTop(&obj->s1);
			StackPop(&obj->s1);
			StackPush(&obj->s2, x);
		}
	}
	return StackTop(&obj->s2);

}


void myQueueFree(MyQueue* obj)
{
	assert(obj);
	StackDestroy(&obj->s1);
	StackDestroy(&obj->s2);
	free(obj);
}






int main()
{
	MyQueue* obj = myQueueCreate();
	StackPush(obj, 1);
	StackPush(obj, 2);
	StackPush(obj, 3);

	myQueuePop(obj);
	myQueuePop(obj);

	StackPush(obj, 4);
	StackPush(obj, 5);

	myQueuePop(obj);

	int m = myQueuePeek(obj);




	myQueueFree(obj);
	return 0;
}



