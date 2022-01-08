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
	int top;	//元素个数
}Stack;

//初始化栈
void StackInit(Stack* S);
//入栈
void StackPush(Stack* S, int x);
//出栈
void StackPop(Stack* S);
//获取栈顶元素
int StackTop(Stack* S);
//判空
bool StackIsEmpty(Stack* S);
//销毁栈
void StackFree(Stack* S);

