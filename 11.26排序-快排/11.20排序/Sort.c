#define _CRT_SECURE_NO_WARNINGS 1
#include "Sort.h"

//所有排序都为升序

//交换
void swap(int* p, int *q)
{
	int tmp = *p;
	*p = *q;
	*q = tmp;
}


//打印
void ArrPrint(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}


// 直接插入排序
void InsertSort(int* a, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		int end = i;
		int cur = a[end + 1];

		while (end >= 0 && a[end] > cur)
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



// 希尔排序
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



// 选择排序
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
		if (begin == maxi)		//如果maxi = begin, 交换后会产生覆盖问题
		{
			maxi = mini;
		}

		swap(&a[begin], &a[mini]);
		swap(&a[end], &a[maxi]);

		++begin;
		--end;
	}
}


//堆排序
//升序建大堆
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
	//向下调整法建大堆
	for ( int i = (n - 1 - 1) / 2; i >= 0; i--)	//所有非叶子节点执行向下调整
	{
		AdjustDwon(a, n, i);
	}

	//堆排序
	int tail = n - 1; //尾节点 

	while (tail>0)
	{
		swap(&a[0], &a[tail]);
		AdjustDwon(a, tail, 0);		//此处tail代表节点个数
		tail--;
	}

}
  

// 冒泡排序
void BubbleSort(int* a, int n)
{

}





// 快速排序hoare版本
int PartSort1(int* a, int left, int right)
{
	int key = left;		//左key右先走

	while (left < right)
	{
		while (left < right && a[right] >= a[key] )
		{
			right--;
		}
		while (left < right && a[left] <= a[key] )
		{
			left++;
		}
		swap(&a[left], &a[right]);

		if (left == right)
		{
			swap(&a[left], &a[key]);
		}
	}

	return left;		//最后left 和 right 相遇处即为分割点，返回这个点
}


// 快速排序 挖坑 版本
int PartSort2(int* a, int left, int right)
{
	int key = a[left];
	while (left < right)
	{
		while (left < right && a[right] >= key)
		{
			right--;
		}
		a[left] = a[right];
		while (left < right && a[left] <= key)		//此处加入 left < right ，防止前面右边走的时候left  = right
		{
			left++;
		}
		a[right] = a[left];
	}
	a[left] = key;
	return left;
}

// 快速排序 前后指针 版本
int PartSort3(int* a, int left, int right)
{
	int key = left;
	int prev = left, cur = left + 1;
	while (cur <= right)
	{
		if (a[cur] < a[key]  && ++prev != cur)
		{
			swap(&a[prev], &a[cur]);
		}
		cur++;
	} 
	swap(&a[key], &a[prev]);
	return prev;
}



void QuickSort(int* a, int left, int right) 
{
	if (left >= right)		//停止递归条件
	{
		return;
	}
	 
	int ret = PartSort3(a, left, right);

	QuickSort(a, left, ret - 1);	//左子数组排序
	QuickSort(a, ret + 1, right);	//右子数组排序
}

