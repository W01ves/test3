#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"


void test1()
{
	Stack ST;
	StackInit(&ST);
	StackPush(&ST, 1);
	printf("%d ", StackTop(&ST));
	StackPush(&ST, 2);
	printf("%d ", StackTop(&ST));
	StackPush(&ST, 3);
	printf("%d ", StackTop(&ST));
	StackPush(&ST, 4);
	printf("%d ", StackTop(&ST));
	printf("\n");

	StackPop(&ST);
	printf("%d ", StackTop(&ST));
	StackPop(&ST);
	printf("%d ", StackTop(&ST));
	StackPop(&ST);
	printf("%d ", StackTop(&ST));
	StackPop(&ST);
	//printf("%d ", StackTop(&ST));
	printf("\n");


	printf("%d ", StackSize(&ST));
	

	StackDestroy(&ST);
}



int main()
{
	test1();
	return 0;
}



