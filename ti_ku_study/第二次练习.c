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
//	printf("�������\n");
//	printf("���ѡ�����ѧϰô(1/0)��");
//	scanf("%d", &coding);
//	if (coding)
//		printf("������õ��õ�offer��");
//	else
//		printf("����ͻؼ�������ȥ��");*/
//	printf("%d\n", ++a + 1);
//
//	struct stu s = { "����",20,86.3 };
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
//	//һ��С�ɻ��˷����Һþ�
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
//	printf("������������룺");
//	scanf("%s", ch);
//	printf("��ȷ��������루Y/N����");
//	//getchar();//��Ҫ�ѻ��з�����ȡ�� ��Ȼ�����getchar���ȡ �ú�Ͳ���ȷ��
//	char temp;
//	while ((temp = getchar()) != '\n') {
//		;
//	}
//	char c = getchar();
//	if (c == 'Y') {
//		printf("ȷ�ϳɹ������������%s", ch);
//	}
//	if (c == 'N') {
//		printf("ȷ��ʧ�ܣ�");
//	}
//	return 0;
//}

//int main() {
//	int num = 0;
//	printf("������������׳˵�����");
//	scanf("%d", &num);
//	int sum = 1;
//	for (int i = 1; i < num + 1; i++) {
//		sum *= i;
//	}
//	printf("1-%d�Ľ׳�Ϊ%d", num, sum);
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
//	printf("1��+2��+������10��=%d", sum);
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
//	printf("����������Ҫ���ҵ����֣�");
//	scanf("%d", &num);
//	printf("%d�������е��±�λ����%d", num, binsearch(num, arr, MAX));
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


//�������������Լ��
//int main() {
//	int num1 = 0;
//	int num2 = 0;
//	printf("����������Ҫ����������֣�");
//	scanf("%d %d", &num1, &num2);
//	//����num1�����������Ǹ�����
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
//	//��С�������Ļ�����  num1*num2/������������Լ����
//	printf("%d��%d�����Լ����%d", num1, num2, a);
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
//	//ϵͳ�رճ���
//	char input[30] = {0};
//	system("shutdown -s -t 60");
//	again:
//	printf("��ע�⣬��ĵ��Լ�����1���Ӻ�ػ��������롰����һ����ɵ�ơ�������ȡ���ػ���\n");
//	scanf("%s", input);
//	if (!strcmp(input, "����һ����ɵ��")) {
//		printf("��ϲ��ɵ���Ѿ��ɹ�ȡ���ػ���\n");
//		system("shutdown -a");
//	}
//	else {
//		printf("��������㲻���ð���\n");
//		goto again;
//	}
//	return 0;
//}

//int main() {
//	//������ ���� �ܱ������1����������
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
//	printf("\n100-200����%d��������", count);
//	return 0;
//}



//void Swap(int* pa, int* pb) {
//	//ʵ���ϲ�����ı��������е�ab  ��Ϊֻ�Ǹı���ָ���ָ�� ��û�иı�ʵ�����ݵ�ֵ��
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
//	printf("����������Ҫ���ҵ�����:");
//	scanf("%d", &search);
//	int len = sizeof(arr1) / sizeof(arr1[0]);
//	int ret = binarysearch(arr1, len, search);
//	if (ret!=-1) {
//		printf("�ҵ��ˣ��±���%d", ret);
//	}
//	else {
//		printf("û���ҵ������ӣ�");
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
//	printf("������һ����������");
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
//	printf("��������Ҫ��׳˵����֣�");
//	scanf("%d", &num);
//	printf("%d�Ľ׳��ǣ�%d", num, factorial(num));
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
//	printf("����������Ҫ��ڼ���쳲���������");
//	scanf("%d", &num);
//	printf("��%d��쳲���������%d", num, fib(num));
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
//	printf("��ѡ��");
//}
//
//void games() {
//	int guess = 0;
//	int i = 6;
//	int ret = rand() % 100 + 1;
//	printf("���ܹ���6�λ��ᣬ���������\n");
//	while (i--) {
//		printf("����������Ҫ�µ����֣�");
//		scanf("%d", &guess);
//		if (guess > ret) {
//			printf("�´��ˣ�\n");
//		}
//		else if (guess < ret) {
//			printf("��С�ˣ�\n");
//		}
//		else {
//			printf("��ϲ�� ���¶��ˣ�\n");
//			system("pause");
//			break;
//		}
//		printf("�㻹��%d�λ��ᣡ\n", i);
//	}
//	printf("�����Ѿ����꣡����������\n");
//	system("pause");
//
//}
//
//void Exit() {
//	printf("��Ϸ���� ��ӭ�´μ�����\n");
//	exit(1);
//}
//
//int main() {
//	int select = 0;
//	printf("��ʼ��Ϸ��----");
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
//			printf("ѡ���������ѡ��");
//			break;
//		}
//		system("cls");
//	 } while (select);
//
//
//	return 0;
//}



//ʹ�õݹ���ʵ���ַ���������  ����ʹ�ÿ⺯��------------------------------------------------
// 
//�����������ѭ��������
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

//�Լ���˼· ������ û�а�����Ŀ�Ĳ���ȥ���� ��Ŀ����ֻ��һ���ַ����Ĳ���  ��ʾ�ܳԾ���
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


//�������Ŀ���  �����˼· �ú����Լ�д�Ĵ��룡������������������������������������
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
//	//int sz = sizeof(arr) / sizeof(arr[0]);//����Ǽ�������Ĵ�С ������\0
//	//printf("%d", sz);
//	string_reverse(arr);
//	printf(arr);
//
//	return 0;
//}

//��������ÿ��λ��֮��-------------------------------------------------------------------
//int digite_sum(int n) {
//	if (n > 9) {
//		return (n % 10) + digite_sum(n / 10);
//	}
//	return n;
//}
//
//int main() {
//	unsigned int num = 0;
//	printf("������һ���޷��ŵ�������");
//	scanf("%d", &num);
//	printf("%d�ĸ���λ��֮����%d", num, digite_sum(num));
//
//	return 0;
//}


//�ݹ�ʵ��n��k�η�------------------------------------------------------------------------------------
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
//	printf("��������Ҫ������ֺʹη���(������Ҫ�������)��");
//	scanf("%d%d", &n, &k);
//	double ret = power(n, k);
//	printf("%d��%d�η���%lf", n, k, ret);
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
//	for (int i = 0; i < sz - 1; i++) {//ѭ��������   ����
//
//		for (int j = 0; j < sz - i - 1; j++) {//ÿ�����������������Ĵ���
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
//	printf("�����������������Ŷ��");
//	scanf("%d", &num1);
//	int count = 0;
//	int num = num1;
//	while (num) {
//		count++;
//		num &= num - 1;
//	}
//	printf("%d������λ����%d��1", num1, count);
//	return 0;
//}



//int main() {
//	int num1 = 0;
//	printf("�����������������Ŷ��");
//	scanf("%d", &num1);
//	int count = 0;
//	int num = num1;
//	for (int i = 0; i < 32; i++) {
//		if ((num & 1) == 1) {
//			count++;
//		}
//		num >>= 1;
//	}
//	printf("%d������λ����%d��1", num1, count);
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
//	printf("����ǰ-------------------------------------\n");
//	print(arr, 10);
//	print(arr1, 10);
//	for (int i = 0; i < 10; i++) {
//		int temp = arr[i];
//		arr[i] = arr1[i];
//		arr1[i] = temp;
//	}
//	printf("������--------------------------------------\n");
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
//	int* p = test();//ȷʵ�Ƿ��ص�ַ�� ���������ַ�㲻��ʹ�� �ֲ������ĵ�ַ
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
//	//��������֮�䶼�����������εĴ�С  8���ֽ�  ͨ���ڴ���Կ���
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
//�������������Ŀ���ַ��ԭ��ַ�̵��ַ�����ͨ�ã�--------------------------------
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

//������벻������Ŀ���ַ��ԭ��ַ�̵��ַ���--------------------------------
//char* my_strcpy(char* str1, char* str2) {
//	//assert�м�����ж�����  Ϊ�پͻ����ʧ�ܴ���ʧ��ԭ�� ������������
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
//	//printf(strcpy(arr1, arr2));//����  ��Ŀ���ַ��ԭ��ַ�ַ�����ʱ  ����ִ�У���
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
//	//const int* p = &num;//����ָ�� �����޸�ָ��ָ�������ֵ
//	//*p = 30;
//	//int* const p1 = &num;//ָ�볣�� �����޸�ָ���ָ�� �����޸�ָ��ָ�������ֵ
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
//	printf("������һ��������");
//	scanf("%d", &num);
//	if (!(num & (num - 1))) {
//		printf("��������2�Ĵη�����");
//	}
//	else {
//		printf("�����ֲ��ǣ�");
//	}
//
//	return 0;
//}


//int main() {
//	int num1, num2;
//	printf("�������������� ���㲻ͬ������������λ��ͬλ�ĸ�����");
//	scanf("%d%d", &num1, &num2);
//	int ret = num1 ^ num2;
//	int count = 0;
//	while (ret) {
//		count++;
//		ret &= (ret - 1);
//	}
//	printf("%d��%d���������ж�����λ��%d����ͬ\n", num1, num2, count);
//	return 0;
//}

//int main() {
//	int num1;
//	scanf("%d", &num1);
//	printf("����������λ�ǣ�");
//	for (int i = 0; i < 32; i+=2) {
//		printf("%d-", (num1 >> i) & 1);
//	}
//	printf("\nż��������λ�ǣ�");
//	for (int i = 1; i < 32; i += 2) {
//		printf("%d-", (num1 >> i) & 1);
//	}
//	return 0;
//}

//int main() {
//	int num1, num2;
//	printf("������������������");
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
//	//printf("��С�������ǣ�%d", num2);
//	int ret = num1 * num2 / a;
//	printf("%d��%d����С����������%d", num1, num2, ret);
//}

//void reverse(char* str, char *str1) {
//	assert(str&&str1);//�ж�����Ϊ��ʲô������ Ϊ�پ��������
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
//	//------------------------------------------------------------------------------��ѭ��
//	unsigned int n;
//	for (n = 9; n >= 0; n--) {
//		printf("%c ", n);//��ӡ�����Ľ���Ǹ�ռλ���й�ϵ��
//		Sleep(500);
//	}
//	return 0;
//}

//ָ����������ÿ��Ԫ�ض���ָ�룬��������ʱ�����ʹ�ö���ָ�������� ���Ƕ�ά����
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
//	//print11(arr4, 5);//�������β���ȷ  ��Ϊ��ά���������������Ԫ�صĵ�ַ ��Ԫ��arr4��0���ĵ�ַ ��һ�������ַ
//	//������ָ���������  ����ָ�������������൱����Ԫ�صĵ�ַ��Ԫ����int*����  ���������൱�ڶ���ָ��
//
//	int(*pa4)[5] = arr4;//��ά��������������ǵ�һ��һά����ĵ�ַ  Ҳ��������ĵ�ַ�����Ͳ�һ��
//	printf("%d\n", *(*(pa4 + 1)));//pa4+1���൱��&arr4[1] �����ַ+1��������һ������ ���ǵڶ�������ĵ�ַ
//	//ȡ*���������ҵ��ڶ���  �ڶ��е�������������Ԫ�صĵ�ַ �������ҵ���Ԫ��2��
//
//	//����Ҳ���е�ַ��  ���������;���ȥ���������� ʣ�µľ��Ǻ��������� p��ָ��  ָ����printf10
//	void (*p)(int **,int)=&print10;
//	(*p)(parr, sizeof(parr) / sizeof(parr[0]));
//
//
//	//�������parr1���ڷ����� ˵���Ǹ����� ������10��Ԫ�� ÿ��Ԫ�ض�������ָ�� ÿ��Ԫ�ض�ָ��Ԫ�ظ���Ϊ5������ 
//	//�����������int ---------ָ������ָ�������
//	int(*parr1[10])[5] = { &arr1,&arr2,&arr3 };
//	for (int i = 0; i < 5; i++) {
//		//printf("%d ", *(*(parr1[0]) + i));//�൱������ָ���ʹ��
//		printf("%d ", *(*(*(parr1+0)) + i));
//	}
//	return 0;
//}


//int main() {
//	int a = 0;
//	int n = 0;
//	printf("������һ��������");
//	scanf("%d%d", &a,&n);
//	int sum = 0;
//	int j = a;//��¼n
//	for (int i = 0; i < n; i++) {
//		sum += a;
//		a *= 10;
//		a += j;
//	}
//	printf("%d��ǰ����֮���ǣ�%d", j, sum);
//	return 0;
//}


//int main() {
//	printf("0-100000��ˮ��������\n");
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
//	printf("���������εĴ�С(����)��");
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
//	printf("��������Ҫ������ˮ��Ǯ����");
//	scanf("%d", &money);
//	int soda = money;//��¼һ��ʼ���˶���ƿ
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
//	printf("������������ǵ�������");
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
//			printf("%c������", murder);
//		}
//	}
//	return 0;
//}
typedef void(*pfunc)(int);

//int main() {
//	(*(void(*)())0)();
//	//0��ַ����  �ѵ�ַΪ0 ǿ������ת�� ת���� void(*)() ����ָ��  ������ �ҵ����� �ú����
//
//	void(*signel(int, void(*)(int)))(int);
////�ȼ�������Ĵ���  typedef�����ʱ��  ���������Ǻ���ָ������͵Ļ� ������Ҫ�Ѷ���ɵ����� д�뵽��������void(*pfunc)(int);
//	pfunc signel(int, pfunc);
//
//	//1.signel���������Ž��  ˵������һ������ �����Ĳ���������int�ͺ���ָ��  ����ָ��Ĳ�����int ����������void
//	//2.signel��Ȼ�Ǻ����� �в�����ôҲһ���ַ�������
//	//3.signel�����ķ������;���void(*)(int)  �ɺ������ͺ����Ĳ���ȥ��֮����Ǻ����ķ�������
//	//�ܽ���˵����  signel�����Ĳ�����int�ͺ���ָ��void(*)(int)  ��������Ҳ��void(*)(int) ����ָ��
//	return 0;
//}
//----------------------------------------------------------------------------------����ָ���������;�����Ǻܴ�

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
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		int x, y;
//		if (input > 0 && input <= len - 1) {
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("������Ϊ��%d\n", pfun[input](x, y));
//		}
//		else if (input == 0) {
//			printf("�˳����򣬻�ӭ�´�ʹ�ã�\n");
//			exit(1);
//		}
//		else {
//			printf("ѡ����� ��û�и�ѡ����������룡\n");
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
//	//����ָ������   �����ÿ��Ԫ�ؾ��Ǻ���ָ�� �������溯���ĵ�ַ  ��������ֵ��һ��
//	int(*pfun[])(int, int) = {add};
//	int(*(*ppfun)[])(int, int) =&pfun;
//	//int(*pfun[])(int, int) ��һ������ָ������  ȥ��������int(*[])(int, int)  �������͵�����
//	//ppfun��һ������ָ�������ָ��  �������������� ������*��� ��������һ��ָ�� �ú�������������ϾͿ�����
//	//(*(*(*ppfun)))  *ppfun�����������ҵ�pfun������� Ҳ������Ԫ�صĵ�ַ�ú��ٽ����� �ҵ���һ��Ԫ��  ��һ��Ԫ����
//	//һ�������ĵ�ַ  �ú��ٴν����� �ҵ�������� �ú���е���
//	printf("%d", (*(*(*ppfun)))(2, 3));
//	//������֪  �����ĵ�ַ�뺯����������ͬ���� Ҳ����˵add=&add  ����˵������*�����ÿ��Բ���Ҫ һ�����
//	printf("%d", (*(*ppfun))(2, 3));
//
//	return 0;
//}

//�ص����� ����A������ΪB�����Ĳ���   ��ֱ�ӵ���A���� ����ͨ��B����������A���� ���ǻص����� B(&A)   (A,B���Ǻ���)



//��������ÿ���ֽڵ�����
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
////����
//int int_cmp(const void* x, const void* y) {
//	return *(int*)y - *(int*)x;
//}
//
////����
//int char_cmp(const void* x, const void* y) {
//	return *(char*)x - *(char*)y;
//}
//void print(int* arr, int len) {
//	for (int i = 0; i < len; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
////                        �����С		�����ֽڴ�С    �ȽϺ��� �Լ�д         �Լ�ģ���ð������
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
////qsort�⺯��ʹ�õ��Ǽ���  ���������������  �õ���ֵ����-1 ���ǽ���  ���ߵ���һ�²�����λ��
////����
//int int_cmp1(const void* x, const void* y) {
//	return (*(int*)x - *(int*)y) * -1;
//}
//
////����
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
//	test1();//�Լ�ʹ��ð�ݺ���ʵ�ֵ�qsort
//	//test2();//ʹ�ÿ⺯��qsort
//
//	return 0;
//}


//int main() {
//	char* str[] = { "work","at","sjhag" };
//	char** ptr = str;
//	ptr++;//ptr�б����������str��Ԫ�صĵ�ַҲ����&str[0]  �ú���++ �������ƫ��һ���ֽ� �ҵ�&str[1]�ĵ�ַ
//	//*ptr����str[1]  ��ӡ�ַ�����ʱ��ͨ����Ԫ�ص�ַ���д�ӡ��
//	printf("%s", *ptr);
//
//	return 0;
//}

//int main() {
//	int arr[MAX][MAX] = { 0 };
//	int row = 0;
//	printf("������������");
//	scanf("%d", &row);
//	for (int i = 0; i < row; i++) {
//		arr[0][i] = i + 1;//��ʼ����һ��
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
//	printf("����������Ҫ���ҵ����֣�");
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
//			printf("�����ֿ��Ա�����,����������е��±���%d--%d", i, j);
//			break;
//		}
//	}
//	if (flag) printf("�ڸþ�����û���ҵ�����Ҫ�����֣���");
//
//	return 0;
//}


//�ַ������� ����ַ����ұ�
//char* rotate_str(char* sor, int k) {
//	assert(sor);
//	while (k >= strlen(sor)) {
//		k -= strlen(sor);
//	}
//	int len = strlen(sor);
//	char* dest = (char *)malloc(sizeof(char)*(len + 1));
//	if (!dest) {
//		printf("�ռ俪��ʧ�ܣ�");
//		return ;
//	}
//	char* temp = sor + k;
//	char* cur = sor;
//	char* dest1 = dest;
//	//�Ѵ�k��ʼ���ַ����õ��¿��ٵĿռ�����
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
//	printf("����������Ҫ�����ַ����ĸ�����");
//	scanf("%d", &k);
//	// ------ͨ����������ռ�  �ú��str1�е��ַ������з���  �ŵ��¿��ٵĿռ����� ��Ȼ���Ǻܺ�
//	//rotate_str(&str1, k);
//	//printf(str1);
//	//printf("\n");
//	//-----------------ͨ���ַ�����ת ������ת��
//	rotate_str1(str1, k);
//	printf(str1);
//	return 0;
//}

//int is_same(char* str1, char* str2,int *i) {
//	assert(str1 && str2);
//	if (strlen(str1) != strlen(str2)) return 0;//���Ȳ�һ���Ļ���ֱ�ӷ���0
//	for (*i = 0; *i < strlen(str1); (*i)++) {
//		rotate_str1(str1, 1);//ÿ������1���ַ� �ú�Ƚ�  ֱ��ѭ������
//		if (!strcmp(str2, str1)) return 1;
//	}
//	return 0;
//}


//int is_same1(const char* str1, const char* str2, int* pk) {//���ַ���1�� ������һ��ͬ�����ַ���1  ˫������  �ַ���1 2 ���Ȳ���
//	//�൱��strstr��ʵ����
//  assert(str1 && str2);
//	int len = strlen(str1);
//	int len1 = strlen(str2);
//	for (int i = 0; i < len; i++) {
//		if (*(str1 + i) == *str2) {//���ҵ�str2�ĵ�һ���ַ���str1�е��ַ�����ͬʱ  �����ж�ѭ�� �ȽϺ����
//			int j = i;
//			int k = 0;//������� ��Ҫ�ı���ߵ�iֵ  �ú�֪��str2����\0����  ���������ַ�����ʱ����
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
//	//	printf("str1��������%d���ַ����Եõ�str2", k + 1);
//	//}
//	//else {
//	//	printf("str1������ת�����Եõ�str2");
//	//}
//	if (is_same1(str1, str2, &k)) {
//		printf("str1��������%d���ַ����Եõ�str2", k);
//	}
//	else {
//		printf("str1������ת�����Եõ�str2");
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
//		//�Ӻ���ǰ����
//		//num��ȥѭ���պ���19  �ַ�ָ��+num  �պ��ҵ�����һ���ֽ�
//		while (num--) {
//			*(((char*)dest) + num) = *(((char*)src) + num);
//		}
//	}
//	else {
//		//���������ǰ��󿽱�
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
//	char* str = Get_Memory();  //��Ϊp��һ��ָ����� ָ���ַ������� �ַ����������ڴ���ֻ��һ�� �����޸�
//					//����ͨ������p�ĵ�ַ �ҵ���hello bit������ĸ�ĵ�ַ  �ú���Դ�ӡ���� ���ǲ��÷��ؾֲ������ĵ�ַ
//	printf(str);
//	printf(str);
//
//	return 0;
//}


//int main() {
//	char arr[21][21] = { 0 };
//	int num = 0;
//	printf("������xͼ�εĴ�С(֧�ֶ�������)��");
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
//	printf("������xͼ�εĴ�С(֧�ֶ�������)��");
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
//	// �����ļ�ָ���λ��  ��Ϊд�ļ�����ļ�ָ��ŵ�д��ʱ���ĩβ ��Ҫ���е���  SEEK_CUR���ļ�����ʼλ��
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
//	FILE* pf1 = fopen("text.txt", "r");//fgetc�ļ������Ƕ�ȡһ���ַ� �����ȡ���� �᷵��EOF  �ļ�������־
//	while (fgets(pa, 10, pf1)) {//fgets�ļ������Ƕ�ȡһ�� �����ȡ���� �᷵��NULLָ�� ���Խ����ж�
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
//	//��ʽ����� ������ļ������� ��printf��ͬ�ľ��Ƕ���һ���ļ�ָ��
//	fprintf(pf, "%s %d %f", s.sarr, s.sa, s.sf);
//	fseek(pf, 0, SEEK_CUR);//�����ļ�ָ��λ��
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
//	//fflush(pf);//fflush  ��������ˢ���ļ�������   ��д������ݼ�ʱд���ļ�����
//	fclose(pf);
//	
//	FILE* pf1 = fopen("text1.txt", "r");
//	if (!pf1) {
//		perror("fopen(pf1)");
//		return 1;
//	}
//	//int len = pf - SEEK_SET;
//	//printf("%d\n", len);
//	printf("%d\n", ftell(pf));//�ر��ļ�֮��  pf��ָ��ͻص��ļ�����ʼλ����
//	fseek(pf, -5, SEEK_END);//SEEK_SET��ʾ�ļ�ָ�����ʼλ��  SEEK_CUR��ʾ�ļ�ָ��ĵ�ǰλ��SEEK_END��ʾ����λ
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
//	fseek(pf1, 0, SEEK_SET);//SEEK_SET��ʾ�ļ�ָ�����ʼλ��  SEEK_CUR��ʾ�ļ�ָ��ĵ�ǰλ��SEEK_END��ʾ����λ��
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
//	//fflush(pf);//fflush  ��������ˢ���ļ�������   ��д������ݼ�ʱд���ļ�����
//	fclose(pf);
//	pf = fopen("text1.txt", "r");
//	if (!pf) {
//		perror("fopen(pf)");
//		return 1;
//	}
//	//int len = pf - SEEK_SET;
//	//printf("%d\n", len);
//	printf("%d\n", ftell(pf));//�ر��ļ�֮��  pf��ָ��ͻص��ļ�����ʼλ����
//	fseek(pf, -5, SEEK_END);//SEEK_SET��ʾ�ļ�ָ�����ʼλ��  SEEK_CUR��ʾ�ļ�ָ��ĵ�ǰλ��SEEK_END��ʾ����λ
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
//	fseek(pf, 0, SEEK_SET);//SEEK_SET��ʾ�ļ�ָ�����ʼλ��  SEEK_CUR��ʾ�ļ�ָ��ĵ�ǰλ��SEEK_END��ʾ����λ��
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
//		printf("file loading successing��\n");
//	}
//	if (feof(pf)) {//feof�ļ����� ����ļ�ָ��pf�����ļ���β ��ô�����᷵��һ����0��ֵ Ҳ������ ����������ȡ������
//		printf("�ļ���ȡ����������");
//	}
//	else if (ferror(pf)) {
//		//ferror�ļ�����  ����ļ����м��ȡ������ û�ж�ȡ��ɾͽ����� ��ô��������һ����0��ֵ���ļ���ȡʧ�ܶ������ģ�
//		printf("�ļ���ȡ���󣬶�ȡ������");
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
//	//int cur = (sum & 1);//�ж����֮�������ĳ��������λ��1  �ú���з���  �����ͬΪ0  ��ͬΪ1
//	for (i = 0; i < 32; i++) {
//		if ((sum >> i) & 1) {
//			j = i;//��¼һ����һλ  �����˶���λ
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
//	printf("�����������ֱ���%d��%d\n", parr[0], parr[1]);
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


