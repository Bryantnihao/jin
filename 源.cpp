#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int abc(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz ;
	while (left <= right)
	{
		int mid=(left + right)/2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid]>k)
		{
			right = mid - 1;
		}
    else
{
		return mid;
}
	} return -1;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 8, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0])-2;
	int ret = abc(arr, k, sz);
	if (ret == -1)
	{
		printf("找不到指定的数字\n");
	}
	else{
		printf("找到了，小标识：%d\n", ret);
	}  return 0;
}
