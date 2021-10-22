#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"


//扩容
ListNode* BuyListNode(LTDataType x)
{
	ListNode* NewNode = (ListNode*)malloc(sizeof(ListNode));
	if (NewNode == NULL)
	{
		//perron("节点开辟失败：");
		exit(EXIT_FAILURE);
	}
	NewNode->a = x;
	NewNode->next = NULL;
	NewNode->prev = NULL;
	return NewNode;
}


//phead初始化
ListNode* ListInit(ListNode* phead)
{
	phead = BuyListNode(0);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}



//打印
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



//尾插
void ListPushBack(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* NewNode = BuyListNode(x);

	NewNode->next = phead;
	NewNode->prev = phead->prev;
	phead->prev->next = NewNode;
	phead->prev = NewNode;

}


//尾删
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

//头插
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

//头删
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

//查找x
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

	printf("未找到%d\n",x);
	return NULL;
}


// 再pos位置前插入节点
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


//删除pos位置的节点
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


