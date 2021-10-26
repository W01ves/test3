#define _CRT_SECURE_NO_WARNINGS 1


bool hasCycle(struct ListNode *head)
{
	if (head == NULL || head->next == NULL)
	{
		return false;
	}
	struct ListNode* p1 = head;     //慢指针
	struct ListNode* p2 = head->next;     //快指针
	while (p1 != p2)
	{
		if (p2->next == NULL || p2->next->next == NULL)
		{
			return false;
		}
		p1 = p1->next;
		p2 = p2->next->next;
	}
	return p1;
}



struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
{
	if (headA == NULL || headB == NULL)
	{
		return NULL;
	}
	struct ListNode* pA = headA;
	struct ListNode* pB = headB;
	while (pA != pB)
	{
		if (pA == NULL)
		{
			pA = headB;
		}
		else
		{
			pA = pA->next;
		}
		if (pB == NULL)
		{
			pB = headA;
		}
		else
		{
			pB = pB->next;
		}
	}
	return pA;
}


bool isPalindrome(struct ListNode* head)
{

	//获取链表节点个数
	struct ListNode* cur = head;
	int count = 0;
	while (cur)
	{
		count++;
		cur = cur->next;
	}
	//反转前半部分链表
	int n = count / 2;
	struct ListNode* prev = NULL;
	cur = head;
	while (n--)
	{
		struct ListNode* next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	//找到后半部分头节点，并对比前、后半部分
	struct ListNode* head1 = prev;
	struct ListNode* head2 = NULL;
	if (count % 2 == 0)
	{
		head2 = cur;
	}
	else
	{
		head2 = cur->next;
	}
	while (head1)
	{
		if (head1->val != head2->val)
		{
			return false;
		}
		head1 = head1->next;
		head2 = head2->next;
	}
	return true;
}


struct ListNode *detectCycle(struct ListNode *head)
{
	//判断是否为环形
	if (head == NULL || head->next == NULL)
	{
		return NULL;
	}
	struct ListNode* p1 = head;     //慢指针
	struct ListNode* p2 = head->next;     //快指针
	while (p1 != p2)
	{
		if (p2->next == NULL || p2->next->next == NULL)
		{
			return NULL;
		}
		p1 = p1->next;
		p2 = p2->next->next;
	}
	//若有环  ，出循环后p1 == p2
	//找到环中节点个数count
	int count = 0;
	do
	{
		p2 = p2->next;
		count++;
	} while (p1 != p2);
	//找到链表开始入环的第一个节点
	struct ListNode* start = head;
	int n = 2;
	while (1)
	{
		struct ListNode* final = start;
		while (count--)
		{
			final = final->next;
		}
		if (final == start)
		{
			return start;
		}
		start = start->next;
	}
}


struct ListNode* insertionSortList(struct ListNode* head)
{
	if (head == NULL || head->next == NULL)
	{
		return head;
	}
	struct ListNode* dummyhead = (struct ListNode*)malloc(sizeof(struct ListNode));
	dummyhead->next = head;
	struct ListNode* last = head;
	struct ListNode* cur = head->next;
	while (cur != NULL)
	{
		if (cur->val >= last->val)
		{
			last = cur;
			cur = last->next;
		}
		else
		{
			struct ListNode* prev = dummyhead;
			struct ListNode* ptr = dummyhead->next;
			while (1)
			{
				if (cur->val <= ptr->val)
				{
					last->next = cur->next;
					prev->next = cur;
					cur->next = ptr;
					cur = last->next;
					break;
				}
				else
				{
					prev = ptr;
					ptr = ptr->next;
				}
			}
		}
	}

	return dummyhead->next;
}

struct ListNode* detectCycle(struct ListNode* head)
{
	struct ListNode *slow = head, *fast = head;
	while (fast != NULL) {
		slow = slow->next;
		if (fast->next == NULL) {
			return NULL;
		}
		fast = fast->next->next;
		if (fast == slow) {
			struct ListNode* ptr = head;
			while (ptr != slow) {
				ptr = ptr->next;
				slow = slow->next;
			}
			return ptr;
		}
	}
	return NULL;
}

