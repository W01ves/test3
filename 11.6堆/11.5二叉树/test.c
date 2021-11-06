#define _CRT_SECURE_NO_WARNINGS 1
#include "heap.h"




int main()
{
	Heap hp;
	HeapInit(&hp);
	int a[] = { 70,56,30 ,25,15,10,75 };
	int n = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < n; i++)
	{
		HeapPush(&hp, a[i]);
	}

	HeapPrint(&hp);
	printf("\n");

	HeapPop(&hp);
	HeapPrint(&hp);
	printf("\n");

	HeapPop(&hp);
	HeapPrint(&hp);
	printf("\n");

	HeapPop(&hp);
	HeapPrint(&hp);
	printf("\n");

	HeapPop(&hp);
	HeapPrint(&hp);
	printf("\n");

	return 0;
}