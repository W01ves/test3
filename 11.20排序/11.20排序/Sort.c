#define _CRT_SECURE_NO_WARNINGS 1
#include "Sort.h"

//��������Ϊ����

//����
void swap(int* p, int *q)
{
	int tmp = *p;
	*p = *q;
	*q = tmp;
}


//��ӡ
void ArrPrint(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}


// ֱ�Ӳ�������
void InsertSort(int* a, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		int end = i;
		int cur = a[end + 1];

		while (end >= 0 && a[end] > tmp)
		{
			a[end + 1] = a[end];
			--end;
		}

		//while (end >= 0)
		//{
		//	if (cur < a[end])
		//	{
		//		a[end + 1] = a[end];
		//	}
		//	else
		//	{
		//		break;
		//	}
		//	--end;
		//}

		a[end + 1] = cur;
	}

}



// ϣ������
void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap >1)
	{
		gap /=  2;
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int cur = a[end + gap];
			while (end >= 0)
			{
				if (cur < a[end])
				{
					a[end + gap] = a[end];
				}
				else
				{
					break;
				}
				end -= gap;
			}
			a[end + gap] = cur;
		}
	}
}



// ѡ������
void SelectSort(int* a, int n)
{
	int begin = 0, end = n - 1;

	while (begin < end)
	{
		int maxi = begin, mini = end;
		for (int i = begin; i <= end; i++)
		{
			if (a[i] > a[maxi])
			{
				maxi = i;
			}
			if (a[i] < a[mini])
			{
				mini = i;
			}
		}
		if (begin == maxi)		//���maxi = begin, ������������������
		{
			maxi = mini;
		}

		swap(&a[begin], &a[mini]);
		swap(&a[end], &a[maxi]);

		++begin;
		--end;
	}
}


//������
//���򽨴��
void AdjustDwon(int* a, int n, int root)
{
	int child = 2 * root + 1;

	while (child < n)
	{
		if (child + 1 < n && (a[child + 1] > a[child]))
		{
			child = child + 1;
		}

		if (a[child] > a[root])
		{
			swap(&a[child], &a[root]);
		}
		else
		{
			break;
		}
		root = child;
		child = 2 * root + 1;
	}



}
void HeapSort(int* a, int n)
{
	//���µ����������
	for ( int i = (n - 1 - 1) / 2; i >= 0; i--)	//���з�Ҷ�ӽڵ�ִ�����µ���
	{
		AdjustDwon(a, n, i);
	}

	//������
	int tail = n - 1; //β�ڵ� 

	while (tail>0)
	{
		swap(&a[0], &a[tail]);
		AdjustDwon(a, tail, 0);		//�˴�tail����ڵ����
		tail--;
	}

}