#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

void test1()
{
	ListNode* phead = NULL;
	phead = ListInit(phead);
	//ListInit(&phead);

	//ListPushBack(phead, 1);
	//ListPushBack(phead, 2);
	//ListPushBack(phead, 3);
	//ListPushBack(phead, 4);
	//ListPrint(phead);
	//ListPopBack(phead);
	//ListPopBack(phead);
	//ListPopBack(phead);
	//ListPrint(phead);
	ListPushFront(phead, 5);
	ListPushFront(phead, 6);
	ListPushFront(phead, 7);

	ListPrint(phead);

	ListPopFront(phead);
	ListPrint(phead);

	ListFind(phead, 1);
}

int main()
{  
	test1();
	return 0;
}