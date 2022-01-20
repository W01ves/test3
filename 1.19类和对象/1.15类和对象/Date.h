#define _CRT_SECURE_NO_WARNINGS 1
#include <assert.h>
#include <iostream>
using namespace std;


class Date
{
public:
	//构造函数
	Date(int year = 2022, int month = 1, int day = 19);
	//获取每个月的天数
	int GetMonthDay(const int year ,const int month);	
	//打印日期
	void Print();

	//赋值运算符重载
	Date& operator=(const Date d);

	//日期+=天数
	Date& operator+=(const int day);
	//日期-=天数
	Date& operator-=(const int day);
	//日期+天数
	Date operator+(const int day);
	//日期-天数
	Date operator-(const int day);

	//日期前置++
	Date& operator++();
	//日期后置++
	Date operator++(int);
	////日期前置--
	Date& operator--();
	//日期后置--
	Date& operator--(int);
	
	//>运算符重载
	bool operator>(const Date& d);
	//==运算符重载
	bool operator==(const Date& d);
	//>=运算符重载
	bool operator>=(const Date& d);
	//<运算符重载
	bool operator<(const Date& d);
	//<=运算符重载
	bool operator<=(const Date& d);
	// !=运算符重载
	bool operator != (const Date& d);

	//日期-日期返回天数
	int operator-(const Date& d);


private:
	int _year;
	int _month;
	int _day;
};

