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

//��ʼ��
ListNode* ListInit(ListNode* phead);
//
ListNode* BuyListNode(LTDataType x);
//��ӡ
void ListPrint(ListNode* phead);
//β��
void ListPushBack(ListNode* phead , LTDataType x);
//βɾ
void ListPopBack(ListNode* phead);
//ͷ��
void ListPushFront(ListNode* phead, LTDataType x);
//ͷɾ
void ListPopFront(ListNode* phead);
//����x���ڵ�λ��
ListNode* ListFind(ListNode* phead, LTDataType x);
// ��posλ��ǰ����ڵ�
void ListInsertBefore(ListNode* pos, LTDataType x);
//ɾ��posλ�õĽڵ�
void ListEraseBefore(ListNode* pos);

