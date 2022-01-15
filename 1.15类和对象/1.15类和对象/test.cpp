#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"


int main()
{

	//const double b = 1.1;
	//double bb = b;
	//bb = 1;

	//const auto& b = 10;
	//cout << typeid(b).name() << endl;


	int array[] = { 1,2,3,4,5 };
	for (auto x : array)
	{
		cout << x << endl;
	}


	return 0;
}

