#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <errno.h>



//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}





 
//int main()
//{
//	//fopen("E:\\Project\\2021.9\\�ļ�����\\�ļ�����\\test.txt","r");	 //����·��
//	//fopen("test.txt", "r");			//���·�� ������ڵ�ǰ�����·����
//	//..��ʾ��һ��·��
//	//.��ʾ��ǰ·��
//	//fopen("../test.txt", "r"); ��һ��·�����ļ�
//	//fopen("../../test.txt", "r"); ��һ������һ��·�����ļ�
//
//	FILE* pf = fopen("test.txt", "");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�򿪳ɹ�
//	//���ļ�
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//д��
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


//��ȡ
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
//	//printf("%s", str);		//hello�����\n�����У�Ҳ�Ž�str����ӡʱ�Զ�����
//	puts(str);				//puts���Զ�����
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

	//gets(str);		//�����������������ݳ����Ƿ񳬹��Լ���ӵ�е�buff�ĳ���
	//puts(str);


	fclose(fp);
	fp = NULL;
	return 0;
}