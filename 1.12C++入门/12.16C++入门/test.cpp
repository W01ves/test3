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

//
//int main()
//{
//	// 1、引用必须在**定义时初始化**
//	int a = 10;
//	//int& ra; // 未初始化，该条语句编译时会出错
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
//	printf("%d", b);
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
//	f1(a);			//传值
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


//#define ADD(x,y) ((x)+(y))
//
//int Add(int x, int y)
//{
//	int ret = x + y;
//	return ret;
//}
//
//int main()
//{
//	Add(1, 2);
//	Add(1, 2);
//	Add(1, 2);
//	Add(1, 2);
//	Add(1, 2);
//	int a = ADD(1,2);
//	cout << a << endl;
//	return 0;
//}


//
//int a = 1;
//
//namespace N
//{
//	int a = 0;
//}
//
//int main()
//{
//	printf("%d", N::a);
//
//	return 0;
//}
//
//

//int main()
//{
//	int a = 1;
//	int& b = a;
//
//	return 0;
//}
//


//
//int main()
//{
//	const int a = 10;
//	int& b = a;			//编译时报错，a为常量
//	return 0;
//}


//
//int main()
//{
//	//权限不变
//	const int a =10;
//	const int& b = a;
//
//	//权限缩小
//	int c = 10;
//	const int& d = c;
//
//	return;
//}


//
//int& add(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//
//
//int main()
//{
//	int ret = add(1, 2);
//	cout << ret << endl;
//
//	return 0;
//}

//inline int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int ret = add(1,2);
//	cout << ret << endl;
//	return 0;
//}



#include <stdio.h>
//int findRepeatNumber(int* nums, int numsSize)
//{
//	int i = 0;
//	while (i < numsSize)
//	{
//		if (nums[i] == i)
//		{
//			i++;
//		}
//		else
//		{
//			if (nums[i] == nums[nums[i]])
//			{
//				return nums[i];
//			}
//			else
//			{
//				int tmp = nums[i];
//				nums[i] = nums[tmp];
//				nums[tmp] = tmp;
//			}
//		}
//	}
//	return -1;
//}
//
//
//int main()
//{
//	int arr[] = { 3,4,2,0,0,1 };
//	int n  = findRepeatNumber(arr, 7);
//	printf("%d", n);
//	return 0;
//}

//int search(int* nums, int numsSize, int target)
//{
//	if (numsSize == 0)
//	{
//		return 0;
//	}
//	//搜索右边界
//	int left = 0;
//	int right = numsSize - 1;
//	int R = 0;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (nums[mid] <= target)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			right = mid -1 ;
//		}
//	}
//	R = left;
//
//	//搜索左边界
//	left = 0;
//	right = numsSize - 1;
//	int L = 0;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (nums[mid] >= target)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			left = mid + 1;
//		}
//	}
//	L = right;
//
//
//	return R - L - 1;
//}
//
//
//int main()
//{
//	int arr[] = { 5,7,7,8,8,10 };
//	int n = search(arr, 6, 8);
//	printf("%d", n);
//	return 0;
//}

//
//int TestAuto()
//{
//	return 10;
//}
//int main()
//{
//	int a = 10;
//	auto b = a;
//	auto c = 'a';
//	auto d = TestAuto();
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//
//	//auto e; 无法通过编译，使用auto定义变量时必须对其进行初始化
//	return 0;
//}



//int main()
//{
//	int x = 10;
//	auto a = &x;
//	auto* b = &x;
//	auto& c = x;
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	*a = 20;
//	*b = 30;
//	c = 40;
//	return 0;
//}




//int main()
//{
//	int array[] = { 1, 2, 3, 4, 5 };
//	for (auto& e : array)
//		e *= 2;
//	for (auto e : array)
//		cout << e << " ";
//
//	return 0;
//}


//int add(int, int)
//{
//	return 12;
//}
//
//int main()
//{
//	int ret = add(2, 3); 
//	return 0;
//}



//void f(int)
//{
//	cout << "f(int)" << endl;
//}
//void f(int*)
//{
//	cout << "f(int*)" << endl;
//}
//int main()
//{
//	f(0);
//	f(NULL);
//	f((int*)NULL);
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int* p1 = nullptr;
//	int* p2 = &a ;
//
//
//	int s = sizeof((void*)0);
//	int p = sizeof(p2);
//	return 0;
//}



//struct Student
//{
//	void SetStudentInfo(const char* name, const char* gender, int age)
//	{
//		strcpy(_name, name);
//		strcpy(_gender, gender);
//		_age = age;
//	}
//	void PrintStudentInfo()
//	{
//		cout << _name << " " << _gender << " " << _age << endl;
//	}
//	char _name[20];
//	char _gender[3];
//	int _age;
//};
//
//int main()
//{
//	Student s;
//	s.SetStudentInfo("Peter", "男", 18);
//	return 0;
//}




//class A1 {
//public:
//	void f1() {}
//private:
//	int _a;
//};
//// 类中仅有成员函数
//class A2 {
//public:
//	void f2() {}
//};
//// 类中什么都没有---空类
//class A3
//{};
//
//
//int main()
//{
//	printf("%d\n", sizeof(A1));
//	printf("%d\n", sizeof(A2));
//
//	printf("%d\n", sizeof(A3));
//	printf("%d\n", sizeof(int*));
//}



class Student1
{
public:
	void PrintInfo()
	{
		cout << name << ' ' << ID << ' ' << age << endl;
	}

public:
	const char* name;
	const char* ID;
	int age;

};

//class Student2
//{
//public:
//	void PrintInfo(const char* name , const char* ID , int age)
//	{
//		cout << name << ' ' << ID << ' ' << age << endl;
//	}
//
//private:
//	const char* name;
//	const char* ID;
//	int age;
//
//};
//
//
//
//int main()
//{
//	Student1 man;
//	man.name = "wawngwu";
//	man.ID = "A1234456";
//	man.age = 10;
//	man.PrintInfo();
//	
//	Student2 woman;
//	woman.PrintInfo("zhangsn", "B127684", 20);
//
//}


class Date
{
public:
	void Display()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
	void SetDate(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
private:
	int _year; // 年
	int _month; // 月
	int _day; // 日
};
int main()
{
	Date d1, d2;
	d1.SetDate(2018, 5, 1);
	d2.SetDate(2018, 7, 1);
	d1.Display();
	d2.Display();
	return 0;
}