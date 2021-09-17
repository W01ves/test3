#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <errno.h>



//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}





 
//int main()
//{
//	//fopen("E:\\Project\\2021.9\\文件操作\\文件操作\\test.txt","r");	 //绝对路径
//	//fopen("test.txt", "r");			//相对路径 （相对于当前代码的路径）
//	//..表示上一级路径
//	//.表示当前路径
//	//fopen("../test.txt", "r"); 上一级路径的文件
//	//fopen("../../test.txt", "r"); 上一级的上一次路径的文件
//
//	FILE* pf = fopen("test.txt", "");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//打开成功
//	//读文件
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//写入
//int main()
//{
//	FILE* fp=fopen("TEST.txt", "w");
//	if (fp == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputc('b', fp);
//	fputc('i', fp);
//	fputc('t', fp);
//
//	fclose(fp);
//	fp = NULL;
//
//	return 0;
//}


//读取
//int main()
//{
//	FILE* fpread = fopen("TEST.txt", "r");
//	if (fpread == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	printf("%c", fgetc(fpread));
//	printf("%c", fgetc(fpread));
//	printf("%c", fgetc(fpread));
//	fclose(fpread);
//	fpread = NULL;
//
//	return 0;
//}



//int main()
//{
//	int ch = fgetc(stdin);
//	fputs(ch, stdout);
//}



//int main()
//{
//	char ch = 'a';
//	printf("%c", ch+1);
//	return 0;
//}




//int main()
//{
//	FILE* fp = fopen("test.txt", "r");
//	if (fp == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	
//	char str[1024] = {0};
//	fgets(str, 1024, fp);
//	//printf("%s", str);		//hello后面的\n（换行）也放进str，打印时自动换行
//	puts(str);				//puts会自动换行
//	fgets(str, 1024, fp);
//	//printf("%s", str);
//	puts(str);
//
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}






//
//int main()
//{
//	FILE* fp = fopen("test.txt", "a");
//	if (fp == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	
//	char str[1024] = {0};
//	fputs("\nstr", fp);
//
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}



int main()
{
	FILE* fp = fopen("test.txt", "a");
	if (fp == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}

	char str[1024] = { 0 };

	fgets(str,1024,stdin);
	fputs(str, stdout);

	//gets(str);		//它不检测读回来的数据长度是否超过自己所拥有的buff的长度
	//puts(str);


	fclose(fp);
	fp = NULL;
	return 0;
}