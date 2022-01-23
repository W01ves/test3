#define _CRT_SECURE_NO_WARNINGS 1
#include <assert.h>
#include <iostream>
using namespace std;


class Date
{
	//����ȡ
	friend ostream& operator<<(ostream& _cout, const Date& d);
	//������
	friend istream& operator>>(istream& _cin,Date& d);

public:

	//���캯��
	Date(int year = 2022, int month = 1, int day = 19);
	//��ȡÿ���µ�����
	int GetMonthDay(const int year ,const int month)const;
	//��ӡ����
	void Print() const;

	//��ֵ���������
	Date& operator=(const Date d);

	//����+=����
	Date& operator+=(const int day);
	//����-=����
	Date& operator-=(const int day);
	//����+����
	Date operator+(const int day)const;
	//����-����
	Date operator-(const int day)const;

	//����ǰ��++
	Date& operator++();
	//���ں���++
	Date operator++(int);
	////����ǰ��--
	Date& operator--();
	//���ں���--
	Date& operator--(int);
	
	//>���������
	bool operator>(const Date& d) const;
	//==���������
	bool operator==(const Date& d)const;
	//>=���������
	bool operator>=(const Date& d)const;
	//<���������
	bool operator<(const Date& d)const;
	//<=���������
	bool operator<=(const Date& d)const;
	// !=���������
	bool operator != (const Date& d)const;

	//����-���ڷ�������
	int operator-(const Date& d)const;

	void PrintWeekDay() const;


	 

private:
	int _year;
	int _month;
	int _day;
};

