#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	char *p = arr;
//	printf("%s\n", p);
//	printf("%c\n", *p);
//	printf("%c\n", *(p+1));
//	return 0;
//}


//int main()
//{	
//	char* p = "abcdef";    //"abcdef"是一个常量字符串，字符串的首字符a 的地址存放到指针变量p中
//	printf("%s\n", p);
//	printf("%c\n", *p);
//	printf("%s\n", "ac\0c");
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	*pc = 'W';
//	printf("%s\n", pc);
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit.";       
//	char str2[] = "hello bit.";        //创建了两个数组  ，创建了两个空间放入了相同的字符串
//	char *str3 = "hello bit.";
//	char *str4 = "hello bit.";         //"hello bit"是一个常量字符串
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for ( i = 0; i < 3	; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < 5; j++)
//		{
//			printf("%d", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}




//int main()
//{
//	int* p = NULL;
//	char* p = NULL;
//	//数组指针 - 指向数组的指针
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int (*pa)[10] = &arr;               //这里（*pa）说明pa是指针类型 ， 加()是因为 [] 结合性更强一点
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d\n",(*pa)[i]);       //这里(*pa)是解引用的意思
//	}
//	 
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;               //这里（*pa）说明pa是指针类型 ， 加()是因为 [] 结合性更强一点
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(*pa+i));          //这里(*pa)是解引用的意思    *pa就是arr 
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int *p = arr;              
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p+i));          
//	}
//
//	return 0;
//}


void print(int (*p)[5], int x, int y)
{
	int i = 0, j = 0;
	for ( i = 0; i < x; i++)
	{
		for ( j = 0; j < y; j++)
		{
			//printf("%d ",p[i][j]);          //等价写法
			//printf("%d ",*(p[i]+j));
			//printf("%d ",(*(p+1))[j]);
			printf("%d ", *(*p + i) + j);    //p 为首元素地址，*p代表一维数组{1,2,3,4,5}，即为一维数组{1,2,3,4,5}的首元素地址  ，同理 *p+1是{2,3,4,5,6}
		}                                    // **p 则为1，*(*p)+1  为2        加法优先级比*高：*p+i == *(p+i)
		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print(arr, 3, 5);        //arr - 首元素地址 - 二维数组中 ，首元素地址为第一行地址，总元素个数为 行数
	return 0;
}