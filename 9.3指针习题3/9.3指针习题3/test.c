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

////////�ַ�������ת

//������ⷨ

//char* left_move(char* str, int k)
//{
//	char tep;
//	char* sta;
//	k = k % (int)strlen(str);		// ��ת���������ַ������ȣ�������������ѭ������
//	while (k--)
//	{
//		sta = str;		//sta����Ԫ�ص�ַ
//		tep = *str;	    //tep���ַ�����Ԫ��
//		while (*(sta + 1))				//strû��ԭ��������������
//		{
//			*sta = *(sta+1);		
//			sta++;
//		}
//		*sta = tep;		
//	}
//	return str;
//}

//������ת��
//abcdef
//bafedc		dcba fe
//cdefab		efabcd

//void reverse(char* left, char* right)
//{
//	char tep;	//��ʱ����
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
//	reverse(str, str + k - 1);			//ǰk����ת
//	reverse(str + k, str + len - 1);		//�������з�ת
//	reverse(str, str + len - 1);			//ȫ����ת
//}
//void right_move(char* str, int k)
//{
//	assert(str);
//	k = k % (int)strlen(str);
//	int len = strlen(str);
//	reverse(str + len - k, str + len - 1);				//��k����ת
//	reverse(str , str + len - k - 1);		//ǰ�����з�ת
//	reverse(str, str + len - 1);			//ȫ����ת
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k= 2;
//	right_move(arr,k);
//	printf("%s", arr);
//	return 0;
//}



////////////�ж�һ���ַ����Ƿ�����һ���ַ�����ת֮����ַ���

//��ٷ�
//void reverse(char* left, char* right)
//{
//	char tep;	//��ʱ����
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
//	reverse(str, str + k - 1);				//ǰk����ת
//	reverse(str + k, str + len - 1);		//�������з�ת
//	reverse(str, str + len - 1);			//ȫ����ת
//}
//void right_move(char* str, int k)
//{
//	assert(str);
//	k = k % (int)strlen(str);
//	int len = strlen(str);
//	reverse(str + len - k, str + len - 1);	//��k����ת
//	reverse(str, str + len - k - 1);		//ǰ�����з�ת
//	reverse(str, str + len - 1);			//ȫ����ת
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
//	int result = is_move(arr1, arr2);	//�ж�arr2 �Ƿ��� arr1��ת֮���
//	printf("%d", result);
//	return 0;
//}



void reverse(char* left, char* right)
{
	char tep;	//��ʱ����
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
	reverse(str, str + k - 1);				//ǰk����ת
	reverse(str + k, str + len - 1);		//�������з�ת
	reverse(str, str + len - 1);			//ȫ����ת
}
void right_move(char* str, int k)
{
	assert(str);
	k = k % (int)strlen(str);
	int len = strlen(str);
	reverse(str + len - k, str + len - 1);	//��k����ת
	reverse(str, str + len - k - 1);		//ǰ�����з�ת
	reverse(str, str + len - 1);			//ȫ����ת
}


// abcdefabcdef  ����������ת��Ľ��
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
	
	int result = is_move(arr1, arr2);	//�ж�arr2 �Ƿ��� arr1��ת֮���
	printf("%d\n", result);
	return 0;
}