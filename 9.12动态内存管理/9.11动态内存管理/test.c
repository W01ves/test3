#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//int main()
//{
//	//int *p = (int *)malloc(INT_MAX);		// ����ռ�
//	int *p = (int *)malloc(10 * sizeof(int));
//	if ( p == NULL)
//	{
//		//��ӡ����ԭ��ķ�ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ��
//		int i = 0;
//		for ( i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for ( i = 0; i < 10; i++)
//		{
//			printf("%d\n", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	//int *p = (int *)malloc(INT_MAX);
//	int *p = (int*)calloc(10, sizeof(int));
//	if ( p == NULL)
//	{
//		//��ӡ����ԭ��ķ�ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for ( i = 0; i < 10; i++)
//		{
//			printf("%d\n", *(p + i));
//		}
//
//	}
//	free(p);
//	p = NULL;
//
//
//	return 0;
//}

//int main()
//{
//	int *p = (int*)malloc(20);
//	if ( p == NULL)
//	{
//		//��ӡ����ԭ��ķ�ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for ( i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//
//
//	p = realloc(p, 40);
//	int i = 0;
//
//
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//
//}



//int main()
//{
//	int *ptr = (int*)malloc(100);
//	if (ptr != NULL)
//	{
//		//ҵ����
//	}
//	else
//	{
//		exit(EXIT_FAILURE);
//	}
//
//
//	//��չ����
//	//����1
//
//	ptr = (int*)realloc(ptr, 1000);//����������(����ɹ�������ôʹ�ã��������ʧ�ܻ���Σ�)
//
//
//	//����2
//	int*p = NULL;
//	p = realloc(ptr, INT_MAX);
//	if (p != NULL)
//	{
//		ptr = p;
//	}
//	
//	free(ptr);
//	return 0;
//}




int main()
{
	int *p = (int*)malloc(40);

	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		*(p + 1) = i;
	}
	free(p);	
	p = NULL;

	return 0;
}



