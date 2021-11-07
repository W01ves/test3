#define _CRT_SECURE_NO_WARNINGS 1
#include "heap.h"
//void test1()
//{
//	Heap hp;
//	HeapInit(&hp);
//	//int a[] = {8,7,6,5,4 };
//	int a[] = { 70,56,30,25,15,10,75 };
//	int n = sizeof(a) / sizeof(a[0]);
//	for (int i = 0; i < n; i++)
//	{
//		HeapPush(&hp, a[i]);
//	}
//
//	HeapPrint(&hp);
//	printf("\n");
//
//	HeapPop(&hp);
//	HeapPrint(&hp);
//	printf("\n");
//
//	HeapPop(&hp);
//	HeapPrint(&hp);
//	printf("\n");
//
//	HeapPop(&hp);
//	HeapPrint(&hp);
//	printf("\n");
//
//	HeapPop(&hp);
//	HeapPrint(&hp);
//	printf("\n");
//
//	HeapDestory(&hp);
//}
//在n个数中找出最大/最小的前K个    


//void PrintTopK(int* a, int n, int k)
//{
//	Heap hp;
//	HeapInit(&hp);
//	int i = 0;
//	// 1. 建堆--用a中前k个元素建堆
//	for (i = 0; i < k; i++)
//	{
//		HeapPush(&hp,a[i]);
//	}
//	HeapPrint(&hp);
//	// 2. 将剩余n-k个元素依次与堆顶元素交换，不满则则替换
//	for ( i = k; i < n; i++)
//	{
//		if (a[i] > hp.a[0])
//		{
//			HeapPop(&hp);
//			HeapPush(&hp, a[i]);
//		}
//	}
//	HeapPrint(&hp);
//	HeapDestory(&hp);
//}
//
//void TestTopk()
//{
//	int n = 10000;		//n个数中最大的k个
//	int* a = (int*)malloc(sizeof(int)*n);
//	srand(time(0));
//	for (size_t i = 0; i < n; ++i)
//	{
//		a[i] = rand() % 1000000;
//	}
//	a[5] = 1000000 + 1;
//	a[1231] = 1000000 + 2;
//	a[531] = 1000000 + 3;
//	a[5121] = 1000000 + 4;
//	a[115] = 1000000 + 5;
//	a[2335] = 1000000 + 6;
//	a[9999] = 1000000 + 7;
//	a[76] = 1000000 + 8;
//	a[423] = 1000000 + 9;
//	a[3144] = 1000000 + 10;
//	PrintTopK(a, n, 10);	//n个数中最大的k个
//}


void HeapSort(int*a, int n)
{

}


int main()
{
	//TestTopk();   //TopK 问题

	int a[] = { 70,56,30,25,15,10,75 };
	int n = sizeof(a) / sizeof(a[0]);

	HeapSort(a, n);


	return 0;
}