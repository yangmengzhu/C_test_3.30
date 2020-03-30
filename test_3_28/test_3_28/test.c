#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//打印二维数组的地址
//int main()
//{
//	int i = 0;
//	int arr[3][4] = { { 1, 2 }, { 3, 4 }, { 5 } };
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[3][4] = { { 1, 2 }, { 3, 4 }, { 5 } };
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//冒泡排序将有序数组升序
////void Bubblesort(int arr[], int sz)
////{
////	int i = 0;
////	for (i = 0; i < sz - 1; i++)
////	{
////		int flag = 1;
////		int j = 0;
////		for (j = 0; j <sz-1-i; j++)
////		{
////			if (arr[j]>arr[j + 1])
////			{
////				int tmp = 0;
////				tmp = arr[j];
////				arr[j] = arr[j + 1];
////				arr[j + 1] = tmp;
////				flag = 0;
////			}
////		}
////		if (flag == 1)
////		{
////			break;
////		}
////	}
////	
////}
////printarr(int arr[], int sz)
////{
////	int i = 0;
////	for (i = 0; i < sz; i++)
////	{
////		printf("%d ", arr[i]);
////	}
////	printf("\n");
////}
////int main()
////{
////	int arr[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	printarr(arr, sz);
////	Bubblesort(arr, sz);
////	printarr(arr, sz);
////	return 0;
////}
//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 3, 4, 2, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr;
//	print(p, sz);
//	reverse(arr, sz);
//	init(arr, sz);
//	return 0;
//}
//void change(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = 0;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\t", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\t", arr2[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, };
//	int arr2[] = { 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	change(arr1, arr2, sz);
//	return 0;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int x = 0;
//	int count = 0;
//	scanf("%d%d", &m, &n);
//	for (i = 0; i < 32; i++)
//	{
//		x = m^n;
//		if (x>>i&1==1)
//		{
//			count++;
//		}
//	}
//	printf("ount=%d\n", count);
//	return 0;
//}
//分别输出一个整数的二进制序列中奇数位和偶数位
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int m = 0;
//	printf("请输入一个整数:> ");
//	scanf("%d", &m);
//	printf("奇数数位为：");
//	for (i = 31; i >= 0; i = i - 2)
//	{
//		int x = m >> i & 1;
//		printf("%d ", x);
//	}
//	printf("\n");
//	printf("偶数位为：");
//	for (i = 30; i >= 0; i = i - 2)
//	{
//		int y = m >> i & 1;
//		printf("%d ", y);
//	}
//	printf("\n");
//	return 0;
//}
//函数求出一个整数的二进制序列中1的个数
void numberof1(int m)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (m >> i & 1 == 1)
		{
			count++;
		}
	}
	printf("count=%d\n", count);
}
int main()
{
	int m = 0;
	printf("请输入一个整数:>\n");
	scanf("%d", &m);
	numberof1(m);
	return 0;
}
