#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

//动态数组建栈
void StackInit(Stack* S)
{
	assert(S);
	S->arr = NULL;
	S->capacity = 0;
	S->top = 0;
}


void StackPush(Stack* S, int x)
{
	assert(S);
	//判断数组是否满了
	if (S->capacity == S->top)
	{
		S->capacity = S->capacity == 0 ? 4 : 2 * S->capacity;
		int* p = (int*)realloc(S->arr,S->capacity * sizeof(int));
		if (p == NULL)
		{
			printf("动态内存分配失败");
			exit(-1);
		}
		S->arr = p;
	}
	
	//插入元素
	S->arr[S->top] = x;
	S->top++;
}


//判空
bool StackIsEmpty(Stack* S)
{
	assert(S);
	return !S->top;
}



//出栈
void StackPop(Stack* S)
{
	assert(S);
	assert(!StackIsEmpty(S));
	S->top--;
}


//获取栈顶元素
int StackTop(Stack* S)
{
	assert(S);
	assert(!StackIsEmpty(S));
	return S->arr[S->top - 1];
}

//销毁栈
void StackFree(Stack* S)
{
	assert(S);
	free(S->arr);
	S->arr = NULL;
	S->capacity = 0;
	S->top = 0;

}



