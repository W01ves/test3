#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//
//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//	char sex[10];
//}s3,s4;				//ȫ�ֱ���
//
//struct stu s2;		//ȫ�ֱ���
//
//int main()
//{
//	struct stu s3 = { "����",20,"SX2005111","��" };	//�ֲ�����
//
//	return 0;
//}



//struct 
//{
//	char name[20];
//	int age;
//	char id[20];
//	char sex[10];
//}s1 = { "����",20,"SX2005111","��" };
//struct
//{
//	char name[20];
//	int age;
//	char id[20];
//	char sex[10];
//}s2;
//
//
//int main()
//{
//	printf("%d",s1.age);
//	return 0;
//}

//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	return 0;
//}



//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//struct S5
//{
//	char c1;
//	char c2;
//	char c3;
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(struct S1));		//12
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(struct S2));		//8	
//	struct S2 s3 = { 0 };
//	printf("%d\n", sizeof(struct S3));		//16
//	struct S2 s4 = { 0 };
//	printf("%d\n", sizeof(struct S4));		//32
//	struct S2 s5 = { 0 };
//	printf("%d\n", sizeof(struct S5));		//3
//	return 0;
//}



//#include <stdio.h>
//#pragma pack(2)//����Ĭ�϶�����Ϊ8
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//
//#pragma pack(1)//����Ĭ�϶�����Ϊ1
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//int main()
//{
//	printf("%d\n", sizeof(struct S1));		//8
//	printf("%d\n", sizeof(struct S2));		//6
//	return 0;
//}


////дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��  
////offsetof ���ʵ��
//#include <stddef.h>
//struct S3
//{
//	char c;		//������׵�ַ��ƫ����Ϊ0
//	int i;		//ƫ����Ϊ4
//	double d;	//ƫ����Ϊ8
//};
//
//int main()
//{
//	struct S3 s1 = { 'a',4,1.0 };
//	struct S3 s2 = { 0 };
//	s2 = s1;
//	printf("%d\n", s2.i);
//	//printf("%d\n", offsetof(struct S3, c));
//	//printf("%d\n", offsetof(struct S3, i));
//	//printf("%d\n", offsetof(struct S3, d));
//	return 0;
//}


////λ�� - ������λ
//struct A
//{
//	int a : 2;		//aֻ��Ҫ2������λ���д洢
//	int b : 5;		//5������λ
//	int c : 10;
//	int d : 32;
//};
//
////47bit  -  6���ֽ� - 
//int main()
//{
//	struct A a = {0};
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}
//



//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}



//ö��
//enum Sex
//{
//	MALE,
//	FEMALE = 4,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE;			//ֻ�ܸ�ֵ{}�е�����
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	printf("%d", sizeof(enum Sex));
//	return 0;
//}


//enum Sex
//{
//	MALE,
//	FEMALE = 4,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE;			//ֻ�ܸ�ֵ{}�е�����
//	printf("%d\n", sizeof(enum Sex));
//	printf("%d\n", sizeof(s));
//	return 0;
//}



//����

//union un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	u.i = 0x11223344;
//	u.c = 0x55;
//	printf("%x\n", u.i);
//	return 0;
//}



union Un1
{
	char c[5];		//������ 1
	int i;			//������ 4
};
union Un2
{
	short c[7];		//������ 2
	int i;			//������ 4
};


int main()
{
	printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));
	return 0;
}