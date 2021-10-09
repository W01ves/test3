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



//打印
void SListPrint(SListNode* phead);

//尾插
void SListPushBack(SListNode** pphead , Datetype x);
//尾删
void SListPopBack(SListNode** pphead);
//头插
void SListPushFront(SListNode** pphead, Datetype x);
//头删
void SListPopFront(SListNode** pphead);
//查找
SListNode* SListFind(SListNode* phead, Datetype x);
// 再pos位置后插入节点
void SListInsertAfter(SListNode* pos, Datetype x);
//删除pos位置后面的节点
void SListEraseAfter(SListNode* pos);