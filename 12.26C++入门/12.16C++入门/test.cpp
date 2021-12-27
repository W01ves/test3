#define _CRT_SECURE_NO_WARNINGS 1
#include "func.h"



//int main()
//{
//	const char* d = "hello";
//	int a, b;
//	cin >> a >> b;
//	cout << a << b << endl;
//
//	return 0;
//}

//*****全缺省******
//void Func(int a = 1 , int b = 20 , int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl <<endl;
//
//}
//
//int main()
//{
//	Func();
//	Func(1);
//	Func(1,2);
//	Func(1,2,3);
//	return 0;
//}


//void Func(int a = m, int b = 20, int c = 30)        //缺省值可以是全局变量
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl << endl;
//
//}
//
//int main()
//{
//	Func();
//	Func(1);
//	Func(1, 2);
//	Func(1, 2, 3);
//	return 0;
//}


//******半缺省******   必须从右往左设置默认值
//void Func(int a , int b = 20 , int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl <<endl;
//
//}
//int main()
//{
//	Func(1);
//	Func(1,2);
//	Func(1, 2,3);
//
//	return 0;
//}


//struct Stack 
//{
//	int* a;
//	int top;
//	int capacity;
//};
//
//void StackInit(struct Stack* s , int capacity = 4)
//{
//	s->a = (int*)malloc(sizeof(int) * capacity);
//	s->top = 0;
//	s->capacity = capacity;
//}
//
//void StackPush(struct Stack* s, int x)
//{
//
//}
//
//int main()
//{
//	struct Stack s;
//	StackInit(&s);
//	//StackInit(&s ,100);
//
//	free(s.a);
//	s.a = NULL;
//	return 0;
//}


//*******缺省参数不能在函数声明和定义中同时出现********   要么在声明，要么在定义，推荐在声明

//void TestFunc(int a) 
//{
//	cout << a << endl;
//}
//
//
//
//int main()
//{
//	TestFunc();
//
//	//cout << m << endl;
//	return 0;
//}




//******函数重载********
//1. 类型不同
//int Add(int left, int right)
//{
//return left + right;
//}
//double Add(double left, double right)
//{
//	return left + right;
//}
//long Add(long left, long right)
//{
//	return left + right;
//}
//int main()
//{
//	Add(10, 20);
//	Add(10.0, 20.0);
//	Add(10L, 20L);
//	return 0;
//}
//
//2. 个数不同
//3. 顺序不同


//1. 缺省值不同，不能构成重载
//void f(int a)
//{
//	cout << "f(1)" << endl;
//}
//
//void f(int a = 0)
//{
//	cout << "f(1)" << endl;
//}
//
//int main()
//{
//	return 0;
//}


//2. 构成重载
//void f()
//{
//	cout << "f()" << endl;
//}
//
//void f(int a = 0)
//{
//	cout << "f(1)" << endl;
//}
//
//int main()
//{
//	//f();	//调用存在歧义
//	f(1);
//	return 0;
//}



//int main()
//{
//	f();	
//	f(1);
//	return 0;
//}


//**********引用************

//int main()
//{
//	int a = 10;
//	int& b = a;		//引用
//
//	a = 20;
//	b = 30;
//	int* p = &a;
//	int*& p2 = p;
//	return 0;
//}


//int main()
//{
//	// 1、引用必须在**定义时初始化**
//	int a = 10;
//	// int& ra; // 未初始化，该条语句编译时会出错
//
//	//2、 一个变量可以有多个引用
//	int& ra = a;
//	int& rra = ra;
//	printf("%p %p %p\n", &a, &ra, &rra);
//
//	//3、引用一旦引用一个实体，再不能引用其他实体
//	int &b = a;
//	int c = 20; 
//	b = c;		//把c赋值给b
//	
//
//	return 0;
//}



// 1. 引用做参数
//void swap(int& p1 , int& p2)
//{
//	int tmp = p1;
//	p1 = p2;
//	p2 = tmp;
//}
//
//int main()
//{
//	int x = 0, y = 1;  
//	swap(x,y);
//
//
//	return 0;
//}


//2. 引用做返回值

//int& Add(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//
//
//int main()
//{
//	int ret = Add(1,2);
//
//	cout << ret << endl;
//
//	return 0;
//}


//#include <time.h>
//struct A { int a[10000]; };
//void TestFunc1(A a) {}
//void TestFunc2(A& a) {}
//void TestRefAndValue()
//{
//	A a;
//	// 以值作为函数参数
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc1(a);
//	size_t end1 = clock();
//	// 以引用作为函数参数
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc2(a);
//	size_t end2 = clock();
//	// 分别计算两个函数运行结束后的时间
//	cout << "TestFunc1(A)-time:" << end1 - begin1 << endl;
//	cout << "TestFunc2(A&)-time:" << end2 - begin2 << endl;
//}
//
//
//int main()
//{
//	TestRefAndValue();
//	return 0;
//}

//void f1(int x)
//{
//	cout << x << endl; 
//}
//
//void f2(int& x)
//{
//	cout << x << endl;
//}
//
//void f3(const int& x)
//{
//	cout << x << endl;
//}
//
//
//int main()
//{
//	const int a = 10;
//	int c = 20;
//	f1(a);
//	f1(c);
//
//	//f2(a);		//编译出错
//	f2(c);
//
//	f3(a);
//
//	
//	const char* str = "abc";
//	//char* str = "abc";
//	return 0;
//}


//
//int& At(int i)
//{
//	static int a[10];
//	return a[i];
//}
//
//int main()
//{
//	for (size_t i = 0; i < 10; i++)
//	{
//		At(i) = 10 + i;
//	}
//
//	for (size_t i = 0; i < 10; i++)
//	{
//		cout << At(i) << endl;
//	}
//	return 0;
//}
//


#define ADD(x,y) ((x)+(y))

int Add(int x, int y)
{
	int ret = x + y;
	return ret;
}

int main()
{
	Add(1, 2);
	Add(1, 2);
	Add(1, 2);
	Add(1, 2);
	Add(1, 2);
	int a = ADD(1,2);
	cout << a << endl;
	return 0;
}






