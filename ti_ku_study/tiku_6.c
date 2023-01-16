#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>

//#define LEN 12

//int main() //                                                                    插入排序
//{
//	int arr[6] = { 26,12,9,4,6,8 };
//	int t, i, j;
//	for (i = 1; i < 6; i++)
//	{
//		t = arr[i];   //  记录当前数组中的元素    降序排序
//		j = i - 1;
//		while (j >= 0 && (t > arr[j]))
//		{
//			arr[j + 1] = arr[j];
//			j--;
//		}
//		arr[j + 1] = t;
//	}
//	for (i = 0; i < 6; i++) printf("%d\t", arr[i]);
//	return 0;
//}


//int main() //矩阵数组求对角线的和  算法的实现 主要是元素对角线下标的规律
//{
//	  
//	return 0;
//}


//int num[] = { 3,4,5,6,7,8,9,10,11,12,13,14 };//全局变量数组
//int main()   //                                              题库6.82题  判断素数  让后输出 不是素数交换数组中首尾数据
//{
//	int i, j, k;
//	int x = 0, y = LEN - 1;
//	while (x <= y)
//	{
//		j = num[x];
//		i = 2;
//		k = 1;
//		while (i <= j / 2 && k)
//		{
//			k = j % i++;
//		}
//		if (k)
//			printf("%3d", num[x++]);
//		else
//		{
//			num[x] = num[y];
//			num[y--] = j;
//		}
//	}
//	for (i = LEN - 1; i > x; i--)
//	{
//		printf("%5d", num[i]);
//	}
//	return 0;
//}



//int main()  //                     题库6.77题 将二维数组a中每个元素右移一列 最后一列换成第一列 移动后的数组存到另一个二维数组b中并按矩阵式输出 a和b
//{
//	int i, j;
//	int a[2][3] = { 4,5,6,1,2,3 }, b[2][3];
//	for (i = 0; i < 2; i++)
//		for (j = 0; j < 3; j++)
//		{
//			printf("%5d", a[i][j]);
//			b[i][j + 1] = a[i][j];
//		}
//	for (i = 0; i < 2; i++) b[i][0] = a[i][2];
//	for (i = 0; i < 2; i++)
//		for (j = 0; j < 3; j++)
//			printf("%5d", b[i][j]);
//	return 0;
//}




//void secondbit(int num) //                                               题库6.76 二进制转换的问题
//{
//	if (num > 0)
//	{
//		secondbit(num / 2);
//		printf("%d", num % 2);
//	}
//	return 0;
//}
//
//int main() // 二进制转换 可以使用递归 方便一点
//{
//	int num;
//	printf("请输入你想要转换二进制的数字:>");
//	scanf_s("%d", &num);
//	secondbit(num);
//	return 0;
//}




//int main()  //                                                              矩阵的形式 
//{
//	int array[9][9];
//	int n, i, j, m;
//	printf("请输入阶数:>");
//	scanf_s("%d", &n);
//	m = n / 2;
//	for (i = 0; i < m; i++)
//		for (j = i; j < n - i; j++)
//		{
//			array[i][j] = i + 1;
//			array[n - i - 1][j] = i + 1;
//			array[j][i] = i + 1;
//			array[j][n - i - 1] = i + 1;
//		}
//	if (n % 2 != 0) array[m][m] = i + 1;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//			printf("%d ", array[i][j]);
//		printf("\n");
//	}
//	return 0;
//}