#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//int main()
//{
//	int a = 20;
//	int b = -10;
//
//	return 0;
//}


////�жϵ�ǰ�������ֽ���////
//int main()
//{
//	int a = 255;
//	char *p = (char* )&a;
//	printf("%d\n", *p);            //  *p����һ���ֽ�
//	if (*p =1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}



/////�Ż�/////
//#include <stdio.h>
//int check_sys()
//{
//	int i = 1;
//	return (*(char *)&i);
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	// a����� 11111111
//	//��������  11111111111111111111111111111111
//	signed char b = -1;
//
//	unsigned char c = -1;
//	// 11111111
//	//��������  00000000000000000000000011111111
//	printf("a=%d,b=%d,c=%d", a, b, c);    //��������
//
//	return 0;
//}


//int main()
//{
//	int a = 3.14;
//	printf("%d\n", a);
//	printf("%f\n", a);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	char a = -128;
//	// a����� 1000 0000
//	//�������� 11111111111111111111111110000000   -����
//	// %u ��ӡ�޷�����   ��˲��뷴��ԭ����ͬ
//
//	printf("%u\n", a);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}



//int main()
//{
//	char a = 128;
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	unsigned char a = -1;
//	printf("%d", a);
//	return 0;
//}


//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	ruturn 0;  
//}

//#include <string.h>
//int main()
//{
//	char arr[] = "abcdef";
//	int arr1[10] = { 1,2,3 };
//	char arr2[10] = { 1,2,3 };
//	printf("%d\n", sizeof(arr1));          //sizeof ����arr��ռ�ռ�Ĵ�С    1���ַ�ռһ���ֽ�
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", strlen(arr));          //strlen ����'\0'֮ǰ����  \0�����ַ������ݣ������볤��
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}


//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}


//int main()
//{
//	int n = 9;
//	float *pFloat = (float *)&n;
//	printf("n��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	return 0;
//}


//int main()
//{
//	int a = 257;
//	char* p = &a;
//	printf("%d",*p);
//	return 0;
//}