#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"


// ��ʼ��ջ
void StackInit(Stack* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->Capacity = 0;
	ps->Top = 0;
}


// ��ջ
void StackPush(Stack* ps, STDataType data)
{
	assert(ps);
	//����
	if (ps->Capacity == ps->Top)
	{
		int NewCapacity = ps->Capacity == 0 ? 4 : 2 * ps->Capacity;
		STDataType* ptr = (STDataType*)realloc(ps->a, NewCapacity *sizeof(STDataType));
		if (ptr == NULL)
		{
			perror("����ʧ�ܣ�");
			exit(EXIT_FAILURE);
		}
		else
		{
			ps->Capacity = NewCapacity;
			ps->a = ptr;
		}
	}
	//��ջ
	ps->a[ps->Top] = data;
	ps->Top++;
}


// ��ջ
void StackPop(Stack* ps)
{
	assert(ps);
	assert(ps->Top > 0);//Ԫ�ظ�ʽ�������0��Ԫ�ظ���Ϊ0ʱ�޷���ջ

	ps->Top--;
}


// ��ȡջ��Ԫ��
STDataType StackTop(Stack* ps)
{
	assert(ps);
	assert(ps->Top > 0);	//Ԫ�ظ�ʽ�������0��Ԫ�ظ���Ϊ0ʱ�޷�����ջ��Ԫ��

	return ps->a[ps->Top-1];

}


// ��ȡջ����ЧԪ�ظ���
int StackSize(Stack* ps)
{
	assert(ps);

	return ps->Top;
}

// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ���turn�������Ϊ�շ���false
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



// ����ջ
void StackDestroy(Stack* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->Capacity = 0;
	ps->Top = 0;
}