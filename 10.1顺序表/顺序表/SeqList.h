#pragma once


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




//��̬˳�����ƣ���С�ɱ䣩
typedef int SLDataType;

typedef struct SeqList
{
	SLDataType * a;;
	int size;		//���˼�����Ч����
	int capacity;	//�ռ������Ĵ�С
}SL;


//������ɾ��Ľӿ�
//��ʼ��
void SeqListInit();
//����
void SeqListDestory();
//��ӡ
void SeqListPrint();
//���ռ䣬������ˣ���������
void CheckCapacity();
//˳���β��
void SeqListPushBack();
//βɾ
void SeqListPOPBack();
//ͷ��
void SeqListPushFront();
//ͷɾ
void SeqListPopFront();
//����
void SeqListFind();
//˳�����posλ�ò���x
void SeqListInsert();
//˱����ɾ��posλ�õ�ֵ
void SeqListPopErase();