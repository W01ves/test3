#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <assert.h>

typedef int Datetype;

typedef struct SListNode
{
	struct SListNode* next;
	Datetype data;

}SListNode;



//��ӡ
void SListPrint(SListNode* phead);

//β��
void SListPushBack(SListNode** pphead , Datetype x);
//βɾ
void SListPopBack(SListNode** pphead);
//ͷ��
void SListPushFront(SListNode** pphead, Datetype x);
//ͷɾ
void SListPopFront(SListNode** pphead);
//����
SListNode* SListFind(SListNode* phead, Datetype x);
// ��posλ�ú����ڵ�
void SListInsertAfter(SListNode* pos, Datetype x);
//ɾ��posλ�ú���Ľڵ�
void SListEraseAfter(SListNode* pos);