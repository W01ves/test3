#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"


// 初始化栈
void StackInit(Stack* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->Capacity = 0;
	ps->Top = 0;
}


// 入栈
void StackPush(Stack* ps, STDataType data)
{
	assert(ps);
	//增容
	if (ps->Capacity == ps->Top)
	{
		int NewCapacity = ps->Capacity == 0 ? 4 : 2 * ps->Capacity;
		STDataType* ptr = (STDataType*)realloc(ps->a, NewCapacity *sizeof(STDataType));
		if (ptr == NULL)
		{
			perror("增容失败：");
			exit(EXIT_FAILURE);
		}
		else
		{
			ps->Capacity = NewCapacity;
			ps->a = ptr;
		}
	}
	//入栈
	ps->a[ps->Top] = data;
	ps->Top++;
}


// 出栈
void StackPop(Stack* ps)
{
	assert(ps);
	assert(ps->Top > 0);//元素格式必须大于0，元素个数为0时无法出栈

	ps->Top--;
}


// 获取栈顶元素
STDataType StackTop(Stack* ps)
{
	assert(ps);
	assert(ps->Top > 0);	//元素格式必须大于0，元素个数为0时无法访问栈顶元素

	return ps->a[ps->Top-1];

}


// 获取栈中有效元素个数
int StackSize(Stack* ps)
{
	assert(ps);

	return ps->Top;
}

// 检测栈是否为空，如果为空返回turn，如果不为空返回false
bool StackIsEmpty(Stack* ps)
{
	assert(ps);
	if (ps->Top == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}



// 销毁栈
void StackDestroy(Stack* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->Capacity = 0;
	ps->Top = 0;
}