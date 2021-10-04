#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
////  ˳�����Ч�����������б���ʹ������
////	��̬˳�����ƣ��̶���С��
//typedef int SLDataType;
//#define N 10
//
//struct SeqList
//{
//	SLDataType a[N];
//	int size;		//���˼�����Ч����
//};
//
//
//void SeqListPushBack(struct SeqList* ps, SLDataType x);
//void SeqListPOPBack(struct SeqList* ps);
//void SeqListPushFront(struct SeqList* ps, SLDataType x);
//void SeqListPopFront(struct SeqList* ps);

#define	DEFAULT_CAPACITY 4


//��̬˳�����ƣ���С�ɱ䣩
typedef int SLDataType;

typedef struct SeqList
{
	SLDataType * a;
	int size;		//���˼�����Ч����
	int capacity;	//�ռ������Ĵ�С
}SeqList;


//������ɾ��Ľӿ�
//��ʼ��
void SeqListInit(SeqList* SL);
//����
void SeqListDestory(SeqList* SL);
//��ӡ
void SeqListPrint(const SeqList* SL);
//���ռ䣬������ˣ���������
void CheckCapacity(SeqList* SL);
//β��
void SeqListPushBack(SeqList* SL, SLDataType x);
//βɾ
void SeqListPOPBack(SeqList* SL);
//ͷ��
void SeqListPushFront(SeqList* SL, SLDataType x);
//ͷɾ
void SeqListPopFront(SeqList* SL);
//����
void SeqListFind(const SeqList* SL, int pos);
//˳�����posλ�ò���x
void SeqListInsert(SeqList* SL, int pos,SLDataType x);
//˳���ɾ��posλ�õ�ֵ
void SeqListPopErase(SeqList* SL, int pos);
