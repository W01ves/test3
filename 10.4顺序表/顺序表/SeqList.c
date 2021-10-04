#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

//��ʼ��
void SeqListInit(SeqList* SL)
{
	SLDataType* p = (SLDataType*)malloc( DEFAULT_CAPACITY * sizeof(SLDataType));
	if (p != NULL)
	{
		SL->a = p;
	}
	else
	{
		perror("��ʼ��ʧ�ܣ�");
		exit(EXIT_FAILURE);
	}
	SL->size = 0;
	SL->capacity = DEFAULT_CAPACITY;
}

//����
void SeqListDestory(SeqList* SL)
{
	free(SL->a);
	SL->a = NULL;
	printf("���ٳɹ�\n");
}


//����
void CheckCapacity(SeqList* SL)
{
	assert(SL);
	if (SL->size == SL->capacity)
	{
		SLDataType* p = realloc(SL->a, (2*SL->capacity) * sizeof(SLDataType));
		if (p!=NULL)
		{
			SL->a = p;
			printf("���ݳɹ�\n");
			SL->capacity *=2;
		}
		else
		{
			perror("����ʧ�ܣ�");
			return;
		}

	}
}



//��ӡ
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



//β��
void SeqListPushBack(SeqList* SL, SLDataType x)
{
	assert(SL);
	CheckCapacity(SL);
	SL->a[SL->size] = x;
	SL->size++;

}


//βɾ
void SeqListPOPBack(SeqList* SL)
{
	assert(SL);
	SL->size--;
}


//ͷ��
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


//ͷɾ
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

//˳�����posλ�ò���x
void SeqListInsert(SeqList* SL, int pos, SLDataType x)
{
	assert(SL);
	CheckCapacity(SL);
	if (pos > SL->size)
	{
		printf("����ʧ��\n");
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



//˳���ɾ��posλ�õ�ֵ
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



//����
void SeqListFind(const SeqList* SL, int pos)
{
	assert(SL);
	if (pos > SL->size-1)
	{
		printf("����ʧ��\n");
		return;
	}
	else
	{
		printf("���ҳɹ�����λ�õ�����Ϊ��%d\n", SL->a[pos]);
	}



}