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
//	char* p = "abcdef";    //"abcdef"��һ�������ַ������ַ��������ַ�a �ĵ�ַ��ŵ�ָ�����p��
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
//	char str2[] = "hello bit.";        //��������������  �������������ռ��������ͬ���ַ���
//	char *str3 = "hello bit.";
//	char *str4 = "hello bit.";         //"hello bit"��һ�������ַ���
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
//	//����ָ�� - ָ�������ָ��
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int (*pa)[10] = &arr;               //���*pa��˵��pa��ָ������ �� ��()����Ϊ [] ����Ը�ǿһ��
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d\n",(*pa)[i]);       //����(*pa)�ǽ����õ���˼
//	}
//	 
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;               //���*pa��˵��pa��ָ������ �� ��()����Ϊ [] ����Ը�ǿһ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(*pa+i));          //����(*pa)�ǽ����õ���˼    *pa����arr 
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
			//printf("%d ",p[i][j]);          //�ȼ�д��
			//printf("%d ",*(p[i]+j));
			//printf("%d ",(*(p+1))[j]);
			printf("%d ", *(*p + i) + j);    //p Ϊ��Ԫ�ص�ַ��*p����һά����{1,2,3,4,5}����Ϊһά����{1,2,3,4,5}����Ԫ�ص�ַ  ��ͬ�� *p+1��{2,3,4,5,6}
		}                                    // **p ��Ϊ1��*(*p)+1  Ϊ2        �ӷ����ȼ���*�ߣ�*p+i == *(p+i)
		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print(arr, 3, 5);        //arr - ��Ԫ�ص�ַ - ��ά������ ����Ԫ�ص�ַΪ��һ�е�ַ����Ԫ�ظ���Ϊ ����
	return 0;
}