#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1};
//	int *ptr1 = (int*)(&aa + 1);			
//	int *ptr2 = (int*)(*(aa + 1));   
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));		//1 6
//	return 0;
//}

////////字符串左旋转

//暴力求解法

//char* left_move(char* str, int k)
//{
//	char tep;
//	char* sta;
//	k = k % (int)strlen(str);		// 翻转次数大于字符串长度，求余数，减少循环次数
//	while (k--)
//	{
//		sta = str;		//sta存首元素地址
//		tep = *str;	    //tep存字符串首元素
//		while (*(sta + 1))				//str没还原，创建其他变量
//		{
//			*sta = *(sta+1);		
//			sta++;
//		}
//		*sta = tep;		
//	}
//	return str;
//}

//三部翻转法
//abcdef
//bafedc		dcba fe
//cdefab		efabcd

//void reverse(char* left, char* right)
//{
//	char tep;	//临时变量
//	while (right >= left)
//	{
//		tep = *left;
//		*left = *right;
//		*right = tep;
//		right--;
//		left++;
//	}
//}
//void left_move(char* str, int k)
//{
//	assert(str);
//	k = k % (int)strlen(str);
//	int len = strlen(str);
//	reverse(str, str + k - 1);			//前k个翻转
//	reverse(str + k, str + len - 1);		//后面所有翻转
//	reverse(str, str + len - 1);			//全部翻转
//}
//void right_move(char* str, int k)
//{
//	assert(str);
//	k = k % (int)strlen(str);
//	int len = strlen(str);
//	reverse(str + len - k, str + len - 1);				//后k个翻转
//	reverse(str , str + len - k - 1);		//前面所有翻转
//	reverse(str, str + len - 1);			//全部翻转
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k= 2;
//	right_move(arr,k);
//	printf("%s", arr);
//	return 0;
//}



////////////判断一个字符串是否是另一个字符串旋转之后的字符串

//穷举法
//void reverse(char* left, char* right)
//{
//	char tep;	//临时变量
//	while (right >= left)
//	{
//		tep = *left;
//		*left = *right;
//		*right = tep;
//		right--;
//		left++;
//	}
//}
//void left_move(char* str, int k)
//{
//	assert(str);
//	k = k % (int)strlen(str);
//	int len = strlen(str);
//	reverse(str, str + k - 1);				//前k个翻转
//	reverse(str + k, str + len - 1);		//后面所有翻转
//	reverse(str, str + len - 1);			//全部翻转
//}
//void right_move(char* str, int k)
//{
//	assert(str);
//	k = k % (int)strlen(str);
//	int len = strlen(str);
//	reverse(str + len - k, str + len - 1);	//后k个翻转
//	reverse(str, str + len - k - 1);		//前面所有翻转
//	reverse(str, str + len - 1);			//全部翻转
//}
//
//int  is_move(char* str1, char* str2)	
//{
//	int len1 = strlen(str1);
//	int i;
//	for ( i = 0; i < len1; i++)
//	{
//		left_move(str1, 1);
//		if (strcmp(str1 , str2) == 0)
//		{
//			return 1;
//		}
//	}
//	for (i = 0; i < len1; i++)
//	{
//		right_move(str1, 1);
//		if (strcmp(str1, str2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int result = is_move(arr1, arr2);	//判断arr2 是否是 arr1旋转之后的
//	printf("%d", result);
//	return 0;
//}



void reverse(char* left, char* right)
{
	char tep;	//临时变量
	while (right >= left)
	{
		tep = *left;
		*left = *right;
		*right = tep;
		right--;
		left++;
	}
}
void left_move(char* str, int k)
{
	assert(str);
	k = k % (int)strlen(str);
	int len = strlen(str);
	reverse(str, str + k - 1);				//前k个翻转
	reverse(str + k, str + len - 1);		//后面所有翻转
	reverse(str, str + len - 1);			//全部翻转
}
void right_move(char* str, int k)
{
	assert(str);
	k = k % (int)strlen(str);
	int len = strlen(str);
	reverse(str + len - k, str + len - 1);	//后k个翻转
	reverse(str, str + len - k - 1);		//前面所有翻转
	reverse(str, str + len - 1);			//全部翻转
}


// abcdefabcdef  包含所有旋转后的结果
int  is_move(char* str1, char* str2)
{
	assert(str2);
	int len = strlen(str1);
	strncat(str1, str1, len);
	strstr(str1, str2);
	if (strstr(str1, str2) == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}

}

int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "cdefab";
	
	int result = is_move(arr1, arr2);	//判断arr2 是否是 arr1旋转之后的
	printf("%d\n", result);
	return 0;
}