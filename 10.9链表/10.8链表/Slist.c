#define _CRT_SECURE_NO_WARNINGS 1
#include "Slist.h"



//打印
void SListPrint(SListNode* phead)
{
	SListNode* cur = phead;

	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	
	printf("NULL\n");
}


//申请节点
SListNode* BuyListNode(Datetype x)
{
	SListNode* NewNode = (SListNode*)malloc(sizeof(SListNode));
	if (NewNode == NULL)
	{
		perror("申请节点失败：");
		exit(EXIT_FAILURE);
	}
	NewNode->data = x;
	NewNode->next = NULL;
	return NewNode;
}



//尾插
void SListPushBack(SListNode** pphead, Datetype x) 
{
	//申请空间
	SListNode* NewNode = BuyListNode(x);

	//找到尾巴(链表最后一个节点地址)
	SListNode* tail = *pphead;
	if (*pphead == NULL)
	{
		*pphead = NewNode;

	}
	else
	{
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = NewNode;

	}
}



//尾删
void SListPopBack(SListNode** pphead)
{

	if (*pphead == NULL)
	{
		return;
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SListNode* tail = *pphead;
		SListNode* prev = NULL;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;
		prev->next = NULL;
	}
}



//头插
void SListPushFront(SListNode** pphead, Datetype x)
{
	//申请空间
	SListNode* NewNode = BuyListNode(x);

	//插入
	NewNode->next = *pphead;
	*pphead = NewNode;


}


//头删
void SListPopFront(SListNode** pphead)
{
	if (*pphead == NULL)
	{
		return;
	}
	else
	{
		SListNode* next = (*pphead)->next;
		free(*pphead);
		*pphead = next;
		
	}
}



//查找x所在的位置，返回所在节点坐标
SListNode* SListFind(SListNode* phead, Datetype x)
{
	if (phead == NULL)
	{
		//printf("链表为空\n");
		return NULL;
	}
	else
	{
		SListNode* cur = phead;
		while (cur)
		{
			if (cur->data == x)
			{
				return cur;
			}
			cur = cur->next;
		}
		//printf("链表中不存在x\n");
		return NULL;
	}

}



// 后插
void SListInsertAfter(SListNode* pos, Datetype x)
{
	assert(pos);

	SListNode* NewNode = BuyListNode(x);
	NewNode->next = pos->next;
	pos->next = NewNode;

}

//删除pos位置后面的节点
void SListEraseAfter(SListNode* pos)
{
	assert(pos);
	if (pos->next == NULL)
	{
		printf("pos后面无节点可删除");
		return;
	}
	else
	{
		SListNode* nextnext = pos->next->next;
		free(pos->next);
		pos->next = nextnext;
	}
}