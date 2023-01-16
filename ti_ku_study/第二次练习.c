#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

struct stu {
	char name[20];
	int age;
	double score;
};


//int main() {
//	int a = 2;
//	char arr1[] = "abcdefgh";
//	printf("%d", strlen(arr1));
//	printf("%d", sizeof(arr1));
//	/*for (int i = 15; i >= 0; i--) {
//		printf("\a");
//		Sleep(500);
//	}*/
//	printf("%d\n", '\x30');
//	printf("%d\n", strlen("abcdefgheeee"));
//	/*int coding = 0;
//	printf("加入比特\n");
//	printf("你回选择继续学习么(1/0)：");
//	scanf("%d", &coding);
//	if (coding)
//		printf("那你就拿到好的offer！");
//	else
//		printf("那你就回家卖红薯去！");*/
//	printf("%d\n", ++a + 1);
//
//	struct stu s = { "张三",20,86.3 };
//	printf("%s %d %.2lf\n", s.name, s.age, s.score);
//	struct stu* ps = &s;
//	printf("%s %d %.2lf\n", (*ps).name, (*ps).age, (*ps).score);
//
//	printf("%s %d %.2lf\n", ps->name, ps->age, ps->score);
//
//	/*int a1 = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d", a > b ? a : b);*/
//
//
//	//一个小飞机浪费了我好久
//	/*for (int i = 0; i < 6; i++) {
//		int k = 11;
//		for (int j = 0; j < 12; j++,k--) {
//			if ((i < 2) && (j - k == 1 || j - k == -1)) {
//				printf("*");
//			}
//			else if (i < 2) {
//				printf(" ");
//			}
//			if (i >= 2 && i < 4) {
//				printf("*");
//			}
//			else if (i >= 4 && i < 6) {
//				if ((j - k == 3 || j - k == -3)) {
//					printf("*");
//				}
//				else
//					printf(" ");
//			}
//			
//		}
//		printf("\n");
//	}*/
//
//	return 0;
//}

//int main() {
//	char ch[20];
//	printf("请输入你的密码：");
//	scanf("%s", ch);
//	printf("请确认你的密码（Y/N）：");
//	//getchar();//需要把换行符给读取了 不然下面的getchar会读取 让后就不正确了
//	char temp;
//	while ((temp = getchar()) != '\n') {
//		;
//	}
//	char c = getchar();
//	if (c == 'Y') {
//		printf("确认成功！你的密码是%s", ch);
//	}
//	if (c == 'N') {
//		printf("确认失败！");
//	}
//	return 0;
//}

//int main() {
//	int num = 0;
//	printf("请输入你想求阶乘的数：");
//	scanf("%d", &num);
//	int sum = 1;
//	for (int i = 1; i < num + 1; i++) {
//		sum *= i;
//	}
//	printf("1-%d的阶乘为%d", num, sum);
//
//
//	return 0;
//}

//int main() {
//	int sum = 0;
//	int num = 1;
//	for (int i = 1; i <= 5; i++) {
//		num *= i;
//		sum += num;
//	}
//	printf("1！+2！+。。。10！=%d", sum);
//	return 0;
//}

#define MAX 50

//int binsearch(int x, int v[], int n) {
//	int left = 0;
//	int right = n - 1;
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (v[mid] < x) {
//			left = mid + 1;
//		}
//		else if (v[mid] > x) {
//			right = mid - 1;
//		}
//		else {
//			printf("%d", v[mid]);
//			return mid;
//		}
//	}
//}
//
//int main() {
//	int arr[MAX] = { 0 };
//	for (int i = 0; i < MAX; i++) {
//		arr[i] = i;
//	}
//	int num = 0;
//	printf("请输入你想要查找的数字：");
//	scanf("%d", &num);
//	printf("%d在数组中的下标位置是%d", num, binsearch(num, arr, MAX));
//	
//	return 0;
//}

//int main() {
//	char ch[] = "Welcome To Bit!!!!!!!!!";
//	int left = 0;
//	int right = sizeof(ch) / sizeof(ch[0]) - 2;
//	//printf("%c", ch[22]);
//	while (left <= right) {
//		Sleep(500);
//		system("cls");
//		//if (left == right) right -= 1;
//		int mid = right - left - 1;
//		if (right - left == 1) {
//			mid = -1;
//			right = left;
//		}
//		for (int i = 0; i != left; i++) {
//			printf("%c", ch[i]);
//		}
//		for (; mid >= 0; mid--) {
//			printf("#");
//		}
//		for (int j = right; j < sizeof(ch) / sizeof(ch[0]) - 1; j++) {
//			printf("%c", ch[j]);
//		}
//		left++;
//		right--;
//	}
//	return 0;
//}


//求两个数的最大公约数
//int main() {
//	int num1 = 0;
//	int num2 = 0;
//	printf("请输入你想要求的两个数字：");
//	scanf("%d %d", &num1, &num2);
//	//假设num1里面是最大的那个数字
//	/*if (num1 < num2) {
//		num1 ^= num2;
//		num2 ^= num1;
//		num1 ^= num2;
//	}*/
//	//printf("%d %d", num1, num2);
//	int a = num1, b = num2;
//	while (b) {
//		if (a % b == 0) {
//			a = b;
//			break;
//		}
//		a %= b;
//		b %= a;
//	}
//	//最小公倍数的话就是  num1*num2/最大公因数（最大公约数）
//	printf("%d和%d的最大公约数是%d", num1, num2, a);
//
//	return 0;
//}

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <string.h>
//#include <math.h>

//int main() {
//	//系统关闭程序
//	char input[30] = {0};
//	system("shutdown -s -t 60");
//	again:
//	printf("请注意，你的电脑即将再1分钟后关机，请输入“我是一个大傻逼”来进行取消关机！\n");
//	scanf("%s", input);
//	if (!strcmp(input, "我是一个大傻逼")) {
//		printf("恭喜大傻逼已经成功取消关机！\n");
//		system("shutdown -a");
//	}
//	else {
//		printf("给你机会你不中用啊！\n");
//		goto again;
//	}
//	return 0;
//}

//int main() {
//	//查质数 素数 能被自身和1整除的数字
//	//int prime = 0;
//	int count = 0;
//	for (int i = 99; i <= 200; i += 2) {
//		int flag = 1;
//		for (int j = 2; j < i; j++) {
//			if (!(i % j)) {
//				flag = 0;
//				break;
//			}
//
//		}
//		if (flag) {
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n100-200共有%d个质数！", count);
//	return 0;
//}



//void Swap(int* pa, int* pb) {
//	//实际上并不会改变主函数中的ab  因为只是改变了指针的指向 并没有改变实际内容的值！
//	int* z = NULL;
//	z = pa;
//	pa = pb;
//	pb = z;
//}
//
//int main() {
//	int a = 10, b = 20;
//	Swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}

//int is_leap_year(int n) {
//	return ((!(n % 4)) && ((n % 100))) || (!(n % 400));
//}
//
//int main() {
//	int year = 1000;
//	for (; year <= 2000; year++) {
//		if (is_leap_year(year)) {
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}

//int binarysearch(int arr[], int len, int k) {
//	int left = 0;
//	int right = len - 1;
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (arr[mid] > k) {
//			right = mid - 1;
//		}
//		else if (arr[mid] < k) {
//			left = mid + 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//}
//
//
//int main() {
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int search = 0;
//	printf("请输入你想要查找的数字:");
//	scanf("%d", &search);
//	int len = sizeof(arr1) / sizeof(arr1[0]);
//	int ret = binarysearch(arr1, len, search);
//	if (ret!=-1) {
//		printf("找到了，下标是%d", ret);
//	}
//	else {
//		printf("没有找到该数子！");
//	}
//
//
//	return 0;
//}



//void b(int a[]) {
//	printf("%d\n", (int)sizeof(a));
//}
//
//int main() {
//	int arr[] = { 1 , 2};
//	b(arr);
//	printf("%d\n", (int)sizeof(arr));
//	return 0;
//}
//#pragma comment(lib,"sub.lib")

//int main() {
//
//	printf("%d", sub(10, 20));
//
//	return 0;
//}

//void print_reverse(int x) {
//	if (x > 9) {
//		print_reverse(x / 10);
//	}
//	printf("%d -- ", x % 10);
//}
//
//int main() {
//	int num = 0;
//	printf("请输入一个正整数：");
//	scanf("%d", &num);
//	print_reverse(num);
//
//	return 0;
//}

//int my_strlen(char* p) {
//	if (*p) {
//		//printf("%c", *p);
//		return my_strlen(p + 1) + 1;
//	}
//	return 0;
//}
//
//
//int main() {
//	char a[] = "cdeal;kjdfal;kjf ";
//
//	printf("%d", my_strlen(a));
//
//	return 0;
//}

//int factorial(int x) {
//	if (x == 1) {
//		return 1;
//	}
//	else {
//		return x * factorial(x - 1);
//	}
//}
//
//int main() {
//	int num = 0;
//	printf("情输入你要求阶乘的数字：");
//	scanf("%d", &num);
//	printf("%d的阶乘是：%d", num, factorial(num));
//	return 0;
//}

//int fib(int x) {
//	if (x > 2) {
//		return fib(x - 1) + fib(x - 2);
//	}
//	return 1;
//
//}
//
//int main() {
//	int num = 0;
//	printf("请输入你想要求第几个斐波那契数：");
//	scanf("%d", &num);
//	printf("第%d个斐波那契数是%d", num, fib(num));
//	return 0;
//}

//int main() {
//	double sum = 0,ret = 0;
//	int n = 1;
//	for (int i = 1; i <= 3; i++) {
//		ret = (1.0 / i)* n;
//		//printf("%.2lf", ret);
//		sum += ret;
//		n *= -1;
//	}
//	printf("%.2lf", sum);
//	return 0;
//}


//int main() {
//	for (int i = 1; i < 10; i++) {
//
//		for (int j = 1; j <= i; j++) {
//
//			printf("%3d*%d=%-3d", j, i, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//void menu() {
//
//	printf("************************************\n");
//	printf("**********     1.play   ************\n");
//	printf("**********     0.exit   ************\n");
//	printf("************************************\n");
//	printf("请选择：");
//}
//
//void games() {
//	int guess = 0;
//	int i = 6;
//	int ret = rand() % 100 + 1;
//	printf("你总共有6次机会，猜完结束！\n");
//	while (i--) {
//		printf("请输入你想要猜的数字：");
//		scanf("%d", &guess);
//		if (guess > ret) {
//			printf("猜大了！\n");
//		}
//		else if (guess < ret) {
//			printf("猜小了！\n");
//		}
//		else {
//			printf("恭喜你 ，猜对了！\n");
//			system("pause");
//			break;
//		}
//		printf("你还有%d次机会！\n", i);
//	}
//	printf("机会已经用完！猜数结束！\n");
//	system("pause");
//
//}
//
//void Exit() {
//	printf("游戏结束 欢迎下次继续！\n");
//	exit(1);
//}
//
//int main() {
//	int select = 0;
//	printf("开始游戏！----");
//	Sleep(1000);
//	system("cls");
//	srand((unsigned int)time(NULL));
//	 do{
//		menu();
//		scanf("%d", &select);
//		switch (select) {
//		case 1:
//			games();
//			break;
//		case 0:
//			Exit();
//			break;
//		default:
//			printf("选择错误，重新选择");
//			break;
//		}
//		system("cls");
//	 } while (select);
//
//
//	return 0;
//}



//使用递归来实现字符串的逆序  不可使用库函数------------------------------------------------
// 
//这个是正常的循环交换！
//void string_reverse(char* str, int len) {
//	char right = len - 2;
//	char left = 0;
//	while (left < right) {
//		char temp = str[right];
//		str[right--] = str[left];
//		str[left++] = temp;
//	}
//}

//void Swap(char *str, char *str1) {
//	char temp = *str;
//	*str = *str1;
//	*str1 = temp;
//}
//
//int my_strlen(char* str) {
//	if (*str)
//		return my_strlen(str + 1) + 1;
//	else
//		return 0;
//}

//自己的思路 但是了 没有按照题目的参数去进行 题目函数只有一个字符串的参数  表示很吃惊！
//void string_reverse(char* str,int left,int right) {
//	
//	//printf("%d\n", right);
//	//printf("%d\n", left);
//	if (left < right) {
//		Swap(&str[left], &str[right]);
//		//left++;
//		string_reverse(str, left + 1, right - 1);
//	}
//}


//这个是真的可以  鹏哥的思路 让后我自己写的代码！！！！！！！！！！！！！！！！！！！
//void string_reverse(char* str) {
//	char temp = *str;
//	int right = my_strlen(str) - 1;
//	if (my_strlen(str) > 1) {
//		*str = str[right];
//		str[right] = '\0';
//		string_reverse(str + 1);
//		str[right] = temp;
//	}
//}
//
//
//int main() {
//
//	char arr[] = "ab";
//	//int sz = sizeof(arr) / sizeof(arr[0]);//这个是计算数组的大小 包括了\0
//	//printf("%d", sz);
//	string_reverse(arr);
//	printf(arr);
//
//	return 0;
//}

//正整数的每个位数之和-------------------------------------------------------------------
//int digite_sum(int n) {
//	if (n > 9) {
//		return (n % 10) + digite_sum(n / 10);
//	}
//	return n;
//}
//
//int main() {
//	unsigned int num = 0;
//	printf("请输入一个无符号的整数：");
//	scanf("%d", &num);
//	printf("%d的各个位数之和是%d", num, digite_sum(num));
//
//	return 0;
//}


//递归实现n的k次方------------------------------------------------------------------------------------
//double power(int n, int k) {
//	if (k > 0) {
//		return n * power(n, k - 1);
//	}
//	else if(k == 0)
//		return 1.0;
//	else {
//		return 1.0 / (power(n, -k));
//	}
//}
//
//int main() {
//
//	int n,k;
//	printf("请输入你要求的数字和次方数(先输入要求的数字)：");
//	scanf("%d%d", &n, &k);
//	double ret = power(n, k);
//	printf("%d的%d次方是%lf", n, k, ret);
//	return 0;
//}


//int main() {
//
//	char arr[3] = { 'b','i','t' };
//	printf("%d", sizeof(arr));
//	printf("%s", arr);
//	return 0;
//}



//void bubble_sort(int arr[], int sz) {
//	for (int i = 0; i < sz - 1; i++) {//循环的行数   升序
//
//		for (int j = 0; j < sz - i - 1; j++) {//每次相邻两个数交换的次数
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//
//}
//
//
//int main() {
//	int arr[] = { 9,8,7,6,5,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//
//
//	return 0;
//}



//int main() {
//	int num1 = 0;                              
//	printf("请输入你想求的数字哦：");
//	scanf("%d", &num1);
//	int count = 0;
//	int num = num1;
//	while (num) {
//		count++;
//		num &= num - 1;
//	}
//	printf("%d二进制位共有%d个1", num1, count);
//	return 0;
//}



//int main() {
//	int num1 = 0;
//	printf("请输入你想求的数字哦：");
//	scanf("%d", &num1);
//	int count = 0;
//	int num = num1;
//	for (int i = 0; i < 32; i++) {
//		if ((num & 1) == 1) {
//			count++;
//		}
//		num >>= 1;
//	}
//	printf("%d二进制位共有%d个1", num1, count);
//	return 0;
//}
  



//void init(int arr[], int len) {
//	for (int i = 0; i < len; i++) {
//
//		arr[i] = i;
//	}
//
//}

//void print(int arr[], int len) {
//
//	for (int i = 0; i < len; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int len) {
//	int left = 0;
//	int right = len - 1;
//	while (left < right) {
//		int temp = arr[left];
//		arr[left++] = arr[right];
//		arr[right--] = temp;
//	}
//
//}

//int main() {
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr, sz);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}

//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr1[10] = { 11,12,13,14,15,16,17,18,19,20 };
//	printf("交换前-------------------------------------\n");
//	print(arr, 10);
//	print(arr1, 10);
//	for (int i = 0; i < 10; i++) {
//		int temp = arr[i];
//		arr[i] = arr1[i];
//		arr1[i] = temp;
//	}
//	printf("交换后--------------------------------------\n");
//	print(arr, 10);
//	print(arr1, 10);
//	return 0;
//}

//int* test() {
//	int a = 10;
//	return &a;
//}
//
//int main() {
//	int* p = test();//确实是返回地址了 但是这个地址你不能使用 局部变量的地址
//	printf("%p", p);
//
//	return 0;
//}

//int my_strlen(char* str) {
//	int count = 0;
//
//	while (*str++) {
//		count++;
//	}
//
//	return count;
//}


//int my_strlen(char* str) {
//	char* begin = str;
//	while (*str) str++;
//	return str - begin;
//}
//
//int main() {
//
//	int len = my_strlen("abcde");
//	printf("%d", len);
//	return 0;
//}


//int main() {
//	int arr[10] = { 0 };
//	for (int* parr = &arr[10]; parr > &arr[0];) *(--parr) = 1;
//	print(arr, 10);
//
//	for (int* parr = &arr[10 - 1]; parr >= &arr[0]; parr--) *parr = 0;
//	print(arr, 10);
//	return 0;
//}

//void print1(int **arr1,int row,int col) {
//	for (int i = 0; i < row*col; i++) {
//		
//		printf("%d ", arr1[i]);
//	}
//}

//void print1(int arr1[][3], int row, int col) {
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			printf("%d ", arr1[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main() {
//	int arr[2][3] = { {1,2,3},{4,5,6} };
//	print1(&arr[0][0], 2, 3);
//	printf("haha");
//	printf("haha");
//	printf("haha");
//
//	return 0;
//}

//int main() {
//	//创建变量之间都空了两个整形的大小  8个字节  通过内存可以看到
//	int a = 0;
//	int b = 1;
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++) {
//		arr[i] = 0;
//		printf("hh");
//	}
//	return 0;
//}
#include<string.h>
#include<assert.h>
//这个代码适用于目标地址比原地址短的字符串（通用）--------------------------------
//char* my_strcpy(char* str1, char* str2) {
//	//assert(!str1);
//	//assert(!str2);
//	char* temp = str1;
//	while (*temp && *str2) {
//		*temp++ = *str2++;
//	}
//	*temp = '\0';
//	return str1;
//}

//这个代码不适用于目标地址比原地址短的字符串--------------------------------
//char* my_strcpy(char* str1, char* str2) {
//	//assert中间的是判断条件  为假就会断言失败触发失败原因 代码行数！！
//	assert(str1 && str2);
//	char* temp = str1;
//	while (*temp++ = *str2++) {
//		;
//	}
//	return str1;
//}
//
//int main() {
//	char arr1[4] = { "XXX" };
//	char arr2[] = { "hello" };
//	//printf(strcpy(arr1, arr2));//不行  当目标地址比原地址字符串短时  不可执行！！
//	printf(my_strcpy(arr1, arr2));
//	//strcpy(arr1, arr2);
//	//for (int i = 0; i < 15; i++) {
//	//	printf("%c", arr1[i]);
//	//}
//}

//int main() {
//
//	int num = 10;
//	int num1 = 20;
//	//const int* p = &num;//常量指针 不能修改指针指向变量的值
//	//*p = 30;
//	//int* const p1 = &num;//指针常量 不能修改指针的指向 可以修改指针指向变量的值
//	//p1 = &num1;
//	//*p1 = 30;
//	printf("%d \n", num);
//
//	return 0;
//}

//int my_strlen(const char* str) {
//	assert(str);
//	int count = 0;
//	while (*str++) {
//		count++;
//	}
//	return count;
//}
//

//int my_strlen(const char* str) {
//	assert(str);
//	char* cur = str;
//	while (*cur++);
//	return (cur - str - 1);
//}
//
//
//int main() {
//	char arr[20] = { "abcdeftg" };
//
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}



//struct stu {
//	char name;
//	int a;
//	int b;
//}s;
//struct None {
//	int data[100];
//	struct Node* next;
//};


//int main() {
//	int num = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//	if (!(num & (num - 1))) {
//		printf("该数字是2的次方数！");
//	}
//	else {
//		printf("该数字不是！");
//	}
//
//	return 0;
//}


//int main() {
//	int num1, num2;
//	printf("请输入两个整数 计算不同两个数二进制位不同位的个数：");
//	scanf("%d%d", &num1, &num2);
//	int ret = num1 ^ num2;
//	int count = 0;
//	while (ret) {
//		count++;
//		ret &= (ret - 1);
//	}
//	printf("%d和%d两个数字中二进制位有%d个不同\n", num1, num2, count);
//	return 0;
//}

//int main() {
//	int num1;
//	scanf("%d", &num1);
//	printf("奇数二进制位是：");
//	for (int i = 0; i < 32; i+=2) {
//		printf("%d-", (num1 >> i) & 1);
//	}
//	printf("\n偶数二进制位是：");
//	for (int i = 1; i < 32; i += 2) {
//		printf("%d-", (num1 >> i) & 1);
//	}
//	return 0;
//}

//int main() {
//	int num1, num2;
//	printf("请输入两个正整数：");
//	scanf("%d%d", &num1, &num2);
//	int a = num1, b = num2;
//	//while (num1 % num2) {
//	//	int ret = num1 % num2;//2 1
//	//	num1 = num2;//5 2
//	//	num2 = ret;//2 1
//	//}
//	// 
//	while (b) {
//		if (!(a % b)) {
//			a = b;
//			break;
//		}
//		a %= b;
//		b %= a;
//	}
//	//printf("最小公因数是：%d", num2);
//	int ret = num1 * num2 / a;
//	printf("%d和%d的最小公倍数就是%d", num1, num2, ret);
//}

//void reverse(char* str, char *str1) {
//	assert(str&&str1);//判断条件为真什么都不做 为假就输出错误！
//	int left = 0;
//	int right = str1 - str;
//	while (left < right) {
//		char temp = str[left];
//		str[left++] = str[right];
//		str[right--] = temp;
//	}
//}
//void str_reverse(char* str) {
//	assert(str);
//	char *temp = str;
//	while (1) {
//		if (*str == ' '||!(*str)) {
//			reverse(temp, str - 1);
//			temp = str + 1;
//		}
//		if (!*str) {
//			break;
//		}
//		str++;
//	}
//}
//
//int main() {
//	char arr[101] = { 0 };
//	//printf("%d", ' ');
//	// 
//	gets(arr);
//	str_reverse(arr);
//	reverse(arr, arr + strlen(arr) - 1);
//	puts(arr);
//	return 0;
//}



//int main() {
//	int i = -1;
//
//	printf("%d\n", -1);
//	printf("%u\n", -1);
//	printf("%u\n", i);
//	//------------------------------------------------------------------------------死循环
//	unsigned int n;
//	for (n = 9; n >= 0; n--) {
//		printf("%c ", n);//打印出来的结果是跟占位符有关系的
//		Sleep(500);
//	}
//	return 0;
//}

//指针数组里面每个元素都是指针，传参数的时候可以使用二级指针来接收 并非二维数组
//void print10(int **parr,int len) {
//	for (int i = 0; i < len; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("%d ", *(*(parr + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//
//void print11(int* parr[2], int len) {
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < len; j++) {
//			printf("%d ", *(*(parr + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	print10(parr,sizeof(parr)/sizeof(parr[0]));
//
//	int arr4[2][5] = { {1,2,3,4,5},{2,3,4,5,6} };
//	//print11(arr4, 5);//函数传参不正确  因为二维数组的数组名是首元素的地址 首元素arr4【0】的地址 是一个数组地址
//	//不可用指针数组接收  而且指针数组数组名相当于首元素的地址首元素是int*类型  数组名就相当于二级指针
//
//	int(*pa4)[5] = arr4;//二维数组的数组名就是第一行一维数组的地址  也就是数组的地址（类型不一）
//	printf("%d\n", *(*(pa4 + 1)));//pa4+1就相当于&arr4[1] 数组地址+1就是跳过一个数组 就是第二行数组的地址
//	//取*操作就是找到第二行  第二行的数组名就是首元素的地址 解引用找到首元素2；
//
//	//函数也是有地址的  函数的类型就是去除掉函数名 剩下的就是函数的类型 p是指针  指向函数printf10
//	void (*p)(int **,int)=&print10;
//	(*p)(parr, sizeof(parr) / sizeof(parr[0]));
//
//
//	//这个里面parr1先于方框结合 说明是个数组 数组有10个元素 每个元素都是数组指针 每个元素都指向元素个数为5的数组 
//	//数组的类型是int ---------指向数组指针的数组
//	int(*parr1[10])[5] = { &arr1,&arr2,&arr3 };
//	for (int i = 0; i < 5; i++) {
//		//printf("%d ", *(*(parr1[0]) + i));//相当于三级指针的使用
//		printf("%d ", *(*(*(parr1+0)) + i));
//	}
//	return 0;
//}


//int main() {
//	int a = 0;
//	int n = 0;
//	printf("请输入一个整数：");
//	scanf("%d%d", &a,&n);
//	int sum = 0;
//	int j = a;//记录n
//	for (int i = 0; i < n; i++) {
//		sum += a;
//		a *= 10;
//		a += j;
//	}
//	printf("%d的前五项之和是：%d", j, sum);
//	return 0;
//}


//int main() {
//	printf("0-100000的水仙数如下\n");
//	for (int i = 1; i < 100000; i++) {
//		int n = 1;
//		int witer1 = i;
//		while (witer1 / 10) {
//			n++;
//			witer1 /= 10;
//		}
//		int sum = 0;
//		int witer = i;
//		while (witer) {
//			int j = witer % 10;
//			witer /= 10;
//			sum += j*j*j;
//		}
//		if (sum == i) {
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}

//void reverse(char* str) {
//	assert(str);
//	char* left = str;
//	char* right = str + strlen(str) - 1;
//	while (left < right) {
//		char temp = *left;
//		*left++ = *right;
//		*right-- = temp;
//	}
//}
//
//int main() {
//	char arr[] = "abcdefg";
//	reverse(arr);
//	printf(arr);
//
//	return 0;
//}



//int main() {
//	int n = 0;
//	printf("请输入菱形的大小(奇数)：");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		for (int j = n / 2; j > i; j--) {
//			printf("  ");
//		}
//		for (int k = 2 * i + 1; k > 0 && i <= n / 2; k--) {
//			printf("* ");
//		}
//		for (int z = i; z >= n / 2 + 1 && i >= n / 2 + 1; z--) {
//			printf("  ");
//		}
//		for (int x = 2 * (i - 2 * (i - (n / 2))) + 1; x > 0 && i > n / 2; x--) {
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main() {
//	int money = 0;
//	printf("请输入你要购买汽水的钱数：");
//	scanf("%d", &money);
//	int soda = money;//记录一开始喝了多少瓶
//	int empty = money;
//	while (empty != 1 && empty) {
//		int k = empty % 2;
//		soda += empty / 2;
//		empty /= 2;
//		empty += k;
//	}
//
//	printf("soda = %d", soda);
//	return 0;
//}
// 
// 
//void odd(int* arr, int len) {
//	int left = 0;
//	int right = len - 1;
//	while (left < right) {
//		while (arr[left] % 2 != 0 && left < right) {
//			left++;
//		}
//		while (arr[right] % 2 == 0 && left < right) {
//			right--;
//		}
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//	}
//}
//
//int main() {
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//	}
//	odd(arr, 10);
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#define M 101
//
//int main() {
//	int arr[M] = { 0 };
//	int row = 0;
//	printf("请输入杨辉三角的行数：");
//	scanf("%d", &row);
//	arr[0] = 1;
//	for (int i = 0; i < row; i++) {
//		arr[i] = 1;
//		if (i > 1) {
//			for (int k = i - 1; k > 0; k--) {
//				arr[k] += arr[k - 1];
//			}
//		}
//		for (int j = 0; j <= i; j++) {
//			printf("%d ", arr[j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//----------------------------------------------------------------------------------------------------------------
//int main() {
//	char murder = 'A';
//	for (murder = 'A'; murder <= 'D'; murder++) {
//
//		if (((murder != 'A') + (murder == 'C') + (murder == 'D') + (murder != 'D')) == 3) {
//			printf("%c是凶手", murder);
//		}
//	}
//	return 0;
//}
typedef void(*pfunc)(int);

//int main() {
//	(*(void(*)())0)();
//	//0地址解析  把地址为0 强制类型转换 转换成 void(*)() 函数指针  解引用 找到函数 让后调用
//
//	void(*signel(int, void(*)(int)))(int);
////等价于下面的代码  typedef定义的时候  定义的如果是函数指针的类型的话 就是需要把定义成的名字 写入到函数里面void(*pfunc)(int);
//	pfunc signel(int, pfunc);
//
//	//1.signel优先与括号结合  说明他是一个函数 函数的参数类型是int和函数指针  函数指针的参数是int 返回类型是void
//	//2.signel既然是函数了 有参数那么也一定又返回类型
//	//3.signel函数的返回类型就是void(*)(int)  吧函数名和函数的参数去掉之后就是函数的返回类型
//	//总结来说就是  signel函数的参数是int和函数指针void(*)(int)  返回类型也是void(*)(int) 函数指针
//	return 0;
//}
//----------------------------------------------------------------------------------函数指针数组的用途，不是很大

int add(int x, int y) {
	return x + y;
}
//int sub(int x, int y) {
//	return x - y;
//}
//int mul(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	return x / y;
//}
//
//void menu() {
//	printf("****************************************\n");
//	printf("*******   1.add         2.sub   ********\n");
//	printf("*******   3.mul         4.div   ********\n");
//	printf("*******          0.exit         ********\n");
//	printf("****************************************\n");
//
//}
//int main() {
//	int input = 0;
//	int(*pfun[])(int, int) = { NULL,add,sub,mul,Div };
//	int len = sizeof(pfun) / sizeof(pfun[1]);
//	do {
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		int x, y;
//		if (input > 0 && input <= len - 1) {
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("计算结果为：%d\n", pfun[input](x, y));
//		}
//		else if (input == 0) {
//			printf("退出程序，欢迎下次使用！\n");
//			exit(1);
//		}
//		else {
//			printf("选择错误 ，没有该选项，请重新输入！\n");
//			
//		}
//		system("pause");
//		system("cls");
//	} while (input);
//	return 0;
//}
// 
typedef double d;
//int main() {
//	//函数指针数组   数组的每个元素就是函数指针 用来保存函数的地址  参数返回值得一样
//	int(*pfun[])(int, int) = {add};
//	int(*(*ppfun)[])(int, int) =&pfun;
//	//int(*pfun[])(int, int) 是一个函数指针数组  去掉数组名int(*[])(int, int)  就是类型的名字
//	//ppfun是一个函数指针数组的指针  首先括号括起来 让他与*结合 表明他是一个指针 让后把类型名字套上就可以了
//	//(*(*(*ppfun)))  *ppfun他解引用是找到pfun这个数组 也就是首元素的地址让后再解引用 找到第一个元素  第一个元素是
//	//一个函数的地址  让后再次解引用 找到这个函数 让后进行调用
//	printf("%d", (*(*(*ppfun)))(2, 3));
//	//众所周知  函数的地址与函数的名字是同样的 也就是说add=&add  所以说第三个*解引用可以不需要 一样求解
//	printf("%d", (*(*ppfun))(2, 3));
//
//	return 0;
//}

//回调函数 就是A函数作为B函数的参数   不直接调用A函数 而是通过B函数来调用A函数 这是回调函数 B(&A)   (A,B都是函数)



//交换数据每个字节的内容
//void Swap_all(char* buff1, char* buff2,int size) {
//	for (int i = 0; i < size; i++) {
//		char temp = *buff1;
//		*buff1++ = *buff2;
//		*buff2++ = temp;
//	}
//}
//
//void Swap_int(void* x, void* y) {
//	int temp = *(int*)x;
//	*(int*)x = *(int*)y;
//	*(int*)y = temp;
//}
//void Swap_char(void* x, void* y) {
//	char temp = *(char*)x;
//	*(char*)x = *(char*)y;
//	*(char*)y = temp;
//}
////升序
//int int_cmp(const void* x, const void* y) {
//	return *(int*)y - *(int*)x;
//}
//
////降序
//int char_cmp(const void* x, const void* y) {
//	return *(char*)x - *(char*)y;
//}
//void print(int* arr, int len) {
//	for (int i = 0; i < len; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
////                        数组大小		类型字节大小    比较函数 自己写         自己模拟的冒泡排序
//void my_qsort(void* arr, size_t num, size_t size, int(*pfun)(const void*, const void*)) {
//	for (int i = 0; i < num - 1; i++) {
//
//		for (int j = 0; j < num - i - 1; j++) {
//			/*if (*((char*)arr + j * size) > *((char*)arr + (j + 1) * size)) {
//				pfun(&(*((char*)arr + j * size)), &(*((char*)arr + (j + 1) * size)));
//				
//			}*/
//			if (pfun(((char*)arr + j * size), ((char*)arr + (j + 1) * size)) > 0) {
//				Swap_all((char*)arr + j * size, (char*)arr + (j + 1) * size, size);
//				//*((char*)arr + j * size) ^= * ((char*)arr + (j + 1) * size);
//				//*((char*)arr + (j + 1) * size) ^= (* ((char*)arr + j * size));
//				//*((char*)arr + j * size) ^= (* ((char*)arr + (j + 1) * size));
//				//if (size == 4) {
//				//	Swap_int((char*)arr + j * size, (char*)arr + (j + 1) * size);
//				//}
//				//else if (size == 1) {
//				//	Swap_char((char*)arr + j * size, (char*)arr + (j + 1) * size);
//				//}
//			}
//		}
//	}
//}
//void test1() {
//	int arr[] = { 9,8,7,6,5,6,9,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_qsort(arr, sz, sizeof(int), int_cmp);
//
//	print(arr, sz);
//	char str[] = "adfklajflj";
//	int len = strlen(str);
//	my_qsort(str, len, sizeof(char), char_cmp);
//
//	printf(str);
//}
////qsort库函数使用的是减法  正常相减就是升序  得到的值乘上-1 就是降序  或者调换一下参数的位置
////升序
//int int_cmp1(const void* x, const void* y) {
//	return (*(int*)x - *(int*)y) * -1;
//}
//
////降序
//int char_cmp1(const void* x, const void* y) {
//	//return *(char*)x - *(char*)y;
//	return *(char*)y - *(char*)x;
//
//}
//
//void test2(){
//	int arr[] = { 9,8,7,6,5,6,9,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(int), int_cmp1);
//	print(arr, sz);
//	char str[] = "adfklajflj";
//	int len = strlen(str);
//	qsort(str, len, sizeof(char), char_cmp1);
//	printf(str);
//}
//
//
//int main() {
//	
//	test1();//自己使用冒泡函数实现的qsort
//	//test2();//使用库函数qsort
//
//	return 0;
//}


//int main() {
//	char* str[] = { "work","at","sjhag" };
//	char** ptr = str;
//	ptr++;//ptr中保存的是数组str首元素的地址也就是&str[0]  让后自++ 就是向后偏移一个字节 找到&str[1]的地址
//	//*ptr就是str[1]  打印字符串的时候通过首元素地址进行打印的
//	printf("%s", *ptr);
//
//	return 0;
//}

//int main() {
//	int arr[MAX][MAX] = { 0 };
//	int row = 0;
//	printf("请输入行数：");
//	scanf("%d", &row);
//	for (int i = 0; i < row; i++) {
//		arr[0][i] = i + 1;//初始化第一行
//		arr[i][0] = i + 1;
//	}
//	for (int i = 1; i < row; i++) {
//		for (int j = 1; j < row; j++) {
//			arr[i][j] = arr[i][j - 1] + arr[i-1][j];
//		}
//	}
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < row; j++) {
//			printf("%-8d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	int search = 0;
//	printf("请输入你想要查找的数字：");
//	scanf("%d", &search);
//	int i = 0, j = row - 1;
//	int flag = 1;
//	while (i < row  && j >= 0) {
//		if (search > arr[i][j]) {
//			i++;
//		}
//		else if (search < arr[i][j]) {
//			j--;
//		}
//		else {
//			flag = 0;
//			printf("该数字可以被查找,在数组矩阵中的下标是%d--%d", i, j);
//			break;
//		}
//	}
//	if (flag) printf("在该矩阵中没有找到你想要的数字！！");
//
//	return 0;
//}


//字符串左旋 左边字符到右边
//char* rotate_str(char* sor, int k) {
//	assert(sor);
//	while (k >= strlen(sor)) {
//		k -= strlen(sor);
//	}
//	int len = strlen(sor);
//	char* dest = (char *)malloc(sizeof(char)*(len + 1));
//	if (!dest) {
//		printf("空间开辟失败！");
//		return ;
//	}
//	char* temp = sor + k;
//	char* cur = sor;
//	char* dest1 = dest;
//	//把从k开始的字符放置到新开辟的空间里面
//	while (*temp) {
//		*dest1++ = *temp++;
//	}
//	while (k > 0) {
//		*dest1++ = *cur++;
//		k--;
//	}
//	*dest1 = '\0';
//	strcpy(sor, dest);
//	free(dest);
//	dest = NULL;
//	dest1 = NULL;
//}
//
//void reverse(char* str, int left, int right) {
//	while (left < right) {
//		char temp = str[left];
//		str[left++] = str[right];
//		str[right--] = temp;
//	}
//}

//void rotate_str1(char* str, int k) {
//	assert(str);
//	while ((unsigned int)k >= strlen(str)) {
//		k -= strlen(str);
//	}
//	int sz = strlen(str);
//	reverse(str, 0, k - 1);
//	reverse(str, k, sz - 1);
//	reverse(str, 0, sz - 1);
//}
//
//int main() {
//	char str1[] = "abcdefghijkl";
//	int k = 0;
//	//printf("%d", strlen(str1));
//	printf("请输入你想要左旋字符串的个数：");
//	scanf("%d", &k);
//	// ------通过创建额外空间  让后对str1中的字符串进行放置  放到新开辟的空间里面 当然不是很好
//	//rotate_str(&str1, k);
//	//printf(str1);
//	//printf("\n");
//	//-----------------通过字符串反转 三步翻转法
//	rotate_str1(str1, k);
//	printf(str1);
//	return 0;
//}

//int is_same(char* str1, char* str2,int *i) {
//	assert(str1 && str2);
//	if (strlen(str1) != strlen(str2)) return 0;//长度不一样的话就直接返回0
//	for (*i = 0; *i < strlen(str1); (*i)++) {
//		rotate_str1(str1, 1);//每次左旋1个字符 让后比较  直到循环结束
//		if (!strcmp(str2, str1)) return 1;
//	}
//	return 0;
//}


//int is_same1(const char* str1, const char* str2, int* pk) {//再字符串1中 增加了一个同样的字符串1  双倍长度  字符串1 2 长度不等
//	//相当于strstr的实现了
//  assert(str1 && str2);
//	int len = strlen(str1);
//	int len1 = strlen(str2);
//	for (int i = 0; i < len; i++) {
//		if (*(str1 + i) == *str2) {//当找到str2的第一个字符跟str1中的字符串相同时  进入判断循环 比较后面的
//			int j = i;
//			int k = 0;//定义变量 不要改变外边的i值  让后知道str2碰到\0结束  或者两个字符不等时结束
//			while ((*(str2 + k) == *(str1 + j)) && *(str2 + k)) {
//				k++, j++;
//			}
//			if (k == len1) {
//				*pk = i;
//				return 1;
//			}
//		}
//	}
//	return 0;
//}
//
//int main() {
//	char str1[20] = "ABCDA";
//	char str3[20] = { 0 };
//	char str2[] = "CDAAB";
//	int k = 0;
//	strcat(str1, strncpy(str3, str1, strlen(str1)));
//	//printf(str1);
//	//if (is_same(str1, str2, &k)) {
//	//	printf("str1经过左旋%d个字符可以得到str2", k + 1);
//	//}
//	//else {
//	//	printf("str1经过旋转不可以得到str2");
//	//}
//	if (is_same1(str1, str2, &k)) {
//		printf("str1经过左旋%d个字符可以得到str2", k);
//	}
//	else {
//		printf("str1经过旋转不可以得到str2");
//	}
//
//	return 0;
//}

//void* my_memcpy(void* dest, const void* src, size_t num) {
//	assert(dest && src);
//	char* tem = (char*)dest;
//	while (num--) {
//		*((char*)dest)++ = *((char*)src)++;
//	}
//	return (void*)tem;
//}
//
//int main() {
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, 28);
//	for (int i = 0; i < 10; i++) printf("%d ", arr2[i]);
//	return 0;
//}

//void* my_memmove(const void* dest, const void* src, size_t num) {
//	assert(dest && src);
//	void* ret = dest;
//	int len = (char*)dest - (char*)src;
//	if (len > 0 && len < num) {
//		//从后向前拷贝
//		//num进去循环刚好是19  字符指针+num  刚好找到最后的一个字节
//		while (num--) {
//			*(((char*)dest) + num) = *(((char*)src) + num);
//		}
//	}
//	else {
//		//其他情况从前向后拷贝
//		while (num--) {
//			*((char*)dest) ++ = *((char*)src)++;
//		}
//	}
//	return ret;
//}
//
//int main() {
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr1, arr1+3, 20);
//	for (int i = 0; i < 10; i++) printf("%d ", arr1[i]);
//	return 0;
//}


//#include<stddef.h>
//#define my_offsetof(s,m) (size_t)&(((s*)0)->m)
//
//enum Color {
//	RED,
//	BlUE,
//	GREEN
//};
//
//struct S {
//	char i;
//	int j;
//	char c;
//};
//struct seqlist
//{
//	int a;
//	int b;
//	char c;
//};//12
//
//struct p
//{
//	char b;
//	struct seqlist s;
//	int a;
//};
//#define add(x,y)
//
//int main() {
//	struct S s;
//	printf("%d\n", sizeof(struct p));
//	printf("%d\n", sizeof(struct seqlist));
//
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, j));
//	printf("%d\n", my_offsetof(struct S, i));
//	printf("%d\n", my_offsetof(struct S, j));
//
//	return 0;
//}

//void Get_Memory(char** p) {
//	*p = (char*)malloc(100);
//}
//
//int main() {
//	char* str = NULL;
//	Get_Memory(&str);
//	strcpy(str, "hello bit");
//	printf(str);
//	free(str);
//	str = NULL;
//	return 0;
//}

//char* Get_Memory(void) {
//	char* p = "hello bit";
//	//char p[] = "hello bit";
//
//	return p;
//}
//
//int main() {
//	char* str = Get_Memory();  //因为p是一个指针变量 指向字符串常量 字符串常量在内存中只有一份 不可修改
//					//可以通过返回p的地址 找到“hello bit”首字母的地址  让后可以打印出来 但是不该返回局部变量的地址
//	printf(str);
//	printf(str);
//
//	return 0;
//}


//int main() {
//	char arr[21][21] = { 0 };
//	int num = 0;
//	printf("请输入x图形的大小(支持多组输入)：");
//	while (scanf("%d", &num) != EOF) {
//		for (int i = 0; i < num; i++) {
//			for (int j = 0; j < num; j++) {
//				if (i == j || (i + j) == num - 1) {
//					arr[i][j] = '*';
//				}
//				else {
//					arr[i][j] = ' ';
//				}
//			}
//		}
//		for (int i = 0; i < num; i++) {
//			for (int j = 0; j < num; j++) {
//				printf("%c ", arr[i][j]);
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//int main() {
//	char arr[21];
//	int num = 0;
//	printf("请输入x图形的大小(支持多组输入)：");
//	while (scanf("%d", &num) != EOF) {
//		int left = 0;
//		int right = num - 1;
//		for (int i = 0; i < num; i++) {
//			for (int j = 0; j < num; j++) {
//				arr[j] = ' ';
//			}
//			if (left + right == num - 1 || left == right) {
//				arr[left++] = '*';
//				arr[right--] = '*';
//			}
//			for (int j = 0; j < num; j++) {
//				printf("%c", arr[j]);
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//int main() {
//	int score = 0;
//	int max = 0;
//	int min = 100;
//	int sum = 0;
//
//	for (int i = 0; i < 7; i++) {
//		scanf("%d", &score);
//		sum += score;
//		if (score > max) {
//			max = score;
//		}
//		if (score < min) {
//			min = score;
//		}
//	}
//	printf("%.2lf", (1.0*sum - max - min) / 5.0);
//	return 0;
//}
//
//int main() {
//	int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int mouth = 0;
//	int year = 0;
//	while (scanf("%d %d", &year, &mouth) != EOF) {
//		if (!(year % 4) && (year % 100) || !(year % 400)) {
//			arr[2] = 29;
//		}
//		printf("%d", arr[mouth]);
//	}
//
//
//	return 0;
//}

//int main() {
//	int len = 0;
//	int arr[50] = { 0 };
//	int num = 0;
//	scanf("%d", &len);
//	for (int i = 0; i < len; i++) {
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &num);
//	int i = 0;
//	for (int i = len; i > 0; i--) {
//		if (num >= arr[i - 1]) {
//			arr[i] = num;
//			break;
//		}
//		else {
//			arr[i] = arr[i - 1];
//		}
//	}
//	if (!i) arr[i] = num;
//	for (int i = 0; i < len + 1; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//int main() {
//	char* parr = "hello bit";
//	char pa[20];
//	FILE* pf = fopen("text.txt", "w");
//	if (!pf) {
//		perror("fopen");
//		return 1;
//	}
//	fputs(parr, pf);
//	// 调整文件指针的位置  因为写文件会把文件指针放到写入时候的末尾 需要进行调整  SEEK_CUR是文件的起始位置
//	fseek(pf,0,SEEK_CUR);
//	pf = fopen("text.txt", "r");
//	fgets(pa, 10, pf);
//	printf(pa);
//
//	fclose(pf);
//	pf = NULL;
//	//fclose(pf1);
//	//pf1 = NULL;
//	return 0;
//}
// 
// 
// 
// 
//int main() {
//	char* parr = "hello bit";
//	char pa[20];
//	char temp;
//	FILE* pf1 = fopen("text.txt", "r");//fgetc文件函数是读取一个字符 如果读取结束 会返回EOF  文件结束标志
//	while (fgets(pa, 10, pf1)) {//fgets文件函数是读取一行 如果读取结束 会返回NULL指针 可以进行判断
//		fputs(pa, stdout);
//	}
//	fclose(pf1);
//	pf1 = NULL;
//	return 0;
//}


//struct S {
//	char sarr[10];
//	int sa;
//	float sf;
//}s1;
//
//int main() {
//	struct S s = { "abcdefghi",50,6.0f };
//	FILE* pf = fopen("text.txt", "w");
//	if (!pf) {
//		perror("fopen");
//		return 1;
//	}
//
//	//格式化输出 输出到文件流里面 与printf不同的就是多了一个文件指针
//	fprintf(pf, "%s %d %f", s.sarr, s.sa, s.sf);
//	fseek(pf, 0, SEEK_CUR);//调整文件指针位置
//	pf = fopen("text.txt", "r");
//	fscanf(pf, "%s %d %f", s1.sarr, &s1.sa, &s1.sf);
//	fprintf(stdout, "%s %d %f", s1.sarr, s1.sa, s1.sf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main() {
//	FILE* pf = fopen("text1.txt", "w");
//	if (!pf) {
//		perror("fopen(pf)");
//		return 0;
//	}
//	fputs("abcdefghij", pf);
//	printf("%d\n", ftell(pf));
//
//	//fflush(pf);//fflush  函数可以刷新文件缓冲区   让写入的内容及时写到文件里面
//	fclose(pf);
//	
//	FILE* pf1 = fopen("text1.txt", "r");
//	if (!pf1) {
//		perror("fopen(pf1)");
//		return 1;
//	}
//	//int len = pf - SEEK_SET;
//	//printf("%d\n", len);
//	printf("%d\n", ftell(pf));//关闭文件之后  pf的指针就回到文件的起始位置了
//	fseek(pf, -5, SEEK_END);//SEEK_SET表示文件指针的起始位置  SEEK_CUR表示文件指针的当前位置SEEK_END表示结束位
//	char ch = fgetc(pf);
//	printf("%c\n", ch);//a
//	
//	ch = fgetc(pf1);
//	printf("%c\n", ch);//a
//	
//	rewind(pf1);
//	ch = fgetc(pf1);
//	printf("%c\n", ch);
//
//	fseek(pf1, 0, SEEK_SET);//SEEK_SET表示文件指针的起始位置  SEEK_CUR表示文件指针的当前位置SEEK_END表示结束位置
//	ch = fgetc(pf1);
//	printf("%c\n", ch);
//
//	fclose(pf1);
//	pf1 = NULL;
//	//fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main() {
//	FILE* pf = fopen("text1.txt", "w");
//	if (!pf) {
//		perror("fopen(pf)");
//		return 0;
//	}
//	fputs("abcdefghij", pf);
//	printf("%d\n", ftell(pf));
//
//	//fflush(pf);//fflush  函数可以刷新文件缓冲区   让写入的内容及时写到文件里面
//	fclose(pf);
//	pf = fopen("text1.txt", "r");
//	if (!pf) {
//		perror("fopen(pf)");
//		return 1;
//	}
//	//int len = pf - SEEK_SET;
//	//printf("%d\n", len);
//	printf("%d\n", ftell(pf));//关闭文件之后  pf的指针就回到文件的起始位置了
//	fseek(pf, -5, SEEK_END);//SEEK_SET表示文件指针的起始位置  SEEK_CUR表示文件指针的当前位置SEEK_END表示结束位
//	char ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	fseek(pf, 1, SEEK_SET);
//	ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fseek(pf, 0, SEEK_SET);//SEEK_SET表示文件指针的起始位置  SEEK_CUR表示文件指针的当前位置SEEK_END表示结束位置
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//#define MAX_size 5
//int main() {
//	double arr[MAX_size] = { 1.,2.,3.,4.,5. };
//	double b[MAX_size];
//	FILE* pf = fopen("text2.txt", "w");
//	if (!pf) {
//		perror("fopen");
//		return 0;
//	}
//	else {
//		fwrite(arr, sizeof(*arr), MAX_size, pf);
//		printf("%d\n", ftell(pf));
//		fclose(pf);
//	}
//	pf = fopen("text2.txt", "r");
//	int i = 0;
//	while (fread(&b[i], sizeof(*arr), 1, pf)) {
//		printf("%.2lf\n", b[i++]);
//	}
//	if (ftell(pf) == MAX_size * sizeof(double)) {
//		printf("file loading successing！\n");
//	}
//	if (feof(pf)) {//feof文件函数 如果文件指针pf是在文件结尾 那么函数会返回一个非0的值 也就是真 属于正常读取结束的
//		printf("文件读取正常结束！");
//	}
//	else if (ferror(pf)) {
//		//ferror文件函数  如果文件在中间读取错误了 没有读取完成就结束了 那么函数返回一个非0的值（文件读取失败而结束的）
//		printf("文件读取错误，读取结束！");
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//char* my_strncat(char* str1, const char* str2, int num) {
//	assert(str1 && str2);
//	char* cur = str1;
//	while (*str1) {
//		str1++;
//	}
//
//	while (num-- && *str2) {
//		*str1++ = *str2++;
//	}
//	if (num!=-1) {
//		while (num--) {
//			*str1++ = '\0';
//		}
//		return cur;
//	}
//	*str1 = '\0';
//	return cur;
//}
//
//int main() {
//	char arr1[20] = "abcd";
//	char arr2[6] = "aaaaa";
//	printf(my_strncat(arr1, arr2, 8));
//
//	return 0;
//}

#define NUM 10
//int main() {
//	int arr[NUM] = { 1,2,2,3,4,1,5,5,7,7 };
//	int arr1[NUM] = { 0 };
//	for (int i = 0; i < NUM; i++) {
//		for (int j = 0; j < NUM; j++) {
//			if (arr[i] == arr[j]) {
//				arr1[i] += 1;
//			}
//		}
//		if (arr1[i] == 1)
//			printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int* Find(int* arr, int sz) {
//	int sum = 0;
//	int i = 0;
//	int j = 0;
//	int ret[2] = { 0 };
//	for (i = 0; i < sz; i++) {
//		sum ^= arr[i];
//	}
//	//int cur = (sum & 1);//判断异或之后的数的某个二进制位是1  让后进行分组  异或相同为0  不同为1
//	for (i = 0; i < 32; i++) {
//		if ((sum >> i) & 1) {
//			j = i;//记录一下这一位  右移了多少位
//			break;
//		}
//	}
//	int sum1 = sum;
//	for (i = 0; i < sz; i++) {
//		if ((arr[i]>>j) & 1) {
//			sum ^= arr[i];
//		}
//		else {
//			sum1 ^= arr[i];
//		}
//		ret[0] = sum;
//		ret[1] = sum1;
//	}
//	return ret;
//}
//
//int main() {
//	int arr[NUM] = { 1,2,2,12378,123198273,1,5,5,7,7 };
//	int *parr = Find(arr, NUM);
//	printf("这两个单身汉分别是%d和%d\n", parr[0], parr[1]);
//	return 0;
//}

//int index(char* sou, char* str1) {
//	assert(sou && str1);
//	int i = 0;
//	int j = 0;
//	while (i < strlen(sou) && j < strlen(str1)) {
//		if (sou[i] == str1[j]) {
//			i++;
//			j++;
//		}
//		else {
//			i = i - j + 1;
//			j = 0;
//		}
//	}
//	if (j == strlen(str1)) return i - j;
//	else return 0;
//}
//
//
//int main() {
//	char ch1[] = "aaaaaaaab";
//	char ch2[] = "aaab";
//	int pos = index(ch1, ch2);
//	printf("%d", pos);
//
//	return 0;
//}


