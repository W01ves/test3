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
//��n�������ҳ����/��С��ǰK��    


//void PrintTopK(int* a, int n, int k)
//{
//	Heap hp;
//	HeapInit(&hp);
//	int i = 0;
//	// 1. ����--��a��ǰk��Ԫ�ؽ���
//	for (i = 0; i < k; i++)
//	{
//		HeapPush(&hp,a[i]);
//	}
//	HeapPrint(&hp);
//	// 2. ��ʣ��n-k��Ԫ��������Ѷ�Ԫ�ؽ��������������滻
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
//	int n = 10000;		//n����������k��
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
//	PrintTopK(a, n, 10);	//n����������k��
//}



//������е��µ�
void AdjustDown2(int*a, int n ,int parent)
{
	int child = 2 * parent + 1; //����
	while (child < n)
	{
		if (child+1 < n && a[child+1] > a[child])
		{
			child = child + 1;
		}

		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
		}
		else
		{
			break;
		}

		parent = child;
		child = 2 * parent + 1;
	}
}


//����
void HeapSort(int*a, int n)
{
	//�����   �����򽨴�ѣ�����С�ѣ�
	//����n���ڵ���log(n+1)��
	for ( int i = n-1;  i >=0 ;  i--)
	{
		AdjustDown2(a, n, i);
	}
	//����
	int tail = n - 1;
	int NewSize = n;
	while (tail> 0)
	{
		Swap(&a[tail], &a[0]);
		AdjustDown2(a, NewSize - 1, 0);
		NewSize--;
		tail--;
	}


	//for ( tail = n-1, NewSize = n ; tail > 0 ;  tail-- , NewSize--)
	//{
	//	Swap(&a[tail], &a[0]);
	//	AdjustDown2(a, NewSize-1, 0);
	//}


}

int main()
{
	//TestTopk();   //TopK ����

	int a[] = { 70,56,30,25,15,10,75 };
	int n = sizeof(a) / sizeof(a[0]); // n = 7

	HeapSort(a, n);


	return 0;
}