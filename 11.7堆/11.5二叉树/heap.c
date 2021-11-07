#define _CRT_SECURE_NO_WARNINGS 1
#include "heap.h"

// �ѳ�ʼ��
void HeapInit(Heap* hp)
{
	assert(hp);
	hp->a = NULL;
	hp->cacpacity = hp->size = 0;
}

// �ѵ�����
void HeapDestory(Heap* hp)
{
	assert(hp);
	free(hp->a);
	hp->cacpacity = hp->size = 0;
}

//��ӡ
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

// �ѵ��п�
int HeapEmpty(Heap* hp)
{
	assert(hp);
	return hp->size == 0;
}

// �ѵ����ݸ���
int HeapSize(Heap* hp)
{
	assert(hp);
	return hp->size;
}

//����
void Swap(HpDataType* px, HpDataType* py)
{
	HpDataType tmp = *px;
	*px = *py;
	*py = tmp;
}

//�ϵ�
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


// �ѵĲ���
void HeapPush(Heap* hp, HpDataType x)
{
	assert(hp);
	//����
	if (hp->cacpacity == hp->size)
	{
		int NewCapacity = hp->cacpacity == 0 ? 4 : 2 * hp->cacpacity;
		HpDataType* p = (HpDataType*)realloc(hp->a, NewCapacity * sizeof(HpDataType));
		if (p == NULL)
		{
			perror("����ʧ��");
			exit(-1);
		}
		hp->a = p;
		hp->cacpacity = NewCapacity;
	}

	//����Ԫ��
	hp->a[hp->size] = x;
	hp->size++;
	//������ϵ���
	AdjustUp(hp->a, hp->size-1);

}


//�µ�
void AdjustDown(HpDataType* a, int n, int parent)
{
	
	while (2*parent+1 < n)	//break ���� �����һ��/�޺��� ʱ����ѭ��
	{
		int child = 2 * parent + 1;	//Ĭ������
		if (child+1 < n && a[child+1] < a[child])		//���Һ����Ƿ���� �������Һ��ӱ����Ӵ�
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


// ɾ���Ѷ�������
void HeapPop(Heap* hp)
{
	assert(hp);
	assert(!HeapEmpty(hp));

	//������βԪ��
	hp->a[0] = hp->a[hp->size - 1];
	hp->size--;
	//�µ�
	AdjustDown(hp->a, hp->size, 0);

}


// ȡ�Ѷ�������
HpDataType HeapTop(Heap* hp)
{
	assert(hp);
	assert(!HeapEmpty(hp));

	return hp->a[0];
}
