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



#include <assert.h>

//char* my_strstr(const char *p1,const char* p2)
//{
//	assert(p1 && p2);
//
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	char *s1 ,*s2;
//	char* cur = (char*)p1;
//
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while ( (*s1 == *s2) && (*s1 != '\0') && (*s2 != '\0'))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//
//
//int main()
//{
//	char arr1[] = "qwwearqe";
//	char arr2[] = "wear";
//
//	printf("%s", my_strstr(arr1, arr2));
//	return 0;
//}



//int main()
//{
//	char arr[] = "zpw.@ewqewq.com";
//	char*p = "@.";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//
//	printf("%s\n", strtok(arr, p));
//	printf("%s\n", strtok(NULL, p));
//	printf("%s\n", strtok(NULL, p));
//
//	return 0;
//}


//#include <errno.h>
//int main()
//{
//
//	//errno是一个全局得错误码的变量
//	//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中。
//	//char* str = strerror(errno);
//	//printf("%s\n",str);
//
//	return 0;
//
//}

//#include <ctype.h>
//int main()
//{
//	printf("%c", toupper('a'));
//	return 0;
//}


#include <string.h>
//int main()	
//{
//	char arr1[] = "asdf";
//	char arr2[] = "w0w";		//字符0以ASCII码存储  0的ASCII码为48
//	char arr3[] = "w\0w";		//字符\0以ASCII码存储  0的ASCII码为0
//	printf("%s\n", strcpy(arr1, arr2));
//	printf("%s\n", strcpy(arr1, arr3));
//
//	return 0;
//}



//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 7,8,9 };
//	memcpy(arr1, arr2, 8);
//	printf("%d\n", arr1);
//
//	return 0;
//}



//void* my_memcpy(void *dst , const void *sor , size_t num)
//{
//	void *str = dst;
//	assert(dst);
//	assert(sor);
//	while (num--)
//	{
//		*(char*)dst = *(char*)sor;
//		(char*)dst = (char*)dst + 1;
//		(char*)sor = (char*)sor + 1;
//	}
//	return str;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 7,8,9 };
//	memcpy(arr1, arr2, 8);
//	printf("%d\n", arr1[0]);
//	return 0;
//}





//void* my_memmove(void* dst, void* sor, size_t num)
//{
//	assert(dst);
//	assert(sor);
//	void* ret = dst;
//
//	if ( (char*)dst >= (char*)sor +num || dst <= sor )
//	{
//		while (num--)
//		{
//			*(char*)dst = *(char*)sor;
//			++(char*)dst;
//			++(char*)sor;
//		}
//	}
//	else
//	{
//		sor = (char*)sor + num - 1;
//		dst = (char*)dst + num - 1;
//		while (num--)
//		{
//			*(char*)dst = *(char*)sor;
//			--(char*)dst;
//			--(char*)sor;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int arr2[] = { 7,8,9 }; 
//	memmove(arr1+5, arr1, 8);
//	int i;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}


int main()
{
	int arr[10] = { 0 };
	memset(arr, 1, 10);

	return 0;
}