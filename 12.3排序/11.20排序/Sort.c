#define _CRT_SECURE_NO_WARNINGS 1
#include "Sort.h"
#include "stack.h"

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
	assert(a);

	int end = n;
	while (end > 0)
	{
		int flag = 0;
		for (int i = 1; i < end; ++i)
		{
			if (a[i - 1] > a[i])
			{
				swap(&a[i - 1], &a[i]);
				flag = 1;
			}
		}

		if (flag == 0)
		{
			break;
		}

		--end;
	}
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
	//小区间优化，当分割到小区间时，不再用递归分割思路让这段子区间有序
	//对于递归快排，减少递归次数，可防止栈溢出
	if (right - left +1 < 10)		
	{
		InsertSort(a+left , right-left+1);
	}

	int ret = PartSort3(a, left, right);	
	QuickSort(a, left, ret - 1);	//左子数组排序
	QuickSort(a, ret + 1, right);	//右子数组排序
}


//非递归快排
void QuickSort2(int* a, int left, int right)
{
	Stack S;		//建栈
	//初始化栈，
	StackInit(&S);
	StackPush(&S, left);
	StackPush(&S, right);

	//循环
	int ret = 0;
	while (!StackIsEmpty(&S))
	{
		right = StackTop(&S);
		StackPop(&S);
		left = StackTop(&S);
		StackPop(&S);

		ret = PartSort1(a, left, right);
		if (ret + 1 < right)
		{
			StackPush(&S, ret + 1);
			StackPush(&S, right);
		}
		if (ret - 1 > left)
		{
			StackPush(&S, left);
			StackPush(&S, ret - 1);
		}
	}
	StackDestroy(&S);
}



void _MergeSort(int* a, int* p, int left, int right)
{
	//分解成两个小区间
	if (left >= right)
	{
		return;
	}
	int mid = left + (right - left) / 2;
	_MergeSort(a, p, left, mid);
	_MergeSort(a, p, mid + 1, right);

	int begin1 = left;
	int end1 = mid;
	int begin2 = mid + 1;
	int end2 = right;

	//将两区间的数有序放入数组p中
	int i = left;
	while (begin1 <= end1 && begin2 <= end2)	//循环后一个区间已经全放入数组p
	{
		if (a[begin1] <= a[begin2])
		{
			p[i++] = a[begin1];
			begin1++;
		}
		else
		{
			p[i++] = a[begin2];
			begin2++;
		}
	}
	while (begin1 <= end1)
	{
		p[i++] = a[begin1];
		begin1++;
	}
	while (begin2 <= end2)
	{
		p[i++] = a[begin2];
		begin2++;
	}
	//将数组p中的有序元素拷贝至原数组
	
	for (  int j = left ; j <= right;j++)
	{
		a[j] = p[j];
	}
}

// 归并排序递归实现
void MergeSort(int* a, int n)
{
	int* p = (int*)malloc(n*sizeof(int));
	if (p == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}

	_MergeSort(a, p, 0, n-1);

	free(p);
	p = NULL;
}



// 归并排序非递归实现
void MergeSortNonR(int* a, int n)
{
	int* p = (int*)malloc(n * sizeof(int));
	if (p == NULL)
	{
		printf("malloc fail");
		exit(-1);
	}
	int gap = 1;			//相邻begin距离为gap.
	while (gap < n)
	{
		for (int i = 0; i < n; i += 2 * gap)
		{
			int begin1 = i, end1 = begin1 + gap - 1;
			int begin2 = begin1 + gap, end2 = begin2 + gap - 1;
			int index = i;
			// end1 越界，[begin2,end2]不存在
			if (end1 > n-1)
			{
				end1 = n - 1;
			}
			//[begin1,end1]存在 [begin2,end2]不存在
			if (begin2 > n-1)    //[begin2，end2]区间越界 ，但[begin1， end1]区间内元素有序，只需要将[begin1， end1]中元素放入p中就算完成begin1后面元素的归并
			{
				begin2 = n;		//此区间不存在，不会进入循环
				end2 = n - 1;
			}
			if (end2 > n-1)		
			{
				end2 = n - 1;
			}

			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] <= a[begin2])
				{
					p[index++] = a[begin1++];
				}
				else
				{
					p[index++] = a[begin2++];
				}
			}
			while (begin1 <= end1)
			{
				p[index++] = a[begin1++];
			}
			while (begin2 <= end2)
			{
				p[index++] = a[begin2++];
			}
		}
		for (int j = 0; j < n; j++)
		{
			a[j] = p[j];
		}

		gap *= 2;
	}

	free(p);
	p = NULL;
}



void CountSort(int* a, int n)
{
	//找到最大值和最小值
	int max = a[0], min = a[0];
	int i;
	for (i = 1; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	//遍历整个数组，并计数(计算每个元素出现次数)
	int range = max - min + 1;
	int* p = (int*)malloc(range * sizeof(int));
	if (p == NULL)
	{
		printf("malloc fail");
		exit(-1);
	}
	memset(p, 0, sizeof(int)*range);

	for ( i = 0; i < n; i++)
	{
		p[a[i] - min]++;
	}
	//遍历计数数组
	int j;
	for (i = 0, j = 0; j < range; j++)
	{
		while (p[j]--)
		{
			a[i++] = j + min;
		}
	}

	free(p);
	p = NULL;

}