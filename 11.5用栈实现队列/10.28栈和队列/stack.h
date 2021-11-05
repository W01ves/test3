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
	int Top;		//元素个数, TOP-1则为顶部元素下标
	int Capacity;	//容量
}Stack;





// 初始化栈
void StackInit(Stack* ps);
// 入栈
void StackPush(Stack* ps, STDataType data);
// 出栈
void StackPop(Stack* ps);
// 获取栈顶元素
STDataType StackTop(Stack* ps);
// 获取栈中有效元素个数
int StackSize(Stack* ps);
// 检测栈是否为空，如果为空返回turn，如果不为空返回false
bool StackIsEmpty(Stack* ps);
// 销毁栈
void StackDestroy(Stack* ps);
