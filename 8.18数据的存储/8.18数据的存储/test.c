#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

//int main()
//{
//	int a = 20;
//	int b = -10;
//
//	return 0;
//}


////判断当前机器的字节序////
//int main()
//{
//	int a = 255;
//	char *p = (char* )&a;
//	printf("%d\n", *p);            //  *p访问一个字节
//	if (*p =1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}



/////优化/////
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
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	// a存的是 11111111
//	//整型提升  11111111111111111111111111111111
//	signed char b = -1;
//
//	unsigned char c = -1;
//	// 11111111
//	//整型提升  00000000000000000000000011111111
//	printf("a=%d,b=%d,c=%d", a, b, c);    //整型提升
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
//	// a存的是 1000 0000
//	//整型提升 11111111111111111111111110000000   -补码
//	// %u 打印无符号数   因此补码反码原码相同
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
//	printf("%d\n", sizeof(arr1));          //sizeof 计算arr所占空间的大小    1个字符占一个字节
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", strlen(arr));          //strlen 计算'\0'之前长度  \0不算字符串内容，不计入长度
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
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}


//int main()
//{
//	int a = 257;
//	char* p = &a;
//	printf("%d",*p);
//	return 0;
//}