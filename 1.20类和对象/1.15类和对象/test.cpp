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
//	// 1.�޲ι��캯������û�д������βε�Ĭ�Ϲ��캯��
//	Date()
//	{}
//	// 2.���ι��캯��
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//3.ȱʡ���캯�������ṩ��Ĭ��ʵ�ε�Ĭ�Ϲ��캯��
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
//	Date d1; // �����޲ι��캯��
//	Date d2(2015, 1, 1); // ���ô��εĹ��캯��
//	// ע�⣺���ͨ���޲ι��캯����������ʱ��������治�ø����ţ�����ͳ��˺�������
//	// ���´���ĺ�����������d3�������ú����޲Σ�����һ���������͵Ķ���
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
//	~Date()	//�������� �� Date��û����Դ��Ҫ��������Date��ʵ����������Ҳ�ǿ��Ե�
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
//	SeqList(int capacity = 10)		//���캯��
//	{
//		_pData = (int*)malloc(capacity * sizeof(int));
//		assert(_pData);
//		_size = 0;
//		_capacity = capacity;
//	}	
//	
//	~SeqList()						//��������
//	{
//		if (_pData)
//		{
//			free(_pData); // �ͷŶ��ϵĿռ�
//			_pData = NULL; // ��ָ����Ϊ��
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
	Stack(int capacity = 4)				//���캯��
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

	~Stack()							//��������
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
//	//3.ȱʡ���캯�������ṩ��Ĭ��ʵ�ε�Ĭ�Ϲ��캯��
//	Date(int year = 2022, int month = 1, int day = 17)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	~Date()		//��������
//	{
//
//	}
//	////Date d2(d1);
//	//Date(const Date& d)			//�������캯��
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
//	//��������
//	Date d2(d1);
//
//	//Stack st1(10);
//	//Stack st2(st1);
//	return 0;
//}



//class Date
//{
//public:
//	Date(int year = 2022, int month = 1, int day = 17)		//���캯��
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	~Date()		//��������
//	{
//
//	}
//	//Date d2(d1);
//	Date(const Date& d)			//�������캯��
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
//	//����������ʱ������������������ʱ�Զ������ͣ����ҵ���Ӧ������ת����������������
//	cout << operator>(d1, d2) << endl;
//
//	return 0;
//}



//class Date
//{
//public:
//	Date(int year = 2022, int month = 1, int day = 17)		//���캯��
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
//	//����������ʱ������������������ʱ�Զ������ͣ����ҵ���Ӧ������ת����������������
//	cout << d1.operator>(d2) << endl;
//
//	return 0;
//}


//
//class Date
//{
//public:
//	//3.ȱʡ���캯�������ṩ��Ĭ��ʵ�ε�Ĭ�Ϲ��캯��
//	Date(int year = 2022, int month = 1, int day = 17)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//Date d4(d1);
//	Date(const Date& d)			//�������캯��
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
	//Date& operator=(const Date& d)
	//{
	//	//����������Լ����Լ���ֵ�Ϳ��Բ�ͬ�����ˣ�ֱ���ж�һ������
	//	if (this != &d)	    //ֱ�ӱȽϵ�ַ�����Ƽ���*this != d ����Ϊ�漰'!='�����������
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
//	//һ���Ѿ����ڵĶ��󿽱���ʼ��һ�����ϴ���ʵ�����Ķ���
//	//��������
//	Date d4(d1);
//	Date d5 = d1;	//��������
//	//�����Ѿ����ڵĶ���֮����и�ֵ����
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
//	Widget x;		//��������x�����ù��캯��
//	//Widget;			//��������
//	//f(Widget());
//	Widget y = f(f(x));      //f(x) ��ֵ����1�Σ���������v1�Σ���������w1�Σ���ֵ����1�Σ��Ż�����
//						     //��������v1�Σ���������w1�Σ���ֵ����1�Σ��Ż���
//}



int main()
{
	Date d1;
	d1.Print();

	const Date d2;
	d2.Print();	     //this Ȩ�޷Ŵ�

	int x = 1;
	int y = 2;
	int*  p = &x;

	int* const p2 = &x;
	int* p4 = p2;

	const int* p3 = &x;
	//int* p5 = p3;

	return 0;
}

