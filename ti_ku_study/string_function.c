#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<math.h>
#include<stdlib.h>



//char* my_strcpy(char* str1, char* str2)
//{
//	assert(str1 && str2);
//	char* ret = str1;
//	while (*str1++ = *str2++)  //  ������2�е����ݿ���������1��
//		;
//	return ret;
//}
//
//int main()   //                                                    ģ��ʵ���ַ������� strcpy
//{
//	char arr_1[20] =  "beijing";
//	char arr_2[] = "hello bit";
//	my_strcpy(arr_1, arr_2);
//	printf(arr_1);
//
//	return 0;
//}




//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
//int main() //                                                        ģ��ʵ���ַ����Ƚ� strcmp
//{
//	char arr_1[] = "this is str1";
//	char arr_2[] = "this is str2";
//	int ret = my_strcmp(arr_1, arr_2);
//
//
//	printf("%d", ret);
//}



//char* my_strcat(char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* ret = str1;
//	while (*str1++)
//		;
//	str1--;
//	while (*str1++ = *str2++)
//		;
//	return ret;
//}
//
//int main()  //                                                      ģ��ʵ��strcat  �ַ�������  �����Լ������Լ� ����ִ���
//{
//	char arr_1[20] = "ni hao ";
//	my_strcat(arr_1, "hello bit");
//	printf(arr_1);
//
//	return 0;
//}




//char* my_strncpy(char* str1, char* str2, int len)
//{
//	assert(str1 && str2);
//	char* ret = str1;
//	while (len&&(*str1++=*str2++))
//	{
//		len--;
//	}
//	if (len)
//	{
//		while (--len)
//			*str1++ = "\0";
//	}
//	return ret;
//}
//
//int main()  //                                                 ģ��ʵ��strncpy �����ַ�  n�� ���n�����ַ������� ���油��\0
//{
//	char arr1[20] = "################";
//	char arr2[] = "hello bit";
//	printf(my_strncpy(arr1, arr2, 19));
//	return 0;
//}





//int main()  // �ϲ������������鵽һ��������
//{
//    int n = 3;
//    int m = 3;
//    int nums1[10] = { 1,2,3,0,0,0 };
//    int nums2[] = { 2,5,6 };
//    int i = 0;
//    int j = 0;
//    for (i=0 ; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            if (nums1[j] >= nums2[i])
//            {
//                int k = m;
//                while (k > j)
//                {
//                    nums1[k] = nums1[k - 1];
//                    k--;
//                }
//                nums1[k] = nums2[i];
//                m++;
//                break;
//            }
//        }
//        if (j == m)
//        {
//            nums1[m] = nums2[i];
//            m++;
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        printf("%d  ", nums1[i]);
//    }
//	return 0;
//}




//struct DongTaiShuzu
//{
//	int* pShuZuTou;			//��̬������׵�ַ
//	unsigned int iRongLiang;//��̬���������
//	unsigned int iShuLiang;	//��̬����ĸ�ֵ����
//};
//
////��ʼ��
//void ChuiShiHua(struct DongTaiShuzu* pStShuzu)
//{
//	pStShuzu->iRongLiang = 5;
//	pStShuzu->iShuLiang = 0;//ÿ���һ��  �����ͽ���һ���Լ� 
//	pStShuzu->pShuZuTou = (int*)malloc(sizeof(int) * pStShuzu->iRongLiang);
//}
////β�����Ԫ��
//void ZengJia(struct DongTaiShuzu* pStShuzu, int iShuJu)//��һ��������������� �������ڶ�̬��������� ����˵��Ҫ�Ѷ�̬���鴫�ݽ���  ��ô���ݵĻ�Ҳ�Ǵ��ݵ�ַ ������������޸Ĵ��ݵ�ַ�Ϳ�����
////��ֵͨ ���ݸ�����ֵ �Ϳ�����  ���������������������� ���������̬�������� ֻ������û������  ��������0˵������û��ʹ��
//{
//	//�ж����ǵĶ�̬�����Ƿ�����
//	if (pStShuzu->iRongLiang == pStShuzu->iShuLiang)//�ж��Ƿ�����
//	{
//		//������� 
//		pStShuzu->iRongLiang += 10;//���ʮ���ֽڿռ� ʮ��Ԫ��
//		//����ռ�   ����һ���м����ָ�� ��¼����׵�ַ�ռ�   �����ȱ������  ����ֱ��*�����Ϳ�����   �����ȱ�������malloc�ռ�  Ҫ��Ȼ�ͱ�ɺ�ԭ���ռ��һ������
//		int* pTemp = (int*)malloc(sizeof(int) * pStShuzu->iRongLiang);
//		//��ԭ���ݸ��ƽ��µĿռ�
//		if (pTemp == NULL)
//		{
//			return;
//		}
//		else
//		{
//			for (unsigned int i = 0; i < pStShuzu->iShuLiang; i++)
//			{
//				pTemp[i] = pStShuzu->pShuZuTou[i];
//			}
//			//��ԭ�ռ��ͷ�
//			free(pStShuzu->pShuZuTou);
//			//������ͷָ���µĿռ�
//			pStShuzu->pShuZuTou = pTemp;
//		}
//	}
//	//������װ��ȥ
//	pStShuzu->pShuZuTou[pStShuzu->iShuLiang] = iShuJu;
//	//�Դ洢����++
//	pStShuzu->iShuLiang++;
//}
////�����������һ����װ ��������˭�Ϳ��� ����˭
//void ShuChu(struct DongTaiShuzu* pStShuzu)//ֻ�����  �������޸� ����Ҳ���Բ�����ָ��   ������ͨ�� �ṹ��֮��Ҳ���Ի��ำֵ ������ߵĽṹ�� �������ڲ��Ľṹ����и�ֵ 
////�������漰��һ������  ���������ṹ����ȫ�ĸ�ֵ  �˷ѵ�ʱ����е㳤  ����ָ����ǵ����Ĵ��ݵ�ַ 
//{
//	//������	
//	if (NULL == pStShuzu)//�жϴ��ݽ������ǲ���NULL  �����NULL�ͻắ������
//	{
//		printf("��������\n");
//		return;//�������� 
//	}
//	printf("������%u �Դ洢������%u\n", pStShuzu->iRongLiang, pStShuzu->iShuLiang);
//	printf("���ݣ�\n");
//	for (unsigned int i = 0; i < pStShuzu->iShuLiang; i++)
//	{
//		printf("%d\n", pStShuzu->pShuZuTou[i]);
//	}
//}
//
//int main(void)
//{
//	struct DongTaiShuzu stShuzu;
//	ChuiShiHua(&stShuzu);
//	ZengJia(&stShuzu, 124);
//	ZengJia(&stShuzu, 125);
//	ZengJia(&stShuzu, 126);
//	ZengJia(&stShuzu, 127);
//	ZengJia(&stShuzu, 128);
//	ZengJia(&stShuzu, 129);
//	ZengJia(&stShuzu, 130);
//
//	printf("%u %u\n", stShuzu.iRongLiang, stShuzu.iShuLiang);
//
//	for (unsigned int i = 0; i < stShuzu.iShuLiang; i++)
//	{
//		printf("%d\n", stShuzu.pShuZuTou[i]);
//	}
//	ShuChu(&stShuzu);
//
//	free(stShuzu.pShuZuTou);
//	system("pause");
//	return 0;
//}

//int main()
//{
	//char a[10] = { 0 };
	//printf("����������\n");
	//scanf("%s", a);
	//char te = 0;
	//while ((te = getchar()) != '\n')
	//{
	//	;
	//}
	//printf("��ȷ������y\n");
	//int ss = getchar();
	//if (ss == 'y')
	//{
	//	printf("������ȷ\n");

	//}
	//else
	//{
	//	printf("..");
	//}
//}

//int main()
//{
//	//int n = 0, i = 0, j = 0;
//	//int ret = 1;
//	//double e = 1.0;
//	//scanf("%d", &n);
//	//for (j = 1; j <= n; j++)
//	//{
//	//	ret *= j;
//	//	e += 1.0 * 1 / ret;
//	//}
//	//printf("%.8lf\n", e);
//
//	int n = 0, i = 0, j = 0;
//	double e = 1.0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		e += 1.0 * 1 / ret;
//	}
//	printf("%.8lf\n", e);
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[20];
//}stu1[5];
//
//
//unsigned long fac(unsigned long num) {
//	if (num != 1) {
//		return fac(num - 1) * num;
//	}
//	else
//		return 1;
//}
//
//unsigned long rec(unsigned long a, unsigned long b) {
//
//	if (b == 1) {
//		return fac(a) / fac(a - 1);
//	}
//	else if (b == a) {
//		return 1;
//	}
//	else
//	{
//		return rec(a - 1, b - 1) + rec(a - 1, b);
//	}
//
//}

//int main()
//{
	//unsigned long base, son;
	//scanf("%lu %lu", &base, &son);
	//if (son <= base && base <= 25 && son > 0) {
	//	printf("%lu\n", rec(base, son));
	//}
	//int i;
	//double y, miny, arr[N], x = 1.0;
	//for (i = 0; i < 10; i++, x++)
	//{
	//	y = (x * x - 8 * x + sin(x));
	//	arr[i] = y;
	//}
	//miny = arr[0];
	//for (i = 1; i < 10; i++)
	//{
	//	if (miny > arr[i])
	//	{
	//		miny = arr[i];
	//		x = 1.0 * i + 1;
	//	}
	//}
	//printf("MinY = %4.2lf  at x=%.0lf \n", miny, x);
	//int N = 0;
	//while (scanf("%d", &N) != EOF) {
	//	int i = 0, j = 0;
	//	for (i = 0; i < N + 2; i++) {
	//		if (i == 0 || i == N + 1) {
	//			printf(" ");
	//			for (int k = 0; k < N; k++) {
	//				printf("*");
	//			}
	//			printf(" \n");
	//		}
	//		else {
	//			printf("*");
	//			for (int k = 0; k < N; k++) {
	//				printf(" ");
	//			}
	//			printf("*\n");
	//		}
	//	}
	//}
	// 	   �������г���1�ĸ���
	//unsigned int n, ones = 0;
	//scanf("%lu", &n);
	//for (long long m = 1; m <= n; m *= 10)
	//	ones += (n / m + 8) / 10 * m + (n / m % 10 == 1) * (n % m + 1);
	//printf("%lu", ones);
	//int n, x, i;
	//scanf("%d", &n);
	//while (n)
	//{
	//	scanf("%d", &x);
	//	if (x < 2)
	//		printf("other\n");
	//	for (i = 2; i < x; i++)
	//	{
	//		if (x % i == 0)
	//		{
	//			printf("no\n");
	//			break;
	//		}
	//			
	//	}
	//	if (i == x)
	//	{
	//		printf("yes\n");
	//	}
	//	n--;
	//}
	//int n, i, j, m;
	//scanf("%d", &n);
	//for (i = 3; i < n; i++)
	//{
	//	for (j = 2; j < i; j++)
	//	{
	//		if (i % j == 0)
	//			break;
	//	}
	//	if (i == j)
	//	{
	//		m = n - i;
	//		for (j = 2; j < m; j++)
	//		{
	//			if (m % j == 0)
	//				break;
	//		}
	//		if (j == m)
	//		{
	//			printf("%d=%d+%d", n  ,i ,m);
	//			break;
	//		}
	//	}
	//}
	
//}


//int C(int n, int m) {
//	if (n == m || m == 0) {
//		return 1;
//	}
//	if (n < m) {
//		return 0;
//	}
//	return C(n - 1, m - 1) + C(n - 1, m);
//}
//
//int main() {
//	int n, m;
//	scanf("%d%d", &n, &m);
//	printf("%d\n", C(n, m));
//	test();
//	return 0;
//}


//int main() {

	//struct stu stu1[2] = { { "okkk", 20, "oo", "ooo"  },{"ooook",30,"iiii","ooooo"} };
	//int length = sizeof(stu1) / sizeof(struct stu);
	//int i = 0;
	//for (i = 0; i < length; i++)
	//{
	//	printf("%s %d %s %s\n", stu1[i].name, stu1[i].age, stu1[i].sex, stu1[i].id);
	//}

//}
//int main()
//{
//	int count = 0, x = 0, y = 0;
//	int c[2000] = { 0 };
//	int a;
//	scanf_s("%d %d", &x, &y);
//
//	for (a = x; a <= y; a++)
//	{
//		if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
//		{
//			c[count] = a;
//			count++;
//		}
//
//	}
//	printf("%d\n", count);
//	for (int i = 0; i < count; i++)
//	{
//		printf("%d  ", c[i]);
//	}
//	return 0;
//
//}
