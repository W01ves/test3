#define _CRT_SECURE_NO_WARNINGS 1
#include <assert.h>
#include <iostream>
using namespace std;


class Date
{
public:
	//���캯��
	Date(int year = 2022, int month = 1, int day = 19);
	//��ȡÿ���µ�����
	int GetMonthDay(const int year ,const int month);	
	//��ӡ����
	void Print();

	//��ֵ���������
	Date& operator=(const Date d);

	//����+=����
	Date& operator+=(const int day);
	//����-=����
	Date& operator-=(const int day);
	//����+����
	Date operator+(const int day);
	//����-����
	Date operator-(const int day);

	//����ǰ��++
	Date& operator++();
	//���ں���++
	Date operator++(int);
	////����ǰ��--
	Date& operator--();
	//���ں���--
	Date& operator--(int);
	
	//>���������
	bool operator>(const Date& d);
	//==���������
	bool operator==(const Date& d);
	//>=���������
	bool operator>=(const Date& d);
	//<���������
	bool operator<(const Date& d);
	//<=���������
	bool operator<=(const Date& d);
	// !=���������
	bool operator != (const Date& d);

	//����-���ڷ�������
	int operator-(const Date& d);


private:
	int _year;
	int _month;
	int _day;
};

