#define _CRT_SECURE_NO_WARNINGS 1

//struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
//{
//	struct ListNode* dummyhead = (struct ListNode*)malloc(sizeof(struct ListNode));
//	dummyhead->next = head;
//	struct ListNode* fast = dummyhead;
//	struct ListNode* slow = dummyhead;
//	n += 1;
//	while (n--)
//	{
//		fast = fast->next;
//	}
//	while (fast)
//	{
//		fast = fast->next;
//		slow = slow->next;
//	}
//	slow->next = slow->next->next;
//
//	return dummyhead->next;
//}



//struct ListNode* partition(struct ListNode* head, int x)
//{
//	struct ListNode* Less = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* less = Less;
//	struct ListNode* Greater = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* greater = Greater;
//	struct ListNode* cur = head;
//	while (cur)
//	{
//		if (cur->val < x)
//		{
//			less->next = cur;
//			less = less->next;
//		}
//		else
//		{
//			greater->next = cur;
//			greater = greater->next;
//		}
//		cur = cur->next;
//	}
//	greater->next = NULL;
//	less->next = Greater->next;
//
//	return Less->next;
//}