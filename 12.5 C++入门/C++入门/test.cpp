#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

////int a = 0;
//int c = 2;
//namespace bit
//{
//	int c = 1;
//	int b = 2;
//}
//
////using namespace bit;
////using wwh::a;
//int g_val = 2017;
//
//int main()
//{
//	space::a = 0;
//	printf("%d\n", bit :: c);
//	printf("%d\n", space::a);
//	space::ListInit();
//	struct space::node N1 = { NULL ,1 };
//
//	return 0;
//}


//#include<iostream>
//using namespace std;	//不好
//int main()
//{
//	cout << "Hello world!!!" << endl;
//	return 0;
//}


	//#include<iostream>
	//int main()
	//{
	//	std::cout << "Hello world!!!" << std::endl;
	//	return 0;
	//}


//#include<iostream>
//using std::cout;
//using std::endl;
//int main()
//{
//	cout << "Hello world!!!" << endl;
//	return 0;
//}


#include<iostream>
using namespace std;	//不好
int main()
{
	cout << "Hello world!!!" << endl;
	cout << "Hello world!!!" << '\n';
	cout << "Hello world!!!\n";

	//自动识别类型
	int i = 10;
	double d = 1.11;
	cout << i << " " << d << endl;
	
	cin >> i >> d;
	cout << i << " " << d << endl;

	return 0;
}

//
//namespace N1
//{
//	int a = 1;
//
//	struct S
//	{
//		int b;
//		int c;
//	}s;
//
//	int Add(int left, int right)    
//	{
//		return left + right;
//	}
//}
//int main()
//{
//	N1::s.b = 2;
//	int ret = N1::Add(1, 2);
//	printf("%d\n", N1::a);
//	printf("%d\n", N1::s.b);
//	printf("%d\n", ret);
//	return 0;
//}


//namespace N2
//{
//	struct S
//	{
//		int c;
//		int d;
//	};
//
//	int ADD(int left, int right);
//}
//
//int N2::ADD(int left, int right)
//{
//	return left + right;
//}
//
//int main()
//{
//	struct N2::S s = { 2 ,1 };
//	int ret = N2::ADD(1, 4);
//	printf("%d\n", s.c);
//	printf("%d\n", ret);
//	return 0;
//}


//
//namespace N2
//{
//	int a = 10;
//	int b = 20;
//}
//
//using namespace N2;
//int main()
//{
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}
