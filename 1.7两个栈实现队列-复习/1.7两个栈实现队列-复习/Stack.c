#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

//��̬���齨ջ
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
	//�ж������Ƿ�����
	if (S->capacity == S->top)
	{
		S->capacity = S->capacity == 0 ? 4 : 2 * S->capacity;
		int* p = (int*)realloc(S->arr,S->capacity * sizeof(int));
		if (p == NULL)
		{
			printf("��̬�ڴ����ʧ��");
			exit(-1);
		}
		S->arr = p;
	}
	
	//����Ԫ��
	S->arr[S->top] = x;
	S->top++;
}


//�п�
bool StackIsEmpty(Stack* S)
{
	assert(S);
	return !S->top;
}



//��ջ
void StackPop(Stack* S)
{
	assert(S);
	assert(!StackIsEmpty(S));
	S->top--;
}


//��ȡջ��Ԫ��
int StackTop(Stack* S)
{
	assert(S);
	assert(!StackIsEmpty(S));
	return S->arr[S->top - 1];
}

//����ջ
void StackFree(Stack* S)
{
	assert(S);
	free(S->arr);
	S->arr = NULL;
	S->capacity = 0;
	S->top = 0;

}



