#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//int main()   //����������  ��������10���� �ж��Ƿ�Ϊ���� �����
//{
//	int i, j, a[10], sum = 0;
//	int* p;
//	printf("�����������е���:>");
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &a[i]);
//	}
//	p = a;
//	for (; p < a + 10; p++)
//	{
//		int flag = 0;
//		for (j = 2; j < *p; j++)
//		{
//			if (*p % j == 0)
//			{
//				flag = 1;
//			}
//			if (flag == 0)
//			{
//				sum += *p;
//			}
//		}
//	}
//	printf("����֮��Ϊ%d", sum);
//	return 0;
//}



//int ispremi(int x)
//{
//	int i;
//	if (x == 0)
//		return 0;
//	if (x == 1)
//		return 1;
//	for (i = 2; i <= x; i++)
//	{
//		if (x % i == 0)
//			break;
//	}
//	if (i < x) return 0;
//	else return 1;
//}
//
// 
// 
//int main()  //������������ �����������2  Ȼ�����
//{
//	int i, j, n, m;
//	int t = 0;
//	printf("��������Ҫ�ķ�Χ��>");
//	scanf_s("%d%d", &n, &m);
//	for (i = n; i < m - 2; i++)
//	{
//		if (ispremi(i) && ispremi(i + 2))
//		{
//			printf("��%d��:  %d %d\n", t + 1, i, i + 2);
//			t++;
//		}
//	}
//	if (t == 0) printf("������û������������");
//	else printf("��������%d������������", t);
//	return 0;
//}



//typedef struct student {
//	char ID[10];
//	char NAME[10];
//	float SCORE[3];
//}STUDENT;
//int main() {
//	STUDENT student[10];
//	int i, j, n;
//	printf("������ѧ��������");
//	scanf_s("%d", &n);
//	float sum[3] = {0}, aver[3];
//	if (n > 3 && n < 10) {
//		for (i = 0; i < n; i++) {
//			printf("�������%dλѧ�����֣�", i + 1);
//			scanf_s("%s", student[i].NAME, 10);
//			printf("�������%dλѧ��ѧ�ţ�", i + 1);
//			scanf_s("%s", student[i].ID, 10);
//			for (j = 0; j < 3; j++) {
//				printf("�������%dλ��%d�ųɼ���", i + 1, j + 1);
//				scanf_s("%f", &student[i].SCORE[j]);
//			}
//		}
//	}
//	else
//		printf("�����ѧ����������");
//	 for (j = 0; j < 3; j++){
//		for (i = 0; i < n; i++)
//			sum[i] += student[i].SCORE[j];
//		aver[i] = sum[i] / n;
//		printf("��%d�ŵ�ƽʱ�ɼ�Ϊ��%.2f\n", i + 1, aver[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0, j = 0;
//	int sum = 0;
//	for (i = 10000; i < 100000; i++)
//	{
//		sum = 0;
//		for (j = 10; j < 10000; j *= 10)
//		{
//			sum += (i % j) * (i / j);
//		}
//		if (sum == i) printf("%d\n", i);
//	}
//	return 0;
//}




//int main()
//{
//	int i, r;
//	char s1[] = "bus", s2[] = "book";
//	for (i = r = 0; s1[i] != "\0" && s2[i] != "\0"; i++)
//	{
//		if (s1[i] == s2[i]) i++; //���ִ������һ�� ��i�Լ������� ����forѭ��һ��  ֱ�ӵ����������Ԫ����   s-o����4
//		else
//		{
//			r = s1[i] - s2[i];
//			printf("%d", r);
//			break;
//		}
//	}
//	printf("%d", r);
//	return 0;
//}



//int main()   //����������  ��������10���� �ж��Ƿ�Ϊ���� �����
//{
//	int i, j, a[10], sum = 0;
//	int* p;
//	printf("�����������е���:>");
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &a[i]);
//	}
//	p = a;
//	for (; p < a + 10; p++)
//	{
//		int flag = 0;
//		for (j = 2; j < *p; j++)
//		{
//			if (*p % j == 0)
//			{
//				flag = 1;
//			}
//			if (flag == 0)
//			{
//				sum += *p;
//			}
//		}
//	}
//	printf("����֮��Ϊ%d", sum);
//	return 0;
//}




//int main()//    �ַ�������  ĸ��Ϊ�ź�����ַ���  ��������ַ������뵽ĸ�ַ�����  �����
//{
//	char arr1[20] = "cdfgjlm";
//	char arr2[] = "ehiknab";
//	int i = 0, j, k;
//	while (arr2[i] != '\0')
//	{
//		j = 0;
//		while (arr1[j] <= arr2[i])
//		{
//			j++;
//		}
//		for (k = strlen(arr1); k >= j; k--)
//		{
//			arr1[k + 1] = arr1[k];
//		}
//		arr1[j] = arr2[i];
//		i++;
//	}
//	printf(arr1);
//	return 0;
//}

//void sss(char* p, char* q)   //�ַ�����������
//{
//	while (*++p) ;   //����д��*P++  ��Ϊ����\0��ʱ����������ƫ��һλ��\0����
//	while (*q)
//	{
//		*p = *q;
//		p++;
//		q++;
//	}
//	*p = '\0';
//}
//
//int main()
//{
//	char s1[80] = "tang";
//	char s2[80] = "shan";
//	sss(s2, s1);
//	sss(s1, s2);
//	printf(s1);
//	return 0;
//}



//void change(int* k)
//{
//	*(k + 0) = *(k + 5);
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	while (n <= 4)
//	{
//		change(&arr[n]);
//		n++;
//	}
//	for (n = 0; n < 5; n++)
//	{
//		printf("%d ", arr[n]);   //����ӡ�Ľ��   6 7 8 9 10
//	}
//	return 0;
//}



//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };//��ά������ÿ��Ԫ�صĺͱ��浽һά�������ú����
//	int i, j;
//	int arr_1[3] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			arr_1[i] += arr[i][j];
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d", arr_1[i]);
//	}
//	return 0;
//}



//int main()
//{
//	char* a = "you";
//	char b[] = "welcome you to china";
//	char *p;
//	int i, j;
//	for (i = 0; b[i] != '\0'; i++)
//	{
//		p = a;
//		if (*p == b[i])// �ҵ�����b����y��ȵ��Ǹ��ַ�  ��ʱ��i��ֵ����b������y���±�
//		{
//			for (j = i; *p != '\0'; j++)// ������b�����pָ������� ֱ��*pΪ��\0������������Ԫ�ز����
//			{
//				if (*p != b[j])
//					break;
//				p++;
//			}
//			if (*p == '\0')
//				break;
//		}
//	}
//	printf("%s", &b[i]);  //���н��  you to china
//	return 0;
//}




// 
//#include<math.h>
//
//int main() {
//	int n = 9;
//	float* f = (float*)&n;
//	printf("%.150f\n", *f);
//	printf("%.150f", (float)0.00000000000000000001001*pow(2, -126));
//	return 0;
//}