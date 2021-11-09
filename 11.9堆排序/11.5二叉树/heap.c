#define _CRT_SECURE_NO_WARNINGS 1
#include "heap.h"

// 堆初始化
void HeapInit(Heap* hp)
{
	assert(hp);
	hp->a = NULL;
	hp->cacpacity = hp->size = 0;
}

// 堆的销毁
void HeapDestory(Heap* hp)
{
	assert(hp);
	free(hp->a);
	hp->cacpacity = hp->size = 0;
}

//打印
void HeapPrint(Heap* hp)
{
	assert(hp);
	int i = 0;
	for ( i = 0; i < hp->size; i++)   
	{
		printf("%d ", hp->a[i]);
	}
	printf("\n");
}

// 堆的判空
int HeapEmpty(Heap* hp)
{
	assert(hp);
	return hp->size == 0;
}

// 堆的数据个数
int HeapSize(Heap* hp)
{
	assert(hp);
	return hp->size;
}

//交换
void Swap(HpDataType* px, HpDataType* py)
{
	HpDataType tmp = *px;
	*px = *py;
	*py = tmp;
}

//上调
void AdjustUp(HpDataType* a, int child)
{
	int parent = (child - 1) / 2;
	while (child != 0)
	{
		if (a[child] < a[parent])
		{
			Swap(a + child, a + parent);

			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}


// 堆的插入
void HeapPush(Heap* hp, HpDataType x)
{
	assert(hp);
	//扩容
	if (hp->cacpacity == hp->size)
	{
		int NewCapacity = hp->cacpacity == 0 ? 4 : 2 * hp->cacpacity;
		HpDataType* p = (HpDataType*)realloc(hp->a, NewCapacity * sizeof(HpDataType));
		if (p == NULL)
		{
			perror("扩容失败");
			exit(-1);
		}
		hp->a = p;
		hp->cacpacity = NewCapacity;
	}

	//插入元素
	hp->a[hp->size] = x;
	hp->size++;
	//大堆向上调整
	AdjustUp(hp->a, hp->size-1);

}


//下调
void AdjustDown(HpDataType* a, int n, int parent)
{
	
	while (2*parent+1 < n)	//break 或者 到最后一层/无孩子 时跳出循环
	{
		int child = 2 * parent + 1;	//默认左孩子
		if (child+1 < n && a[child+1] < a[child])		//如右孩子是否存在 ，并且右孩子比左孩子大
		{
			child++;
		}
		if (a[child] < a[parent])
		{
			Swap(&a[parent], &a[child]);
			parent = child;
		}
		else
		{
			break;
		}
	}
}


// 删除堆顶的数据
void HeapPop(Heap* hp)
{
	assert(hp);
	assert(!HeapEmpty(hp));

	//交换首尾元素
	hp->a[0] = hp->a[hp->size - 1];
	hp->size--;
	//下调
	AdjustDown(hp->a, hp->size, 0);

}


// 取堆顶的数据
HpDataType HeapTop(Heap* hp)
{
	assert(hp);
	assert(!HeapEmpty(hp));

	return hp->a[0];
}
