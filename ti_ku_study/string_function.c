#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<math.h>
#include<stdlib.h>



//char* my_strcpy(char* str1, char* str2)
//{
//	assert(str1 && str2);
//	char* ret = str1;
//	while (*str1++ = *str2++)  //  把数组2中的数据拷贝到数组1中
//		;
//	return ret;
//}
//
//int main()   //                                                    模拟实现字符串拷贝 strcpy
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
//int main() //                                                        模拟实现字符串比较 strcmp
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
//int main()  //                                                      模拟实现strcat  字符串连接  不能自己连接自己 会出现错误
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
//int main()  //                                                 模拟实现strncpy 拷贝字符  n个 如果n超过字符串长度 后面补充\0
//{
//	char arr1[20] = "################";
//	char arr2[] = "hello bit";
//	printf(my_strncpy(arr1, arr2, 19));
//	return 0;
//}





//int main()  // 合并两个有序数组到一个数组中
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
//	int* pShuZuTou;			//动态数组的首地址
//	unsigned int iRongLiang;//动态数组的容量
//	unsigned int iShuLiang;	//动态数组的赋值数量
//};
//
////初始化
//void ChuiShiHua(struct DongTaiShuzu* pStShuzu)
//{
//	pStShuzu->iRongLiang = 5;
//	pStShuzu->iShuLiang = 0;//每添加一个  数量就进行一个自加 
//	pStShuzu->pShuZuTou = (int*)malloc(sizeof(int) * pStShuzu->iRongLiang);
//}
////尾部添加元素
//void ZengJia(struct DongTaiShuzu* pStShuzu, int iShuJu)//第一我们是在哪里添加 我们是在动态数组上添加 所以说需要把动态数组传递进来  那么传递的话也是传递地址 数组变量进行修改传递地址就可以了
////普通值 传递个随便的值 就可以了  将这个数据填到我们数组里面 我们这个动态数组里面 只有容量没有数据  容量标着0说明我们没有使用
//{
//	//判断我们的动态数组是否满了
//	if (pStShuzu->iRongLiang == pStShuzu->iShuLiang)//判断是否满了
//	{
//		//容量变大 
//		pStShuzu->iRongLiang += 10;//变大十个字节空间 十个元素
//		//申请空间   定义一个中间变量指针 记录这个首地址空间   上面先变得容量  这里直接*容量就可以了   所以先变容量再malloc空间  要不然就变成和原来空间就一样的了
//		int* pTemp = (int*)malloc(sizeof(int) * pStShuzu->iRongLiang);
//		//将原数据复制进新的空间
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
//			//将原空间释放
//			free(pStShuzu->pShuZuTou);
//			//将数组头指向新的空间
//			pStShuzu->pShuZuTou = pTemp;
//		}
//	}
//	//将数据装进去
//	pStShuzu->pShuZuTou[pStShuzu->iShuLiang] = iShuJu;
//	//以存储数量++
//	pStShuzu->iShuLiang++;
//}
////对输出函数的一个封装 这样传递谁就可以 传递谁
//void ShuChu(struct DongTaiShuzu* pStShuzu)//只是输出  不进行修改 这里也可以不传递指针   传递普通的 结构体之间也可以互相赋值 就是外边的结构体 给函数内部的结构体进行赋值 
////这样就涉及到一个问题  就是两个结构体完全的赋值  浪费的时间会有点长  传递指针就是单纯的传递地址 
//{
//	//检测参数	
//	if (NULL == pStShuzu)//判断传递进来的是不是NULL  如果是NULL就会函数结束
//	{
//		printf("参数错误\n");
//		return;//结束函数 
//	}
//	printf("容量：%u 以存储数量：%u\n", pStShuzu->iRongLiang, pStShuzu->iShuLiang);
//	printf("数据：\n");
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
	//printf("请输入密码\n");
	//scanf("%s", a);
	//char te = 0;
	//while ((te = getchar()) != '\n')
	//{
	//	;
	//}
	//printf("请确认密码y\n");
	//int ss = getchar();
	//if (ss == 'y')
	//{
	//	printf("密码正确\n");

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
	// 	   计算数中出现1的个数
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
