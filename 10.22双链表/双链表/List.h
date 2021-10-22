#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <errno.h>

typedef int LTDataType;

typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType a;


}ListNode;

//初始化
ListNode* ListInit(ListNode* phead);
//
ListNode* BuyListNode(LTDataType x);
//打印
void ListPrint(ListNode* phead);
//尾插
void ListPushBack(ListNode* phead , LTDataType x);
//尾删
void ListPopBack(ListNode* phead);
//头插
void ListPushFront(ListNode* phead, LTDataType x);
//头删
void ListPopFront(ListNode* phead);
//查找x所在的位置
ListNode* ListFind(ListNode* phead, LTDataType x);
// 再pos位置前插入节点
void ListInsertBefore(ListNode* pos, LTDataType x);
//删除pos位置的节点
void ListEraseBefore(ListNode* pos);

