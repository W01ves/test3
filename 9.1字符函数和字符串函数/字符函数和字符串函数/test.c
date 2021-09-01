#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int mystrlen(char* str)
//{
//	if (*str)
//		return 1 + mystrlen(++str);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "ab0cdefdaf";
//	printf("%d", mystrlen(arr));
//	
//	return 0;
//}

//
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
#include <assert.h>
//
//char* strcat(char* dest, const char* sor)
//{
//	assert(sor);
//	assert(dest != NULL);
//	int i;
//	char * ret = dest;
//	while (*dest)
//	{
//		dest++;	
//	}
//	while (*dest++ = *sor++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	
//	printf("%s", strcat(arr1, arr2));
//
//	return 0;
//
//}


//int strcmp(const char* str1, const char* str2)
//{
//	while (*str1 == *str2)
//	{
//		if (*str1 == 0)
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "helloq";
//	
//	printf("%d", strcmp(arr1, arr2));
//
//	return 0;
//}

//#include <string.h>
//char* my_strncpy(char* str1, const char* str2, size_t num)
//{
//	int i;
//	char* ret = str1;
//	while ( num && (*str1++ = *str2++))
//	{
//		num--;
//	}
//	if (num)
//	{
//		while (--num)
//		{
//			*str1++ = '\0';
//		}
//	}
//
//
//	return ret;
//}
//
//
//int main()
//{
//	char arr1[] = "helpq";
//	char arr2[] = "ww";
//	my_strncpy(arr1, arr2 , 3);
//	printf("%s", arr1);
//	return 0;
//}





char* my_strstr(char *p1, char* p2)
{


	while (*p1 != *p2)
	{
		p1++;
	}
	while (*p2)
	{
		if (*p1++ != *p2++)
		{
			break;
		}

	}


}













int main()
{
	char arr1[] = "helpq";
	char arr2[] = "ww";
	my_strncpy(arr1, arr2 , 3);
	printf("%s", arr1);
	return 0;
}