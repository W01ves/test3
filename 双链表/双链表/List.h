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



//Î²²å
void ListPushBackk(ListNode* phead , LTDataType x);

