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
	// 1.�޲ι��캯������û�д������βε�Ĭ�Ϲ��캯��
	Date()
	{}
	// 2.���ι��캯��
	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	//3.ȱʡ���캯�������ṩ��Ĭ��ʵ�ε�Ĭ�Ϲ��캯��
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
	Date d1; // �����޲ι��캯��
	Date d2(2015, 1, 1); // ���ô��εĹ��캯��
	// ע�⣺���ͨ���޲ι��캯����������ʱ��������治�ø����ţ�����ͳ��˺�������
	// ���´���ĺ�����������d3�������ú����޲Σ�����һ���������͵Ķ���
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


