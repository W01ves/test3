#pragma once
#include <stdio.h>

namespace space
{
	static int a ;

	struct node
	{
		struct node* next;
		int val;
	};

	void ListInit();
}
