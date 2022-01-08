#define _CRT_SECURE_NO_WARNINGS 1
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
typedef struct
{
	int* arr;
	int capacity;
	int top;	//元素个数.
	int* min;    //最小元素
	int i;      //min数组元素个数
} MinStack;

/** initialize your data structure here. */

MinStack* minStackCreate()
{
	MinStack* obj = (MinStack*)malloc(sizeof(MinStack));
	obj->arr = NULL;
	obj->capacity = obj->top = 0;
	obj->min = (int*)malloc(20000 * sizeof(int));
	obj->i = 0;
	return obj;
}

void minStackPush(MinStack* obj, int x)
{
	assert(obj);
	//判断数组是否为空
	if (obj->capacity == 0)
	{
		int NewCapacity = 4;
		int* p = (int*)realloc(obj->arr, NewCapacity * sizeof(int));
		if (p == NULL)
		{
			printf("动态内存分配失败");
			exit(-1);
		}
		obj->arr = p;
		obj->capacity = NewCapacity;
		//插入元素
		obj->arr[obj->top] = x;
		obj->min[obj->i] = x;
		obj->i++;
		obj->top++;
	}
	else if (obj->top == 0)		//capacity一定不为0
	{
		obj->arr[obj->top] = x;
		obj->min[obj->i] = x;
		obj->i++;
		obj->top++;
	}
	else      //capacity 和 top 都不为0
	{
		if (obj->capacity == obj->top)
		{
			obj->capacity = 2 * obj->capacity;
			int* p = (int*)realloc(obj->arr, obj->capacity * sizeof(int));
			if (p == NULL)
			{
				printf("动态内存分配失败");
				exit(-1);
			}
			obj->arr = p;
		}

		//插入元素
		obj->arr[obj->top] = x;
		if (x <= obj->min[obj->i - 1])
		{
			obj->min[obj->i] = x;
			obj->i++;
		}
		obj->top++;
	}
}

bool StackIsEmpty(MinStack* S)
{
	assert(S);
	return !S->top;
}


void minStackPop(MinStack* obj)
{
	assert(obj);
	assert(!StackIsEmpty(obj));
	if (minStackTop(obj) == obj->min[obj->i - 1])
	{
		obj->i--;
	}

	obj->top--;

}

int minStackTop(MinStack* obj)
{
	assert(obj);
	assert(!StackIsEmpty(obj));
	return obj->arr[obj->top - 1];
}

int minStackMin(MinStack* obj)
{
	assert(obj);
	assert(!StackIsEmpty(obj));
	return obj->min[obj->i - 1];
}

void minStackFree(MinStack* obj)
{
	assert(obj);
	free(obj->arr);
	obj->arr = NULL;
	obj->capacity = 0;
	obj->top = 0;
	obj->min = 0;
}


int main()
{
	MinStack* obj = minStackCreate();
	minStackPush(obj, 2147483646);
	minStackPush(obj, 2147483646);
	minStackPush(obj, 2147483646);

	int top = minStackTop(obj);
	minStackPop(obj);
	int min = minStackMin(obj);
	minStackPop(obj);
	 min = minStackMin(obj);

	minStackPop(obj);
	minStackPush(obj, 2147483646);
	min = minStackMin(obj);
	min = minStackMin(obj);

	minStackPush(obj, -2147483646);
	top = minStackTop(obj);
	min = minStackMin(obj);

	minStackPop(obj);
	 min = minStackMin(obj);

	return 0;
}