#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"


//����
ListNode* BuyListNode(LTDataType x)
{
	ListNode* NewNode = (ListNode*)malloc(sizeof(ListNode));
	if (NewNode == NULL)
	{
		//perron("�ڵ㿪��ʧ�ܣ�");
		exit(EXIT_FAILURE);
	}
	NewNode->a = x;
	NewNode->next = NULL;
	NewNode->prev = NULL;
	return NewNode;
}


//phead��ʼ��
ListNode* ListInit(ListNode* phead)
{
	phead = BuyListNode(0);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}



//��ӡ
void ListPrint(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->a);
		cur = cur->next;
	}
	printf("\n");
}



//β��
void ListPushBack(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* NewNode = BuyListNode(x);

	NewNode->next = phead;
	NewNode->prev = phead->prev;
	phead->prev->next = NewNode;
	phead->prev = NewNode;

}


//βɾ
void ListPopBack(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);

	ListNode* tail = phead->prev;
	tail->prev->next = phead;
	phead->prev = tail->prev;
	free(tail);
	tail = NULL;
}

//ͷ��
void ListPushFront(ListNode* phead, LTDataType x)
{
	assert(phead);

	ListNode* NewNode = BuyListNode(x);
	ListNode* first = phead->next;
	phead->next = NewNode;
	NewNode->prev = phead;
	NewNode->next = first;
	first->prev = NewNode;

}

//ͷɾ
void ListPopFront(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	ListNode* first = phead->next;
	ListNode* second = first->next;
	phead->next = second;
	second->prev = phead; 
	free(first);
	first = NULL;
}

//����x
ListNode* ListFind(ListNode* phead, LTDataType x)
{
	assert(phead);
	assert(phead->next != phead);

	ListNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->a == x)
		{
			return cur;
		}
		cur = cur->next;
	}

	printf("δ�ҵ�%d\n",x);
	return NULL;
}


// ��posλ��ǰ����ڵ�
void ListInsertBefore(ListNode* pos, LTDataType x)
{
	assert(pos);

	ListNode* NewNode = BuyListNode(x);
	ListNode* posPrev = pos->prev;
	NewNode->next = pos;
	pos->prev = NewNode;
	posPrev->next = NewNode;
	NewNode->prev = posPrev;

}


//ɾ��posλ�õĽڵ�
void ListEraseBefore(ListNode* pos)
{
	assert(pos);
	//asseret(pos != phead);
	ListNode* posPrev = pos->prev;
	ListNode* posNext = pos->next;

	free(pos);
	posPrev->next = posNext;
	posNext->prev = posPrev;



	
}


