#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <errno.h>

typedef int HpDataType;

typedef struct Heap
{
	HpDataType* a;
	int size;	//��ЧԪ�ظ�����size-1ΪĩβԪ���±�
	int cacpacity;	//����
}Heap;



void AdjustUp(HpDataType* a, int child);
void AdjustDown(HpDataType* a, int n, int parent);

// �ѳ�ʼ��
void HeapInit(Heap* hp);
// �ѵ�����
void HeapDestory(Heap* hp);
//��ӡ
void HeapPrint(Heap* hp);
// �ѵĲ���
void HeapPush(Heap* hp, HpDataType x);
// ɾ���Ѷ�������
void HeapPop(Heap* hp);
// ȡ�Ѷ�������
HpDataType HeapTop(Heap* hp);
// �ѵ����ݸ���
int HeapSize(Heap* hp);
// �ѵ��п�
int HeapEmpty(Heap* hp);
//����
void Swap(HpDataType* px, HpDataType* py);

