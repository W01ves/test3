#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <errno.h>
#include <assert.h>


typedef int STDataType;

typedef struct Stack
{
	STDataType* a;
	int Top;		//Ԫ�ظ���, TOP-1��Ϊ����Ԫ���±�
	int Capacity;	//����
}Stack;





// ��ʼ��ջ
void StackInit(Stack* ps);
// ��ջ
void StackPush(Stack* ps, STDataType data);
// ��ջ
void StackPop(Stack* ps);
// ��ȡջ��Ԫ��
STDataType StackTop(Stack* ps);
// ��ȡջ����ЧԪ�ظ���
int StackSize(Stack* ps);
// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ���turn�������Ϊ�շ���false
bool StackIsEmpty(Stack* ps);
// ����ջ
void StackDestroy(Stack* ps);
