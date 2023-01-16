#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//int main()   //素数的运用  数组中有10个数 判断是否为素数 并求和
//{
//	int i, j, a[10], sum = 0;
//	int* p;
//	printf("请输入数组中的数:>");
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
//	printf("质数之和为%d", sum);
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
//int main()  //区间内找素数 并且素数相差2  然后输出
//{
//	int i, j, n, m;
//	int t = 0;
//	printf("请输入你要的范围：>");
//	scanf_s("%d%d", &n, &m);
//	for (i = n; i < m - 2; i++)
//	{
//		if (ispremi(i) && ispremi(i + 2))
//		{
//			printf("第%d组:  %d %d\n", t + 1, i, i + 2);
//			t++;
//		}
//	}
//	if (t == 0) printf("该区间没有孪生素数！");
//	else printf("该区间有%d组孪生素数！", t);
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
//	printf("请输入学生人数：");
//	scanf_s("%d", &n);
//	float sum[3] = {0}, aver[3];
//	if (n > 3 && n < 10) {
//		for (i = 0; i < n; i++) {
//			printf("请输入第%d位学生名字：", i + 1);
//			scanf_s("%s", student[i].NAME, 10);
//			printf("请输入第%d位学生学号：", i + 1);
//			scanf_s("%s", student[i].ID, 10);
//			for (j = 0; j < 3; j++) {
//				printf("请输入第%d位第%d门成绩：", i + 1, j + 1);
//				scanf_s("%f", &student[i].SCORE[j]);
//			}
//		}
//	}
//	else
//		printf("输入的学生人数错误！");
//	 for (j = 0; j < 3; j++){
//		for (i = 0; i < n; i++)
//			sum[i] += student[i].SCORE[j];
//		aver[i] = sum[i] / n;
//		printf("第%d门的平时成绩为：%.2f\n", i + 1, aver[i]);
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
//		if (s1[i] == s2[i]) i++; //如果执行了这一条 则i自加了两次 还有for循环一次  直接到数组第三个元素了   s-o等于4
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



//int main()   //素数的运用  数组中有10个数 判断是否为素数 并求和
//{
//	int i, j, a[10], sum = 0;
//	int* p;
//	printf("请输入数组中的数:>");
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
//	printf("质数之和为%d", sum);
//	return 0;
//}




//int main()//    字符串排序  母串为排好序的字符串  把无序的字符串插入到母字符串中  并输出
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

//void sss(char* p, char* q)   //字符串连接问题
//{
//	while (*++p) ;   //不可写成*P++  因为到了\0的时候他还会再偏移一位到\0后面
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
//		printf("%d ", arr[n]);   //最后打印的结果   6 7 8 9 10
//	}
//	return 0;
//}



//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };//二维数组中每行元素的和保存到一维数组中让后输出
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
//		if (*p == b[i])// 找到数组b中与y相等的那个字符  这时候i的值就是b数组中y的下标
//		{
//			for (j = i; *p != '\0'; j++)// 向后遍历b数组和p指向的数组 直到*p为‘\0’或者他两个元素不相等
//			{
//				if (*p != b[j])
//					break;
//				p++;
//			}
//			if (*p == '\0')
//				break;
//		}
//	}
//	printf("%s", &b[i]);  //运行结果  you to china
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