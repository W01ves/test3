#define _CRT_SECURE_NO_WARNINGS 1
#include "QListNode.h"


// ��ʼ������
void QueueInit(Queue* q)
{
	assert(q);
	q->head = NULL;
	q->tail = NULL;
}

// ���ٶ���
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

// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0
int QueueEmpty(Queue* q)
{
	assert(q);
	return q->head == NULL;
}

// ��β�����
void QueuePush(Queue* q, QDataType data)
{
	assert(q);
	//�����ڵ�
	QListNode* NewNode = (QListNode*)malloc(sizeof(QListNode));
	if (NewNode == NULL)
	{
		perror("�����ڵ�ʧ��");
		exit(-1);
	}
	NewNode->next = NULL;
	NewNode->x = data;
	//����
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


// ��ͷ������
void QueuePop(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));

	QListNode* next = q->head->next;
	free(q->head);
	q->head = next;

	if (q->head == NULL)
	{
		q->tail = NULL;			//ɾ���tailӦ��headָ��ͬһ����ָ��
	}
}


// ��ȡ����ͷ��Ԫ��
QDataType QueueFront(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));	  //���в�Ϊ��
	return q->head->x;
}

// ��ȡ���ж�βԪ��
QDataType QueueBack(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));		//���в�Ϊ��
	return q->tail->x;
}

// ��ȡ��������ЧԪ�ظ���
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