#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//class Date
//{
//
//public:
//
//	Date(int year, int month, int day)
//	{
//		//_N = 10;
//		_year = year;
//		_month = month;
//		//_day = day;
//	}
//
//	//Date(int year, int month, int day)
//	//	:_N(10)
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//	//初始化列表 ， 成员变量定义的地方
//	//Date(int year, int month, int day)
//	//	:_year(year)
//	//	,_month(month)
//	//	,_day(day)
//	//	,_N(10)
//	//{}
//
//	//void display()
//	//{
//	//	cout << _N << endl;
//	//}
//private:
//	int _year;
//	int _month;
//	int _day;
//
//	//const int _N ;
//};
//
//
//int main()
//{
//	Date d1(2022, 1, 1);
//	//d1.display();
//
//	int i;	//定义
//	i = 1;	//赋初值
//	int j = 10; //定义并初始化
//	//常量必须在定义的时候初始化
//	//const int j;
//
//
//
//
//	return 0;
//}


//class A
//{
//public:
//	A(int a )
//	{
//		cout << "A(int a)" << endl;
//		_a = a;
//	}
//
//	A(const A& aa)
//	{
//		cout << "A(const A& aa)" << endl;
//		_a = aa._a;
//	}
//
//	A& operator=(const A& aa)
//	{
//		cout << "A& operator=(const A& aa)" << endl;
//		_a = aa._a;
//
//		return *this;
//	}
//private:
//	int _a;
//};
//
//class Date
//{
//public:
//
//
//	//不使用初始化列表
//	//Date(int year, int month, int day, const A& aa)
//	//{
//	//	_aa = aa;
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//	//	 使用初始化列表
//	//Date(int year, int month, int day, const A& aa)
//	//	:_aa(aa)
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//
//		//使用初始化列表
//	Date(int year, int month, int day, int num)
//		:_aa(num)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//private:
//	int _year;  // 声明
//	int _month;
//	int _day;
//
//	A _aa;
//};
//
//int main()
//{
//	//A aa(10);
//	//Date d1(2022, 1, 19, aa); // 对象定义/对象实例化
//	//Date d1(2022, 1, 19, A(10)); // 对象定义/对象实例化
//	Date d1(2022, 1, 19, 10); // 对象定义/对象实例化
//	return 0;
//}


//class A
//{
//public:
//	A(int a)
//		:_a(a)
//	{
//		cout << 111 << endl;
//	}
//private:
//	int _a;
//};
//class B
//{
//public:
//	B(int a, int ref)
//		:_aobj(a)
//		, _ref(ref)
//		, _n(10)
//	{}
//private:
//	A _aobj; // 没有默认构造函数
//	int& _ref; // 引用
//	const int _n; // const
//};
//
//int main()
//{
//	int m = 1;
//	B b1(1, m);
//
//	return 0;
//}


//class Date
//{
//public:
//	Date(int year)
//		:_year(year)
//	{}
//	//explicit Date(int year)
//	//	:_year(year)
//	//{}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2018);
//	Date d2 = 2019;
//	return 0;
//}


class A
{
public:
	A(int a = 0)
		:_a(a)
	{
		_count++;
	}
	A(const A& a)
	{
		_count++;
	}
	// 没有this指针，只能访问静态成员变量和静态成员函数
	/*static*/ int GetCount()
	{
		return _count;
	}
private:
	int _a;
	//静态成员变量属于整个类，所有对象，生命周期在整个程序运行期间
	//类的成员函数中可以随便访问，
	static int _count;
};

int A::_count = 0;

int main()
{
	A a1;
	A a2 = 11;

	//cout << A::_count<<endl;
	//cout << A::_a << endl;

	cout << a1.GetCount() << endl;
	//cout << A::GetCount() << endl;
}