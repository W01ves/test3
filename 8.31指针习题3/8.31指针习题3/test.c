#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
////杨辉三角
//int main()
//{	
//	int arr[10][10] = { 0 };
//	int i ,j;
//	for ( i = 0; i < 10; i++)
//	{
//
//		arr[i][0] = 1;
//
//		for ( j = 1; j < i; j++)
//		{
//			arr[i][j] = arr[i - 1][j-1] + arr[i - 1][j ];
//		}
//		arr[i][i] = 1;
//
//	}
//
//	for ( i = 0; i < 10; i++)
//	{
//		for ( j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}


//赛马问题：36匹马，没有计时器，请赛马确定，36匹马中的前三名
//赛马问题：25匹马，没有计时器，请赛马确定，25匹马中的前三名
//烧香问题：有一种香，材质不均匀，但是每一根燃烧完恰好是一个小时，给你两根香，确定一个十五分钟的时间段



//int main()
//{
//	int a[5] = { 5,4,3,2,1 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));		//4 , 1
//
//	return 0;
//}

