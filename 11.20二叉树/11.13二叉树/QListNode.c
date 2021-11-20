#define _CRT_SECURE_NO_WARNINGS 1
#include "QListNode.h"


// 初始化队列
void QueueInit(Queue* q)
{
	assert(q);
	q->head = NULL;
	q->tail = NULL;
}

// 销毁队列
void QueueDestroy(Queue* q)
{
	assert(q);
	QListNode* cur = q->head;
	while (cur != NULL)
	{
		QListNode* next = cur->next;
		free(cur);
		cur = next;
	}

} 

// 检测队列是否为空，如果为空返回非零结果，如果非空返回0
int QueueEmpty(Queue* q)
{
	assert(q);
	return q->head == NULL;
}

// 队尾入队列
void QueuePush(Queue* q, QDataType data)
{
	assert(q);
	//创建节点
	QListNode* NewNode = (QListNode*)malloc(sizeof(QListNode));
	if (NewNode == NULL)
	{
		perror("创建节点失败");
		exit(-1);
	}
	NewNode->next = NULL;
	NewNode->x = data;
	//插入
	if (q->head == NULL)
	{
		q->head = q->tail = NewNode;
	}
	else
	{
		q->tail->next = NewNode;
		q->tail = NewNode;
	}
}


// 队头出队列
void QueuePop(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));

	QListNode* next = q->head->next;
	free(q->head);
	q->head = next;

	if (q->head == NULL)
	{
		q->tail = NULL;			//删完后tail应与head指向同一个空指针
	}
}


// 获取队列头部元素
QDataType QueueFront(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));	  //队列不为空
	return q->head->x;
}

// 获取队列队尾元素
QDataType QueueBack(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));		//队列不为空
	return q->tail->x;
}

// 获取队列中有效元素个数
int QueueSize(Queue* q)
{
	assert(q);
	QListNode* cur = q->head;
	int count = 0;
	while (cur != NULL)
	{
		cur = cur->next;
		count++;
	}
	return count;
}