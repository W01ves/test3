#define _CRT_SECURE_NO_WARNINGS 1
#include "Sort.h"
#include "stack.h"

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

		while (end >= 0 && a[end] > cur)
		{
			a[end + 1] = a[end];
			--end;
		}
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
  

// ð������
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





// ��������hoare�汾
int PartSort1(int* a, int left, int right)
{
	int key = left;		//��key������

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

	return left;		//���left �� right ��������Ϊ�ָ�㣬���������
}


// �������� �ڿ� �汾
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
		while (left < right && a[left] <= key)		//�˴����� left < right ����ֹǰ���ұ��ߵ�ʱ��left  = right
		{
			left++;
		}
		a[right] = a[left];
	}
	a[left] = key;
	return left;
}

// �������� ǰ��ָ�� �汾
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
	if (left >= right)		//ֹͣ�ݹ�����
	{
		return;
	}
	//С�����Ż������ָС����ʱ�������õݹ�ָ�˼·���������������
	//���ڵݹ���ţ����ٵݹ�������ɷ�ֹջ���
	if (right - left +1 < 10)		
	{
		InsertSort(a+left , right-left+1);
	}

	int ret = PartSort3(a, left, right);	
	QuickSort(a, left, ret - 1);	//������������
	QuickSort(a, ret + 1, right);	//������������
}


//�ǵݹ����
void QuickSort2(int* a, int left, int right)
{
	Stack S;		//��ջ
	//��ʼ��ջ��
	StackInit(&S);
	StackPush(&S, left);
	StackPush(&S, right);

	//ѭ��
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
	//�ֽ������С����
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

	//����������������������p��
	int i = left;
	while (begin1 <= end1 && begin2 <= end2)	//ѭ����һ�������Ѿ�ȫ��������p
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
	//������p�е�����Ԫ�ؿ�����ԭ����
	
	for (  int j = left ; j <= right;j++)
	{
		a[j] = p[j];
	}
}

// �鲢����ݹ�ʵ��
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



// �鲢����ǵݹ�ʵ��
void MergeSortNonR(int* a, int n)
{
	int* p = (int*)malloc(n * sizeof(int));
	if (p == NULL)
	{
		printf("malloc fail");
		exit(-1);
	}
	int gap = 1;			//����begin����Ϊgap.
	while (gap < n)
	{
		for (int i = 0; i < n; i += 2 * gap)
		{
			int begin1 = i, end1 = begin1 + gap - 1;
			int begin2 = begin1 + gap, end2 = begin2 + gap - 1;
			int index = i;
			// end1 Խ�磬[begin2,end2]������
			if (end1 > n-1)
			{
				end1 = n - 1;
			}
			//[begin1,end1]���� [begin2,end2]������
			if (begin2 > n-1)    //[begin2��end2]����Խ�� ����[begin1�� end1]������Ԫ������ֻ��Ҫ��[begin1�� end1]��Ԫ�ط���p�о������begin1����Ԫ�صĹ鲢
			{
				begin2 = n;		//�����䲻���ڣ��������ѭ��
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
	//�ҵ����ֵ����Сֵ
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
	//�����������飬������(����ÿ��Ԫ�س��ִ���)
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
	//������������
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