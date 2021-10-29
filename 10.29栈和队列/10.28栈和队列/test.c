#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"


//void test1()
//{
//	Stack ST;
//	StackInit(&ST);
//	StackPush(&ST, 1);
//	printf("%d ", StackTop(&ST));
//	StackPush(&ST, 2);
//	printf("%d ", StackTop(&ST));
//	StackPush(&ST, 3);
//	printf("%d ", StackTop(&ST));
//	StackPush(&ST, 4);
//	printf("%d ", StackTop(&ST));
//	printf("\n");
//
//	StackPop(&ST);
//	printf("%d ", StackTop(&ST));
//	StackPop(&ST);
//	printf("%d ", StackTop(&ST));
//	StackPop(&ST);
//	printf("%d ", StackTop(&ST));
//	StackPop(&ST);
//	//printf("%d ", StackTop(&ST));
//	printf("\n");
//
//
//	printf("%d ", StackSize(&ST));
//	
//
//	StackDestroy(&ST);
//}


bool isValid(char * s)
{
	Stack ST;
	StackInit(&ST);
	while (*s)
	{
		if (*s == '('
			|| *s == '['
			|| *s == '{')
		{
			StackPush(&ST, *s);          //��������ջ
		}
		else
		{
			char ch = StackTop(&ST);        //��������ջ���Ƚϣ����Ƿ�ƥ�䣻��ƥ�������������ƥ���򷵻�false
			StackPop(&ST);
			if ((ch == '(' && *s != ')')
				|| (ch == '[' && *s != ']')
				|| (ch == '{' && *s != '}'))
			{
				StackDestroy(&ST);
				return false;
			}
		}
		s++;
	}

	return true;
}



int main()
{
	//test1();
	char* ch = "()";
	isValid(ch);
	return 0;
}



