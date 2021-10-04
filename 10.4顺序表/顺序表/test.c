#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"


void test1(SeqList* SL)
{

	SeqListPushBack(SL, 1);
	SeqListPushBack(SL, 2);
	SeqListPushBack(SL, 3);
	SeqListPushBack(SL, 4);
	SeqListPushBack(SL, 5);
	SeqListPushBack(SL, 6);
	SeqListPushBack(SL, 7);
	//SeqListPOPBack(SL);
	//SeqListPOPBack(SL);
	//SeqListPushFront(SL, 8);
	//SeqListPushFront(SL, 8);
	//SeqListPopFront(SL);
	//SeqListInsert(SL, 5, 10);
	//SeqListPopErase(SL, 2);
	//SeqListFind(SL, 3);


}




int main(){
	SeqList SL;
	SeqListInit(&SL);

	test1(&SL);


	SeqListPrint(&SL);
	SeqListDestory(&SL);
	return 0;
}