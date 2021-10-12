#define _CRT_SECURE_NO_WARNINGS 1


//int* addToArrayForm(int* num, int numSize, int k, int* returnSize)
//{
//	int n = fmax(10, numSize + 1);
//	int* ret = malloc(sizeof(int) * fmax(10, numSize + 1));
//	*returnSize = 0;
//	int i;
//	for (i = numSize - 1; i >= 0; i--)
//	{
//		ret[(*returnSize)++] = (num[i] + k % 10) % 10;
//		if ((num[i] + k % 10) > 9)
//		{
//			k += 10;
//		}
//		k = k / 10;
//
//	}
//	for (; k > 0; k /= 10)
//	{
//		ret[(*returnSize)++] = k % 10;
//	}
//
//	for (int i = 0; i < (*returnSize) / 2; i++)
//	{
//		int tmp = ret[i];
//		ret[i] = ret[(*returnSize) - 1 - i];
//		ret[(*returnSize) - 1 - i] = tmp;
//	}
//	return ret;
//}

//
//int removeDuplicates(int* nums, int numsSize)
//{
//	int left = 0, right = 0;
//	if (numsSize == 0)
//	{
//		return 0;
//	}
//	for (right = 0; right < numsSize; right++)
//	{
//		if (nums[left] != nums[right])
//		{
//			left++;
//			nums[left] = nums[right];
//		}
//	}
//
//	return left + 1;
//}



//int removeElement(int* nums, int numsSize, int val)
//{
//	int right = numsSize - 1;
//	int tmp = 0;
//	int i, j;
//	for (i = 0; i < numsSize; i++)
//	{
//		if (nums[i] == val)
//		{
//			nums[i] = nums[right];
//			i--;
//			numsSize--;
//			right--;
//		}
//	}
//	return numsSize;
//
//}

//
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
//{
//	int p1 = m - 1;
//	int p2 = n - 1;
//	int tail = nums1Size - 1;
//
//	while (p1 >= 0 || p2 >= 0)
//	{
//		if (p1 < 0)
//		{
//			nums1[tail--] = nums2[p2--];
//		}
//		else if (p2 < 0)
//		{
//			nums1[tail--] = nums1[p1--];
//		}
//		else if (nums1[p1] > nums2[p2])
//		{
//			nums1[tail--] = nums1[p1--];
//		}
//		else
//		{
//			nums1[tail--] = nums2[p2--];
//		}
//	}
//}


void turnover(int* nums, int left, int right)
{
	int tmp = 0;
	while (left < right)
	{
		tmp = nums[left];
		nums[left] = nums[right];
		nums[right] = tmp;
		left++;
		right--;
	}
}

void rotate(int* nums, int numsSize, int k)
{
	//翻转整个数组
	k = k % numsSize;
	turnover(nums, 0, numsSize - 1);
	//分别翻转
	turnover(nums, 0, k - 1);
	turnover(nums, k, numsSize - 1);
}