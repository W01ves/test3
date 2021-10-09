#define _CRT_SECURE_NO_WARNINGS 1
#include "Slist.h"


void test1()
{
	SListNode* phead = NULL;

	SListPushBack(&phead, 1);
	SListPushBack(&phead, 2);
	SListPushBack(&phead, 3);
	SListPushBack(&phead, 4);
	SListPrint(phead);

	SListPopBack(&phead);
	SListPopBack(&phead);
	SListPopBack(&phead);
	SListPopBack(&phead);
	SListPrint(phead);


	SListPushFront(&phead, 5);
	SListPushFront(&phead, 6);
	SListPrint(phead);

	SListPopFront(&phead);
	SListPrint(phead);

	printf("%x\n", SListFind(phead, 5));
}



int main()
{

	//test1();
	SListNode* phead = NULL;

	SListPushBack(&phead, 1);
	SListPushBack(&phead, 2);
	SListPushBack(&phead, 3);
	SListPushBack(&phead, 4);

	SListPrint(phead);




	return 0;
}