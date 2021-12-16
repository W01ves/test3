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


