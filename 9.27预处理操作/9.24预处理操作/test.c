#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;	
//	for ( i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//
//	}
//
//	for ( i = 0; i <  10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//
//	return 0;
//}



//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	//printf("%s\n", __STDC__);
//
//
//
//	return 0;
//}




//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf = NULL)
//	{
//		perror("pf");
//		exit( );
//	}
//
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//#define SQUARE(X) X*X	//ºê
//
//int main()
//{
//	int ret = SQUARE(5);		//25   5*5
//	int ret1 = SQUARE(5+1);		//11   5+1*5+1
//	printf("%d",ret);
//
//	return 0;
//}



//int main()
//{
//	//int a = 0;
//	//printf("the value of a is %d\n", a);
//
//	printf("hello world\n");
//	printf("hello " "world\n");
//	return 0;
//}


//#define PRINT(X) printf("the value of " #X " is %d\n", X)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
//
//
//	return 0;
//}

//
//#define CAT(X,Y) X##Y
//
//int main()
//{
//	int class84 = 2020;
//	printf("%d\n", CAT(class, 84));
//
//	return 0;
//
//}




//int main()
//{
//	int ch = 0;
//	while ((ch = fgetc(stdin)) != EOF)
//	{
//		printf("%c\n", ch+32);
//	}
//
//
//	return 0;
//}


//int main()
//{
//	FILE* fp;
//	fflush(fp);
//	return 0;
//}
//


//
//
//struct S
//{
//	char ch1;
//	int a;
//	char ch2;
//};
//
//
//#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
//
//
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, a));
//
//
//	return 0;
//}



//int main()
//{
//	int a;
//	a = 1;
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str1[20];
//	char str2[20];
//	strcpy(str1, "To be ");
//	strcpy(str2, "or not to be");
//	strncat(str1, str2, 6);
//	puts(str1);
//	return 0;
//}


//int main()
//{
//	char str[] = "This is a simple string";
//	char * pch;
//	pch = strstr(str, "simple");
//	strncpy(pch, "sample", 6);
//	puts(str);
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str1[20];
//	char str2[20];
//	strcpy(str1, "To be ");
//	strcpy(str2, "or not to be");
//	strncat(str1, str2, 6);
//	puts(str1);
//	return 0;
//}
#include <string.h>

//char * my_strncpy(char * destination, const char * source, size_t num)
//{
//	char* ret = destination;
//
//	while ((num) && (*destination++ = *source++))
//	{
//		num--;
//	}
//
//	if (num)
//	{
//		while (num--)
//		{
//			*destination++ = '/0';
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
//	char ch1[20] = "asdfasdf";
//	char ch2[] = "hehe";
//	char* ret = my_strncpy(ch1, ch2, 4);
//	char* ret2 = strncpy(ch1, ch2,4);
//	printf("%s\n",ret);
//	printf("%s", ret2);
//	return 0;
//}



//char * my_strncat(char * destination, const char * source, size_t num)
//{
//	char* ret = destination;
//
//	while (*destination++)
//	{
//		;
//	}
//	destination--;		//dest µÄ ¡®\0¡¯×ø±ê
//	
//	while ((num--) && *source)
//	{
//		*destination++ = *source++;
//	}
//	*destination = '\0';
//
//	return ret;
//}
//
//int main()
//{
//	char ch1[10] = "asdff";
//	char ch2[] = "hehe";
//	char* ret = my_strncat(ch1, ch2, 5);
//	//char* ret2 = strncat(ch1, ch2,4);
//	printf("%s\n",ret);
//	//printf("%s", ret2);
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,3,5};
//	int i, j;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for ( i = 0; i < sz; i++)
//	{
//		int k = 0;
//		for ( j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				k++;
//			}
//		}
//		if (k==1)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//
//	return 0;
//}




int main()
{
	int arr[10] = { 1,2,3,4,5,1,2,3,4,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0, x = 0, y = 0, z = 0;
	int count = 0;
	for ( i = 0; i < sz; i++)
	{
		x ^= arr[i];
	}
	while ( x&1 ==0)		//   (x>>(count++))&1 ==0
	{
		x >> 1;
		count++;
	}
	for ( i = 0; i < sz; i++)
	{
		if ((arr[i]>>count)&1)
		{
			y ^= arr[i];
		}
		else
		{
			z ^= arr[i];
		}
	}
	printf("%d %d\n", y, z);

	return 0;
}