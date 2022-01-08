#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>

//#define DataType int;

typedef struct Stack
{
	int* arr;
	int capacity;
	int top;	//Ԫ�ظ���
}Stack;

//��ʼ��ջ
void StackInit(Stack* S);
//��ջ
void StackPush(Stack* S, int x);
//��ջ
void StackPop(Stack* S);
//��ȡջ��Ԫ��
int StackTop(Stack* S);
//�п�
bool StackIsEmpty(Stack* S);
//����ջ
void StackFree(Stack* S);

