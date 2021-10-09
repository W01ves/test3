#define _CRT_SECURE_NO_WARNINGS 1
#include "Slist.h"



//��ӡ
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


//����ڵ�
SListNode* BuyListNode(Datetype x)
{
	SListNode* NewNode = (SListNode*)malloc(sizeof(SListNode));
	if (NewNode == NULL)
	{
		perror("����ڵ�ʧ�ܣ�");
		exit(EXIT_FAILURE);
	}
	NewNode->data = x;
	NewNode->next = NULL;
	return NewNode;
}



//β��
void SListPushBack(SListNode** pphead, Datetype x) 
{
	//����ռ�
	SListNode* NewNode = BuyListNode(x);

	//�ҵ�β��(�������һ���ڵ��ַ)
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



//βɾ
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



//ͷ��
void SListPushFront(SListNode** pphead, Datetype x)
{
	//����ռ�
	SListNode* NewNode = BuyListNode(x);

	//����
	NewNode->next = *pphead;
	*pphead = NewNode;


}


//ͷɾ
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



//����x���ڵ�λ�ã��������ڽڵ�����
SListNode* SListFind(SListNode* phead, Datetype x)
{
	if (phead == NULL)
	{
		//printf("����Ϊ��\n");
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
		//printf("�����в�����x\n");
		return NULL;
	}

}



// ���
void SListInsertAfter(SListNode* pos, Datetype x)
{
	assert(pos);

	SListNode* NewNode = BuyListNode(x);
	NewNode->next = pos->next;
	pos->next = NewNode;

}

//ɾ��posλ�ú���Ľڵ�
void SListEraseAfter(SListNode* pos)
{
	assert(pos);
	if (pos->next == NULL)
	{
		printf("pos�����޽ڵ��ɾ��");
		return;
	}
	else
	{
		SListNode* nextnext = pos->next->next;
		free(pos->next);
		pos->next = nextnext;
	}
}