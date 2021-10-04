#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
////  顺序表，有效数据在数组中必须使连续的
////	静态顺序表设计（固定大小）
//typedef int SLDataType;
//#define N 10
//
//struct SeqList
//{
//	SLDataType a[N];
//	int size;		//存了几个有效数据
//};
//
//
//void SeqListPushBack(struct SeqList* ps, SLDataType x);
//void SeqListPOPBack(struct SeqList* ps);
//void SeqListPushFront(struct SeqList* ps, SLDataType x);
//void SeqListPopFront(struct SeqList* ps);

#define	DEFAULT_CAPACITY 4


//动态顺序表设计（大小可变）
typedef int SLDataType;

typedef struct SeqList
{
	SLDataType * a;
	int size;		//存了几个有效数据
	int capacity;	//空间容量的大小
}SeqList;


//基本增删查改接口
//初始化
void SeqListInit(SeqList* SL);
//销毁
void SeqListDestory(SeqList* SL);
//打印
void SeqListPrint(const SeqList* SL);
//检查空间，如果满了，进行增容
void CheckCapacity(SeqList* SL);
//尾插
void SeqListPushBack(SeqList* SL, SLDataType x);
//尾删
void SeqListPOPBack(SeqList* SL);
//头插
void SeqListPushFront(SeqList* SL, SLDataType x);
//头删
void SeqListPopFront(SeqList* SL);
//查找
void SeqListFind(const SeqList* SL, int pos);
//顺序表在pos位置插入x
void SeqListInsert(SeqList* SL, int pos,SLDataType x);
//顺序表删除pos位置的值
void SeqListPopErase(SeqList* SL, int pos);
