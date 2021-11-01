#define _CRT_SECURE_NO_WARNINGS 1
#include "QListNode.h"

typedef struct
{
	Queue q1;			//ע�� �ô�Ϊ�ṹ�壬���ǽṹ��ָ��
	Queue q2;
} MyStack;


MyStack* myStackCreate()
{
	MyStack* obj = (MyStack*)malloc(sizeof(MyStack));
	QueueInit(&obj->q1);	
	QueueInit(&obj->q2);
	return obj;
}


bool myStackEmpty(MyStack* obj)
{
	assert(obj);
	return (obj->q1.head == NULL && obj->q2.head == NULL);	//q1,q2 ����ͬʱΪ��
}


void myStackPush(MyStack* obj, int x)
{
	assert(obj);

	if (QueueEmpty(&obj->q2))
	{
		QueuePush(&obj->q1,x);
	}
	else
	{
		QueuePush(&obj->q2, x);
	}
}


int myStackPop(MyStack* obj)
{
	assert(obj);
	assert(!myStackEmpty(obj)); //������һ����ЧԪ��
	int ret = 0;
	//����q2Ϊ��ʱ����tailǰ�����ݰᵽq1��(ɾ��ֻʣһ��Ԫ��)������tail������
	if (QueueEmpty(&obj->q2))
	{
		while (obj->q1.head != obj->q1.tail)	//QueueSize(&obj->q1)>1
		{
			QDataType x = QueueFront(&obj->q1);
			QueuePop(&obj->q1);
			QueuePush(&obj->q2,x);
		}
		ret = QueueFront(&obj->q1);
		QueuePop(&obj->q1);
	}
	//q2��Ϊ��  ����q1Ϊ��
	else
	{
		while (obj->q2.head != obj->q2.tail)
		{
			QDataType x = QueueFront(&obj->q2);
			QueuePop(&obj->q2);
			QueuePush(&obj->q1, x);
		}
		ret = QueueFront(&obj->q2);
		QueuePop(&obj->q2);
	}
	return ret;

}

void myStackFree(MyStack* obj)
{
	assert(obj);
	QueueDestroy(&obj->q1);
	QueueDestroy(&obj->q2);

	free(obj);
	obj = NULL;
}

int myStackTop(MyStack* obj) 
{
	assert(obj);
	assert(!myStackEmpty(obj)); //������һ����ЧԪ��
	if (QueueEmpty(&obj->q2))	//q2Ϊ��
	{
		return QueueBack(&obj->q1);
	}
	else
	{
		return QueueBack(&obj->q2);
	}
}


int main()
{
	MyStack* obj = myStackCreate();
	myStackPush(obj, 1);
	myStackPush(obj, 2);

	myStackTop(obj);
	printf("%d", myStackTop(obj));
	myStackPop(obj);

	//myStackPop(obj);


	myStackFree(obj);


	return 0;
}
