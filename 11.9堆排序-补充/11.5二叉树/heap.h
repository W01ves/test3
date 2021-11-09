#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <errno.h>

typedef int HpDataType;

typedef struct Heap
{
	HpDataType* a;
	int size;	//有效元素个数，size-1为末尾元素下标
	int cacpacity;	//容量
}Heap;



void AdjustUp(HpDataType* a, int child);
void AdjustDown(HpDataType* a, int n, int parent);

// 堆初始化
void HeapInit(Heap* hp);
// 堆的销毁
void HeapDestory(Heap* hp);
//打印
void HeapPrint(Heap* hp);
// 堆的插入
void HeapPush(Heap* hp, HpDataType x);
// 删除堆顶的数据
void HeapPop(Heap* hp);
// 取堆顶的数据
HpDataType HeapTop(Heap* hp);
// 堆的数据个数
int HeapSize(Heap* hp);
// 堆的判空
int HeapEmpty(Heap* hp);
//交换
void Swap(HpDataType* px, HpDataType* py);

