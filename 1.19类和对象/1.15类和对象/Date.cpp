#define _CRT_SECURE_NO_WARNINGS 1
#include "Date.h"

Date::Date(int year , int month , int day )
{
	//�ж������Ƿ�Ϸ�
	if (year < 0 || month < 0 || month > 12 || day< 1 || day >  GetMonthDay(year, month))
	{
		printf("�Ƿ�����\n");
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
	//�ж�����
	if (month == 2 && ((year % 4 == 0 && year % 100 != 0)|| year % 400==0) )
	{
		return 29;
	}
	static int MonthDayArray[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };


	return MonthDayArray[month];
}

//��ֵ���������
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


//����+=����
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
//����-=����
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

//����+����
Date Date::operator+(const int day)
{
	Date ret(*this);
	ret += day;
	return ret;
}
//����-����
Date Date::operator-(const int day)
{
	Date ret(*this);
	ret -= day;
	return ret;
}


//ǰ��++����ֵ��++���ֵ
Date& Date::operator++()
{
	*this += 1;
	return *this;
}

//����++����ֵ��++ǰ��ֵ
//����Ϊ�˸�ǰ��++����������
//����һ�²���ռλ����ǰ��++,���ɺ�������
Date Date::operator++(int)
{
	Date ret(*this);
	*this += 1;
	return ret;
}
//���Կ���ǰ��++Ҫ�Ⱥ���++�ã�����++���ܴ����÷���,����Ҫ������ʱ����


////����ǰ��--
Date& Date::operator--()
{
	*this -= 1;
	return *this;
}
//���ں���--
Date& Date::operator--(int)
{
	Date ret(*this);
	*this -= 1;
	return ret;
}

//>���������
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


//==���������
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
//<=���������
bool Date::operator<=(const Date& d)
{
	return *this < d || *this == d;
}
// !=���������
bool Date::operator != (const Date& d)
{
	return !(*this == d);
}



//����-���ڷ�������
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
			//����˵��*this �Ա�d��
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