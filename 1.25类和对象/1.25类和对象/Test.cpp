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
//	//��ʼ���б� �� ��Ա��������ĵط�
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
//	int i;	//����
//	i = 1;	//����ֵ
//	int j = 10; //���岢��ʼ��
//	//���������ڶ����ʱ���ʼ��
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
//	//��ʹ�ó�ʼ���б�
//	//Date(int year, int month, int day, const A& aa)
//	//{
//	//	_aa = aa;
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//	//	 ʹ�ó�ʼ���б�
//	//Date(int year, int month, int day, const A& aa)
//	//	:_aa(aa)
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//
//		//ʹ�ó�ʼ���б�
//	Date(int year, int month, int day, int num)
//		:_aa(num)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//private:
//	int _year;  // ����
//	int _month;
//	int _day;
//
//	A _aa;
//};
//
//int main()
//{
//	//A aa(10);
//	//Date d1(2022, 1, 19, aa); // ������/����ʵ����
//	//Date d1(2022, 1, 19, A(10)); // ������/����ʵ����
//	Date d1(2022, 1, 19, 10); // ������/����ʵ����
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
//	A _aobj; // û��Ĭ�Ϲ��캯��
//	int& _ref; // ����
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
	// û��thisָ�룬ֻ�ܷ��ʾ�̬��Ա�����;�̬��Ա����
	/*static*/ int GetCount()
	{
		return _count;
	}
private:
	int _a;
	//��̬��Ա�������������࣬���ж��������������������������ڼ�
	//��ĳ�Ա�����п��������ʣ�
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