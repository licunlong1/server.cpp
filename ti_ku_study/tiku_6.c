#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>

//#define LEN 12

//int main() //                                                                    ��������
//{
//	int arr[6] = { 26,12,9,4,6,8 };
//	int t, i, j;
//	for (i = 1; i < 6; i++)
//	{
//		t = arr[i];   //  ��¼��ǰ�����е�Ԫ��    ��������
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


//int main() //����������Խ��ߵĺ�  �㷨��ʵ�� ��Ҫ��Ԫ�ضԽ����±�Ĺ���
//{
//	  
//	return 0;
//}


//int num[] = { 3,4,5,6,7,8,9,10,11,12,13,14 };//ȫ�ֱ�������
//int main()   //                                              ���6.82��  �ж�����  �ú���� ��������������������β����
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



//int main()  //                     ���6.77�� ����ά����a��ÿ��Ԫ������һ�� ���һ�л��ɵ�һ�� �ƶ��������浽��һ����ά����b�в�������ʽ��� a��b
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




//void secondbit(int num) //                                               ���6.76 ������ת��������
//{
//	if (num > 0)
//	{
//		secondbit(num / 2);
//		printf("%d", num % 2);
//	}
//	return 0;
//}
//
//int main() // ������ת�� ����ʹ�õݹ� ����һ��
//{
//	int num;
//	printf("����������Ҫת�������Ƶ�����:>");
//	scanf_s("%d", &num);
//	secondbit(num);
//	return 0;
//}




//int main()  //                                                              �������ʽ 
//{
//	int array[9][9];
//	int n, i, j, m;
//	printf("���������:>");
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