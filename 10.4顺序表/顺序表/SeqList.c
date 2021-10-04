#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

//初始化
void SeqListInit(SeqList* SL)
{
	SLDataType* p = (SLDataType*)malloc( DEFAULT_CAPACITY * sizeof(SLDataType));
	if (p != NULL)
	{
		SL->a = p;
	}
	else
	{
		perror("初始化失败：");
		exit(EXIT_FAILURE);
	}
	SL->size = 0;
	SL->capacity = DEFAULT_CAPACITY;
}

//销毁
void SeqListDestory(SeqList* SL)
{
	free(SL->a);
	SL->a = NULL;
	printf("销毁成功\n");
}


//增容
void CheckCapacity(SeqList* SL)
{
	assert(SL);
	if (SL->size == SL->capacity)
	{
		SLDataType* p = realloc(SL->a, (2*SL->capacity) * sizeof(SLDataType));
		if (p!=NULL)
		{
			SL->a = p;
			printf("增容成功\n");
			SL->capacity *=2;
		}
		else
		{
			perror("增容失败：");
			return;
		}

	}
}



//打印
void SeqListPrint(const SeqList* SL)
{
	assert(SL);
	int i;
	for ( i = 0; i < SL->size; i++)
	{
		printf("%d ", SL->a[i]);
	}
	printf("\n");
}



//尾插
void SeqListPushBack(SeqList* SL, SLDataType x)
{
	assert(SL);
	CheckCapacity(SL);
	SL->a[SL->size] = x;
	SL->size++;

}


//尾删
void SeqListPOPBack(SeqList* SL)
{
	assert(SL);
	SL->size--;
}


//头插
void SeqListPushFront(SeqList* SL, SLDataType x)
{
	assert(SL);
	CheckCapacity(SL);
	int i;
	for (i = SL->size; i >0; i--)
	{
		SL->a[i] = SL->a[i - 1];
	}
	SL->a[0] = x;
	SL->size++;
}


//头删
void SeqListPopFront(SeqList* SL)
{
	assert(SL);
	int i ;
	for (i = 0; i < SL->size-1; i++)
	{
		SL->a[i] = SL->a[i + 1];
	}
	SL->size--;

}

//顺序表在pos位置插入x
void SeqListInsert(SeqList* SL, int pos, SLDataType x)
{
	assert(SL);
	CheckCapacity(SL);
	if (pos > SL->size)
	{
		printf("插入失败\n");
		return;
	}
	else
	{
		int i;
		for ( i = SL->size; i > pos; i--)
		{
			SL->a[i] = SL->a[i - 1];
		}
	}
	SL->a[pos] = x;
	SL->size++;
}



//顺序表删除pos位置的值
void SeqListPopErase(SeqList* SL, int pos)
{
	assert(SL);
	int i;
	for (i = pos; i < SL->size - 1; i++)
	{
		SL->a[i] = SL->a[i + 1];
	}
	SL->size--;
}



//查找
void SeqListFind(const SeqList* SL, int pos)
{
	assert(SL);
	if (pos > SL->size-1)
	{
		printf("查找失败\n");
		return;
	}
	else
	{
		printf("查找成功，该位置的数字为：%d\n", SL->a[pos]);
	}



}