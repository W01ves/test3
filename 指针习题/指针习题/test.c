#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

////ϰ��/////
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));			//16    sizeof(������)-������������ܴ�С 
//	printf("%d\n", sizeof(a + 0));		//4/8*  ��Ԫ�ص�ַ����ַ��С4/8
//	printf("%d\n", sizeof(*a));			//4		��Ԫ�ش�С
//	printf("%d\n", sizeof(a + 1));		//4*	�ڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(a[1]));		//4		�ڶ���Ԫ�ش�С
//	printf("%d\n", sizeof(&a));			//4		��������ĵ�ַ����ַ�Ĵ�С����4/8���ֽ�
//	printf("%d\n", sizeof(*&a));		//16*	����ĵ�ַ �����÷��� ���飬��������Ĵ�С
//	printf("%d\n", sizeof(&a + 1));		//4		�������������ĵ�ַ
//	printf("%d\n", sizeof(&a[0]));		//4		a[0]�ĵ�ַ
//	printf("%d\n", sizeof(&a[0] + 1));	//4		a[1]�ĵ�ַ
//	return 0;
//}


//////�ַ�����////

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));		//6		sizeof(������)
//	printf("%d\n", sizeof(arr + 0));	//4		��Ԫ�ص�ַ
//	printf("%d\n", sizeof(*arr));		//1		��Ԫ�ش�С
//	printf("%d\n", sizeof(arr[1]));		//1		�ڶ���Ԫ�ش�С
//	printf("%d\n", sizeof(&arr));		//4		��������ĵ�ַ
//	printf("%d\n", sizeof(&arr + 1));	//4		�������������ĵ�ַ
//	printf("%d\n", sizeof(&arr[0] + 1));//4		�ڶ���Ԫ�صĵ�ַ
//
//	printf("%d\n", strlen(arr));		//�����
//	printf("%d\n", strlen(arr + 0));	//�����
//	printf("%d\n", strlen(*arr));		//err** ����ȥ�����ַ�'a',����ASCII��Ϊ97����97������ַ����ȥ�ˣ���ɷǷ�����
//	printf("%d\n", strlen(arr[1]));		//err   size_t strlen ( const char * str );  ��������Ϊ const char*������ַ
//	printf("%d\n", strlen(&arr));		//�����	
//	printf("%d\n", strlen(&arr + 1));	//�����-6
//	printf("%d\n", strlen(&arr[0] + 1));//�����-1
//
//	char arr[] = "abcdef";		
//	printf("%d\n", sizeof(arr));		//7     sizeof(������)���������������С
//	printf("%d\n", sizeof(arr + 0));	//4		���ַ���ַ
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
//	printf("%d\n", strlen(&arr));		//6	  //&arr��ֵ������ĵ�ַ--����ָ��--char (*p)[7]= &arr --����Ϊ char (*)[7]
//	printf("%d\n", strlen(&arr + 1));	//���ֵ	
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//	char *p = "abcdef";					// p �Ǹ��ַ�ָ��    p��ֵ�ǳ����ַ�����Ԫ�ص�ַ  a�ĵ�ַ
//	printf("%d\n", sizeof(p));			//4*    ����ָ�����p�Ĵ�С
//	printf("%d\n", sizeof(p + 1));		//4		�ַ�b�ĵ�ַ
//	printf("%d\n", sizeof(*p));			//1		�ַ�a�Ĵ�С
//	printf("%d\n", sizeof(p[0]));		//1		p[0] = *(p+0)
//	printf("%d\n", sizeof(&p));			//4		ָ��ĵ�ַ
//	printf("%d\n", sizeof(&p + 1));		//4		
//	printf("%d\n", sizeof(&p[0] + 1));	//4		�ַ�b�ĵ�ַ
//
//	printf("%d\n", strlen(p));			//6		
//	printf("%d\n", strlen(p + 1));		//5
//	printf("%d\n", strlen(*p));			//err
//	printf("%d\n", strlen(p[0]));		//err
//	printf("%d\n", strlen(&p));			//���ֵ
//	printf("%d\n", strlen(&p + 1));		//���ֵ
//	printf("%d\n", strlen(&p[0] + 1));	//5
//	return 0;
//}


//��ά����//						
//int main()	
//{
//	int a[3][4] = { 0 };					//		��ά������Ԫ�ؾ��ǵ�һ��
//	printf("%d\n", sizeof(a));				//48	sizeof(������)���������������С
//	printf("%d\n", sizeof(a[0][0]));		//4		һ������Ԫ�صĴ�С
//	printf("%d\n", sizeof(a[0]));			//16	��ά������Ԫ�ص�ַ��a[0]�൱�ڵ�һ����Ϊһά�������������sizeof(������)�������һ�еĴ�С
//	printf("%d\n", sizeof(a[0] + 1));		//4*	a[0]�ڱ��ʽ�У���ʾ��һ�е�һ��Ԫ�ص�ַ��a[0]+1Ϊ��һ�еڶ���Ԫ�ص�ַ
//	printf("%d\n", sizeof(*(a[0] + 1)));	//4		��һ�еڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(a + 1));			//4*	a�Ƕ�ά�������������a�ڱ��ʽ�У�û��sizeof(������)��Ҳû��&��������
//											//		��a����Ԫ�ص�ַ������ά�������Ԫ���ǵ�һ�У�a���ǵ�һ�е�ַ��a+1�ǵڶ��еĵ�ַ����ַ�Ĵ�С
//	printf("%d\n", sizeof(*(a + 1)));		//16*	a+1�ǵڶ��еĵ�ַ�������÷��ʵڶ��У���sizeof(a[1]),����ڶ��еĴ�С
//	printf("%d\n", sizeof(&a[0] + 1));		//4		&���������ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));	//16	�����÷��ʵڶ��У�����ڶ��д�С
//	printf("%d\n", sizeof(*a));				//16	��һ�еĴ�С
//	printf("%d\n", sizeof(a[3]));			//16	sizeof�������ʵ�����飬�������ͼ����С
//	return 0;
//}





//int main()
//{
//
//	int arr[5] = { 1,2,3,4,5 };
//	int (*p)[5] = &arr;
//	printf("%d\n", sizeof(arr));		//20	sizeof(������)
//	printf("%d\n", sizeof(&arr));		//4 	��������ĵ�ַ	
//	printf("%d\n", sizeof(*&arr));		//20	������������
//	printf("%d\n", sizeof(p));			//4		��ַ��С
//	printf("%d\n", sizeof(*p));			//4		������
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int(*p)[4] = &a;			//����ָ��
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(*p));
//	printf("%d\n", (*p)[1]);
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* p = (int*)&a;			//����ָ��
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(*p));
//	printf("%d\n", p[1]);
//	return 0;
//}



//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };		
//	int *ptr = (int *)(&a + 1);		  //(&a+1) �� ��������֮��ĵ�ַ,����������ָ������  ǿ��ת����int*��   ��������ָ��ptr��
//	printf("%d,%d", *(a + 1), *(ptr - 1));   // 2 , 5
//	return 0;
//}




//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);		//(&a+1) �� ��������֮��ĵ�ַ,����������ָ������  ǿ��ת����int*��   ��������ָ��ptr��
//	int *ptr2 = (int *)((int)a + 1);		//a ��Ԫ�ص�ַ  ǿ��ת���� int �� 
//	printf("%x,%x", ptr1[-1], *ptr2);		//    ptr1[-1] Ϊ a[3]��  
//	return 0;
//}



//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int *p;						//  ����ָ�� 
//	p = a[0];					//a[0] Ϊ  ��һ�е�ַ      ������ָ��     ����Ų���   pΪ��һ�е�һ��Ԫ�ص�ַ
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
