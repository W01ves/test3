#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));   //*(aa+1) 解引用数组指针，相当于得到第二行的数组名aa[1]
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));   // 10,
//	return 0;
//}


//int main()
//{
//	char* a[] = { "work","at","alibaba" };		//指针数组
//	char** pa = a;								//pa是个指针 ， 指针类型为char**
//	pa++;										//pa的值加了四
//	printf("%s\n", *(pa));
//	return 0;
//}


//int main()
//{
//	char *c[] = { "ENTER","NEW","POINT","FIRST" };
//	char**cp[] = { c + 3,c + 2,c + 1,c };
//	char***cpp = cp;
//	printf("%s\n", **++cpp);				//point       
//	printf("%s\n", *--*++cpp + 3);			//er
//	printf("%s\n", *cpp[-2] + 3);			//st
//	printf("%s\n", cpp[-1][-1] + 1);		//ew
//	return 0;
//}



////逆序字符串的内容
#include <string.h>
#include <stdio.h>
#include <assert.h>
//char* turnover(char* str)
//{
//	assert(str);
//	int n = strlen(str);
//	char* left = str;
//	char* right = str + n - 1;
//	char tep;
//	while (left < right)
//	{
//		tep = *left;
//		*left = *right;
//		*right = tep;
//		left++;
//		right--;
//	}
//	return str;
//}
//int main()
//{
//	char arr[200] = { 0 };
//	gets(arr);
//	int i;
//	int n = strlen(arr);
//	char* p = turnover(arr);
//	printf("%s\n", p);
//	return 0;
//}

#include <math.h>
//int main()
//{
//
//	int i ;			
//	for (i = 1; i < 100000; i++)
//	{
//
//		int n = 1;
//		int m = i;
//		int sum = 0;
//		while (m /=10)
//		{
//			n++;					//i是个n位数
//		}
//		//获得各位数字n次幂之和
//		m = i;
//		while (m)
//		{
//			sum += (int)pow(m % 10, n);
//			m = m / 10;
//		}
//		//判断是否为自幂数
//		if (sum == i)
//		{
//			printf("%d\n", sum);
//		}
//
//	}
//	return 0;
//}


//
//int main()
//{
//	char arr[] = "             ";
//	int n = strlen(arr);
//	int left = 6, right = 6;
//
//	while (*arr == ' ')
//	{
//		arr[left] = '*';
//		arr[right] = '*';
//		left--;
//		right++;
//		printf("%s\n", arr);
//	}
//	while (0)
//	{
//
//	}
//	return 0;
//}


//
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);
//	for ( i = 0; i < line; i++)
//	{
//		int j = 0;
//		for ( j = 1; j <line - i ; j++)
//		{
//			printf(" ");
//		}
//		for ( j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		for (j = 1; j < line - i; j++)
//		{
//			printf(" ");
//		}
//		printf("\n");
//	}
//	for ( i = 1; i < line ; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*(line - i)-1; j++)
//		{
//			printf("*");
//		}
//		for (j = 0; j < i; j++)
//		{
//			printf(" ");
//		}
//		printf("\n");
//
//	}
//	return 0;
//}


//两空瓶换气水问题//
//int main()
//{
//	int n = 20;
//	int sum = n;
//	while (n > 1)
//	{
//		sum = sum + n / 2;		//喝气水数
//		n = n / 2 + n % 2;		//剩余瓶子
//	}
//	printf("%d", sum);
//}


//void my_strcpy(char* dest, char* src)
//{
//	while (1)
//	{
//		*dest = *src;
//		if (*src == '\0')
//		{
//			break;
//		}
//		dest++;
//		src++;
//	}
//
//}
//int main()
//{
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for ( i = 0; i < 13; i++)
//	{
//		arr[i] = 0;
//		printf("qqq");
//
//	}
//
//
//	return 0;
//}




int main()
