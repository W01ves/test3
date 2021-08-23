#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

////习题/////
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));			//16    sizeof(数组名)-计算的是数组总大小 
//	printf("%d\n", sizeof(a + 0));		//4/8*  首元素地址，地址大小4/8
//	printf("%d\n", sizeof(*a));			//4		首元素大小
//	printf("%d\n", sizeof(a + 1));		//4*	第二个元素的地址
//	printf("%d\n", sizeof(a[1]));		//4		第二个元素大小
//	printf("%d\n", sizeof(&a));			//4		整个数组的地址，地址的大小就是4/8个字节
//	printf("%d\n", sizeof(*&a));		//16*	数组的地址 解引用访问 数组，计算数组的大小
//	printf("%d\n", sizeof(&a + 1));		//4		跳过整个数组后的地址
//	printf("%d\n", sizeof(&a[0]));		//4		a[0]的地址
//	printf("%d\n", sizeof(&a[0] + 1));	//4		a[1]的地址
//	return 0;
//}


//////字符数组////

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));		//6		sizeof(数组名)
//	printf("%d\n", sizeof(arr + 0));	//4		首元素地址
//	printf("%d\n", sizeof(*arr));		//1		首元素大小
//	printf("%d\n", sizeof(arr[1]));		//1		第二个元素大小
//	printf("%d\n", sizeof(&arr));		//4		整个数组的地址
//	printf("%d\n", sizeof(&arr + 1));	//4		跳过整个数组后的地址
//	printf("%d\n", sizeof(&arr[0] + 1));//4		第二个元素的地址
//
//	printf("%d\n", strlen(arr));		//随机数
//	printf("%d\n", strlen(arr + 0));	//随机数
//	printf("%d\n", strlen(*arr));		//err** 传过去的是字符'a',他的ASCII码为97，把97当作地址传过去了，造成非法访问
//	printf("%d\n", strlen(arr[1]));		//err   size_t strlen ( const char * str );  参数类型为 const char*，即地址
//	printf("%d\n", strlen(&arr));		//随机数	
//	printf("%d\n", strlen(&arr + 1));	//随机数-6
//	printf("%d\n", strlen(&arr[0] + 1));//随机数-1
//
//	char arr[] = "abcdef";		
//	printf("%d\n", sizeof(arr));		//7     sizeof(数组名)，计算整个数组大小
//	printf("%d\n", sizeof(arr + 0));	//4		首字符地址
//	printf("%d\n", sizeof(*arr));		//1		
//	printf("%d\n", sizeof(arr[1]));		//1
//	printf("%d\n", sizeof(&arr));		//4
//	printf("%d\n", sizeof(&arr + 1));	//4		
//	printf("%d\n", sizeof(&arr[0] + 1));//4		
//
//	printf("%d\n", strlen(arr));		//6
//	printf("%d\n", strlen(arr + 0));	//6
//	printf("%d\n", strlen(*arr));		//err
//	printf("%d\n", strlen(arr[1]));		//err
//	printf("%d\n", strlen(&arr));		//6	  //&arr的值是数组的地址--数组指针--char (*p)[7]= &arr --类型为 char (*)[7]
//	printf("%d\n", strlen(&arr + 1));	//随机值	
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//	char *p = "abcdef";					// p 是个字符指针    p的值是常量字符串首元素地址  a的地址
//	printf("%d\n", sizeof(p));			//4*    计算指针变量p的大小
//	printf("%d\n", sizeof(p + 1));		//4		字符b的地址
//	printf("%d\n", sizeof(*p));			//1		字符a的大小
//	printf("%d\n", sizeof(p[0]));		//1		p[0] = *(p+0)
//	printf("%d\n", sizeof(&p));			//4		指针的地址
//	printf("%d\n", sizeof(&p + 1));		//4		
//	printf("%d\n", sizeof(&p[0] + 1));	//4		字符b的地址
//
//	printf("%d\n", strlen(p));			//6		
//	printf("%d\n", strlen(p + 1));		//5
//	printf("%d\n", strlen(*p));			//err
//	printf("%d\n", strlen(p[0]));		//err
//	printf("%d\n", strlen(&p));			//随机值
//	printf("%d\n", strlen(&p + 1));		//随机值
//	printf("%d\n", strlen(&p[0] + 1));	//5
//	return 0;
//}


//二维数组//						
//int main()	
//{
//	int a[3][4] = { 0 };					//		二维数组首元素就是第一行
//	printf("%d\n", sizeof(a));				//48	sizeof(数组名)，计算整个数组大小
//	printf("%d\n", sizeof(a[0][0]));		//4		一个整型元素的大小
//	printf("%d\n", sizeof(a[0]));			//16	二维数组首元素地址，a[0]相当于第一行作为一维数组的数组名，sizeof(数组名)，计算第一行的大小
//	printf("%d\n", sizeof(a[0] + 1));		//4*	a[0]在表达式中，表示第一行第一个元素地址，a[0]+1为第一行第二个元素地址
//	printf("%d\n", sizeof(*(a[0] + 1)));	//4		第一行第二个元素的大小
//	printf("%d\n", sizeof(a + 1));			//4*	a是二维数组的数组名，a在表达式中，没有sizeof(数组名)，也没有&数组名，
//											//		则a是首元素地址，而二维数组的首元素是第一行，a就是第一行地址，a+1是第二行的地址，地址的大小
//	printf("%d\n", sizeof(*(a + 1)));		//16*	a+1是第二行的地址，解引用访问第二行，即sizeof(a[1]),计算第二行的大小
//	printf("%d\n", sizeof(&a[0] + 1));		//4		&数组名，第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));	//16	解引用访问第二行，计算第二行大小
//	printf("%d\n", sizeof(*a));				//16	第一行的大小
//	printf("%d\n", sizeof(a[3]));			//16	sizeof不会访问实际数组，更具类型计算大小
//	return 0;
//}





//int main()
//{
//
//	int arr[5] = { 1,2,3,4,5 };
//	int (*p)[5] = &arr;
//	printf("%d\n", sizeof(arr));		//20	sizeof(数组名)
//	printf("%d\n", sizeof(&arr));		//4 	整个数组的地址	
//	printf("%d\n", sizeof(*&arr));		//20	访问整个数组
//	printf("%d\n", sizeof(p));			//4		地址大小
//	printf("%d\n", sizeof(*p));			//4		？？？
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int(*p)[4] = &a;			//数组指针
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(*p));
//	printf("%d\n", (*p)[1]);
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* p = (int*)&a;			//数组指针
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(*p));
//	printf("%d\n", p[1]);
//	return 0;
//}



//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };		
//	int *ptr = (int *)(&a + 1);		  //(&a+1) 是 整个数组之后的地址,类型是数组指针类型  强制转化成int*型   放入整型指针ptr中
//	printf("%d,%d", *(a + 1), *(ptr - 1));   // 2 , 5
//	return 0;
//}




//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);		//(&a+1) 是 整个数组之后的地址,类型是数组指针类型  强制转化成int*型   放入整型指针ptr中
//	int *ptr2 = (int *)((int)a + 1);		//a 首元素地址  强制转换成 int ， 
//	printf("%x,%x", ptr1[-1], *ptr2);		//    ptr1[-1] 为 a[3]，  
//	return 0;
//}



//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int *p;						//  整型指针 
//	p = a[0];					//a[0] 为  第一行地址      ，数组指针     ，存放不下   p为第一行第一个元素地址
//	printf("%d", p[0]);			//1
//	return 0;
//}


//int main()
//{
//	int a[5][5];
//	int(*p)[4];		 
//	p = a;			
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);    
//	return 0;
//}


int main()
{
	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *ptr1 = (int *)(&aa + 1);
	int *ptr2 = (int *)(*(aa + 1));
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
	return 0;
}
