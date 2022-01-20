#define _CRT_SECURE_NO_WARNINGS 1
#include "Date.h"

Date::Date(int year , int month , int day )
{
	//判断日期是否合法
	if (year < 0 || month < 0 || month > 12 || day< 1 || day >  GetMonthDay(year, month))
	{
		printf("非法日期\n");
	}

	_year = year;
	_month = month;
	_day = day;
}


void Date::Print()
{
	cout << _year << '-' << _month << '-' << _day << endl;
}



int Date::GetMonthDay(const int year ,const int month)
{	
	//判断闰年
	if (month == 2 && ((year % 4 == 0 && year % 100 != 0)|| year % 400==0) )
	{
		return 29;
	}
	static int MonthDayArray[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };


	return MonthDayArray[month];
}

//赋值运算符重载
Date& Date::operator=(const Date d)
{
	if (this != &d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	return *this;
}


//日期+=天数
Date& Date::operator+=(const int day)
{
	if (day < 0)
	{
		return *this -= (-day);
	}
	_day += day;
	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		_month++;
		if (_month == 13)
		{
			_month = 1;
			_year++;
		}
	} 
	return *this;
}
//日期-=天数
Date& Date::operator-=(const int day)
{
	if (day < 0)
	{ 
		return *this += (-day);
	}
	_day -= day;
	while (_day < 1)
	{
		_month--;
		if (_month == 0)
		{
			_month = 12;
			_year--;
		}
		_day += GetMonthDay(_year, _month);
	}
	return *this;
}

//日期+天数
Date Date::operator+(const int day)
{
	Date ret(*this);
	ret += day;
	return ret;
}
//日期-天数
Date Date::operator-(const int day)
{
	Date ret(*this);
	ret -= day;
	return ret;
}


//前置++返回值是++后的值
Date& Date::operator++()
{
	*this += 1;
	return *this;
}

//后置++返回值是++前的值
//后置为了跟前置++，进行区分
//增加一下参数占位，跟前置++,构成函数重载
Date Date::operator++(int)
{
	Date ret(*this);
	*this += 1;
	return ret;
}
//可以看出前置++要比后置++好，后置++不能传引用返回,并且要创建临时变量


////日期前置--
Date& Date::operator--()
{
	*this -= 1;
	return *this;
}
//日期后置--
Date& Date::operator--(int)
{
	Date ret(*this);
	*this -= 1;
	return ret;
}

//>运算符重载
bool Date::operator>(const Date& d)
{
	if (_year > d._year)
	{
		return true;
	}
	else if (_year == d._year && _month > d._month)
	{
		return true;
	}
	else if (_year == d._year && _month == d._month && _day>d._day)
	{
		return true;
	}
	else
	{
		return false;
	}
}


//==运算符重载
bool Date::operator==(const Date& d)
{
	if (_year == d._year && _month == d._month && _day == d._day)
	{
		return true;
	}
	return false;
}

//>=
bool Date::operator>=(const Date& d)
{
	return *this > d || *this == d;
}

//<
bool Date::operator<(const Date& d)
{
	//if (_year < d._year)
	//{
	//	return true;
	//}
	//else if (_year == d._year && _month < d._month)
	//{
	//	return true;
	//}
	//else if (_year == d._year && _month == d._month && _day < d._day)
	//{
	//	return true;
	//}
	//else
	//{
	//	return false;
	//}
	return !(*this >= d);
}
//<=运算符重载
bool Date::operator<=(const Date& d)
{
	return *this < d || *this == d;
}
// !=运算符重载
bool Date::operator != (const Date& d)
{
	return !(*this == d);
}



//日期-日期返回天数
int Date::operator-(const Date& d)
{
	int ret = 0;
	Date This(*this);
	if (This >= d)
	{
		if (This._day >= d._day) 
		{
			ret += This._day - d._day;
		}
		else
		{
			This._month--;
			ret += This._day + GetMonthDay(This._year, This._month) - d._day;
		}


		while (1)
		{
			if (This._year == d._year && This._month == d._month)
			{
				break;
			}
			//到这说明*this 仍比d大
			This._month--;
			if (This._month == 0)
			{
				This._month = 12;
				This._year--;
			}
			ret += GetMonthDay(This._year, This._month);
		}
	}
	else
	{
		Date tmp(d);
		ret = -(tmp - *this);
	}

	return ret;
}