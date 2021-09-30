#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int missingNumber(int* nums, int numsSize)
//{
//	int i, x = 0;
//	for (i = 0; i < numsSize; i++)
//	{
//		x ^= nums[i];
//	}
//	for (i = 0; i <= numsSize; i++)
//	{
//		x ^= i;
//	}
//	return x;
//}
//
//
//int main()
//{
//	int nums[] = { 3,0,1 };
//	int numsSize = 3;
//	int x = missingNumber(nums, numsSize);
//	printf("%d\n", x);
//	return 0;
//}

//
//int* singleNumber(int* nums, int numsSize, int* returnSize)
//{
//	int i, x = 0;
//	*returnSize = 2;
//	for (i = 0; i < numsSize; i++)
//	{
//		x ^= nums[i];
//	}
//	int j = 0;
//	while (!((x >> j) & 1))
//	{
//		j++;
//	}
//	int *arr = (int*)calloc(2, sizeof(int));
//
//	for (i = 0; i < numsSize; i++)
//	{
//		if ((nums[i] >> j) & 1)
//		{
//			arr[0] ^= nums[i];
//		}
//		else
//		{
//			arr[1] ^= nums[i];
//		}
//	}
//
//	return arr;
//}
//
//int main()
//{
//	int nums[] = { 1193730082,587035181,-814709193,1676831308,-511259610,284593787,-2058511940,1970250135,-814709193,-1435587299,1308886332,-1435587299,1676831308,1403943960,-421534159,-528369977,-2058511940,1636287980,-1874234027,197290672,1976318504,-511259610,1308886332,336663447,1636287980,197290672,1970250135,1976318504,959128864,284593787,-528369977,-1874234027,587035181,-421534159,-786223891,933046536,959112204,336663447,933046536,959112204,1193730082,-786223891 };
//	int numsSize = sizeof(nums) / sizeof(nums[1]);
//	int returnSize[2] = { 0 };
//	int* Size = singleNumber(nums,  numsSize, returnSize);
//	printf("%d %d", Size[0], Size[1]);
//
//	return 0;
//}




