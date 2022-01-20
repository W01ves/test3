#define _CRT_SECURE_NO_WARNINGS 1
#include "Date.h"

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


//class Date
//{
//public:
//	// 1.无参构造函数，即没有带明显形参的默认构造函数
//	Date()
//	{}
//	// 2.带参构造函数
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//3.缺省构造函数，即提供了默认实参的默认构造函数
//	Date(int year = 2022, int month = 1, int day = 17)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1; // 调用无参构造函数
//	Date d2(2015, 1, 1); // 调用带参的构造函数
//	// 注意：如果通过无参构造函数创建对象时，对象后面不用跟括号，否则就成了函数声明
//	// 以下代码的函数：声明了d3函数，该函数无参，返回一个日期类型的对象
//	//Date d3();
//	return 0;
//}



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





//class Date
//{
//public:
//	~Date()	//析构函数 ， Date类没有资源需要清理，所以Date不实现析构函数也是可以的
//	{
//
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1; 
//
//
//	return 0;
//}
//


//class SeqList
//{
//public:
//	SeqList(int capacity = 10)		//构造函数
//	{
//		_pData = (int*)malloc(capacity * sizeof(int));
//		assert(_pData);
//		_size = 0;
//		_capacity = capacity;
//	}	
//	
//	~SeqList()						//析构函数
//	{
//		if (_pData)
//		{
//			free(_pData); // 释放堆上的空间
//			_pData = NULL; // 将指针置为空
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//	
//private:
//	int* _pData;
//	size_t _size;
//	size_t _capacity;
//};
//
//
//int main()
//{
//	SeqList s1;
//	SeqList s2;
//
//	return 0;
//}


class A
{
public:
	A()
	{}

	A(const A&)
	{
		cout << "A(const A&)" << endl;
	}
};



class Stack
{
public:
	Stack(int capacity = 4)				//构造函数
	{
		_a = (int*)malloc(sizeof(int)*capacity);
		if (_a == nullptr)
		{
			cout << "malloc fail\n" << endl;
			exit(-1);
		}
		_top = 0;
		_capacity = capacity;
	}

	void Push(int x)
	{}

	~Stack()							//析构函数
	{
		free(_a);
		_a = nullptr;
		_top = _capacity = 0;
	}
private:
	int* _a;
	size_t _top;
	size_t _capacity;
};




//class Date
//{
//public:
//	//3.缺省构造函数，即提供了默认实参的默认构造函数
//	Date(int year = 2022, int month = 1, int day = 17)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	~Date()		//析构函数
//	{
//
//	}
//	////Date d2(d1);
//	//Date(const Date& d)			//拷贝构造函数
//	//{
//	//	_year = d._year;
//	//	_month = d._month;
//	//	_day = d._day;
//	//}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//
//	A _aa;
//};
//
//
// 
//int main()
//{
//	Date d1(2022,1,15);
//	//拷贝复制
//	Date d2(d1);
//
//	//Stack st1(10);
//	//Stack st2(st1);
//	return 0;
//}



//class Date
//{
//public:
//	Date(int year = 2022, int month = 1, int day = 17)		//构造函数
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	~Date()		//析构函数
//	{
//
//	}
//	//Date d2(d1);
//	Date(const Date& d)			//拷贝构造函数
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
////private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//bool operator>(const Date& d1, const Date& d2)
//{
//	if (d1._year > d2._year)
//	{
//		return true;
//	}
//	else if (d1._year == d2._year && d1._month > d2._month)
//	{
//		return true;
//	}
//	else if (d1._year == d2._year && d1._month == d2._month && d1._day > d2._day)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//int main()
//{
//	Date d1(2022,1,16);
//	Date d2(2022,1,31);
//
//	cout << (d1 > d2) << endl;	
//	//编译器编译时，如果发现运算符两侧时自定义类型，会找到对应函数并转换成下面这条代码
//	cout << operator>(d1, d2) << endl;
//
//	return 0;
//}



//class Date
//{
//public:
//	Date(int year = 2022, int month = 1, int day = 17)		//构造函数
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	// d1.operator>(d2);
//	bool operator>(const Date& d) // bool operator>(Date* const this, const Date& d)	//
//	{
//		if (_year > d._year)
//		{
//			return true;
//		}
//		else if (_year == d._year && _month > d._month)
//		{
//			return true;
//		}
//		else if (_year == d._year && _month == d._month && _day > d._day)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};



//int main()
//{
//	Date d1(2022, 1, 16);
//	Date d2(2022, 1, 31);
//
//	cout << (d1 > d2) << endl;
//	//编译器编译时，如果发现运算符两侧时自定义类型，会找到对应函数并转换成下面这条代码
//	cout << d1.operator>(d2) << endl;
//
//	return 0;
//}


//
//class Date
//{
//public:
//	//3.缺省构造函数，即提供了默认实参的默认构造函数
//	Date(int year = 2022, int month = 1, int day = 17)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//Date d4(d1);
//	Date(const Date& d)			//拷贝构造函数
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
	//Date& operator=(const Date& d)
	//{
	//	//极端情况下自己给自己赋值就可以不同处理了，直接判断一下跳过
	//	if (this != &d)	    //直接比较地址，不推荐用*this != d ，因为涉及'!='的运算符重载
	//	{
	//		_year = d._year;
	//		_month = d._month;
	//		_day = d._day;
	//	}
	//	return *this;
	//}

//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2022, 1, 16);
//	Date d2(2022, 1, 31);
//	Date d3(2022, 2, 26);
//	//一个已经存在的对象拷贝初始化一个马上创建实例化的对象
//	//拷贝复制
//	Date d4(d1);
//	Date d5 = d1;	//拷贝构造
//	//两个已经存在的对象，之间进行赋值拷贝
//	d1 = d3;
//	d2 = d1 = d3;
//	return 0;
//}
//
//




//int main()
//{
//	Date d1(2022,1,19);
//	d1.Print();
//	//d1 += 365;	//	d1.operator+=(100);
//	//d1.Print();
//
//	//d1 += -5163;	//	d1.operator+=(100);
//	//d1.Print();
//
//	//Date d2 = d1 + 31;
//	//d2.Print(); 
//
//	//Date d22 = d2 - 31;
//	//d22.Print();
//	  
//	//++d2;
//	//d2.Print();
//	  
//	//d2++;
//	//d2.Print();
//
//	//Date d3;
//	//d3 = d1;   //d3.operator=(d1);
//	//d3.Print();
//
//	//--d1;
//	//d1.Print();
//	//d1--;
//	//d1.Print();
//	//Date d2(2020, 12, 30);
//	//d2.Print();
//	//cout << (d1 != d2) << endl;
//	Date d2(2047, 12, 2);
//	d2.Print();
//	cout << (d1 - d2) << endl;
//
//	
//	return 0;
//}
//

//class Widget
//{
//
//public:
//	Widget()
//	{
//		cout << "Widget()" << endl;
//	}
//	Widget(const Widget& w)
//	{
//		cout << "Widget(const Widget& w)" << endl;
//	}
//	~Widget()
//	{
//		cout << "~Widget()" << endl;
//
//	}
//};
//Widget f(Widget u)
//
//{
//
//	Widget v(u);
//
//	Widget w = v;
//
//	return w;
//	//return u;
//}
//int main() 
//{
//
//	Widget x;		//创建变量x，调用构造函数
//	//Widget;			//匿名对象
//	//f(Widget());
//	Widget y = f(f(x));      //f(x) 传值传参1次，创建变量v1次，创建变量w1次，传值返回1次（优化），
//						     //创建变量v1次，创建变量w1次，传值返回1次（优化）
//}



int main()
{
	Date d1;
	d1.Print();

	const Date d2;
	d2.Print();	     //this 权限放大

	int x = 1;
	int y = 2;
	int*  p = &x;

	int* const p2 = &x;
	int* p4 = p2;

	const int* p3 = &x;
	//int* p5 = p3;

	return 0;
}

