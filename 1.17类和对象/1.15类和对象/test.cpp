#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"


//int main()
//{
//
//	//const double b = 1.1;
//	//double bb = b;
//	//bb = 1;
//
//	//const auto& b = 10;
//	//cout << typeid(b).name() << endl;
//
//
//	int array[] = { 1,2,3,4,5 };
//	for (auto x : array)
//	{
//		cout << x << endl;
//	}
//
//
//	return 0;
//}


//class Data
//{
//public:
//	void Display()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//int main()
//{
//	Data d1;
//	d1.Init(2022, 1, 17);
//	d1.Display();
//
//	Data d2;
//	d1.Init(2022, 2, 18);
//	d1.Display();
//	return 0;
//}


class Date
{
public:
	// 1.无参构造函数，即没有带明显形参的默认构造函数
	Date()
	{}
	// 2.带参构造函数
	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	//3.缺省构造函数，即提供了默认实参的默认构造函数
	Date(int year = 2022, int month = 1, int day = 17)
	{
		_year = year;
		_month = month;
		_day = day;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1; // 调用无参构造函数
	Date d2(2015, 1, 1); // 调用带参的构造函数
	// 注意：如果通过无参构造函数创建对象时，对象后面不用跟括号，否则就成了函数声明
	// 以下代码的函数：声明了d3函数，该函数无参，返回一个日期类型的对象
	//Date d3();
	return 0;
}



//void TestFunc(int a, int b = 10, int c = 20)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//
//int main()
//{
//	TestFunc(1);
//	return 0;
//}

//class A
//{
//public:
//	A()
//	{
//		cout << "A()" << endl;
//		_a = 0;
//	}
//
//private:
//	int _a;
//};
//
//class Date
//{
//public:
//private:
//	int _year;
//	int _month;
//	int _day;
//
//	A a;
//};
//
//
//int main()
//{
//	Date d1;
//	return 0;
//}
//


