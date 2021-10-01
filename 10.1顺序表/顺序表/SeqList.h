#pragma once


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




//动态顺序表设计（大小可变）
typedef int SLDataType;

typedef struct SeqList
{
	SLDataType * a;;
	int size;		//存了几个有效数据
	int capacity;	//空间容量的大小
}SL;


//基本增删查改接口
//初始化
void SeqListInit();
//销毁
void SeqListDestory();
//打印
void SeqListPrint();
//检查空间，如果满了，进行增容
void CheckCapacity();
//顺序表尾插
void SeqListPushBack();
//尾删
void SeqListPOPBack();
//头插
void SeqListPushFront();
//头删
void SeqListPopFront();
//查找
void SeqListFind();
//顺序表在pos位置插入x
void SeqListInsert();
//吮吸表删除pos位置的值
void SeqListPopErase();