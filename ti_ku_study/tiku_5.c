
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>


//int main()
//{
//	//int i = 34567;
//	//int count = 0;
//	//do
//	//{
//	//	if (i < 0) break;
//	//	count++;
//	//} while (i++);   //             这个循环不是死循环 因为这是个int的类型 最后i会超出范围 当i到达int的正整数最大值 再自加 会变成负数
//	//printf("%d", count);
//
//
//
//	//int x = 3, y;   //                       题库5.46 下面程序是干什么的   死循环
//	//do
//	//{
//	//	y = x--;
//	//	if (!y)
//	//	{
//	//		printf("*");
//	//		continue;
//	//	}
//	//	printf("#");
//	//} while (1 <= x <= 2);  // 这样写是错误的  他会先判断前面的表达式让后再与2相比较  前面表达式的值恒为1  恒小于2 所以会死循环
//	//return 0;
//}





//int main()  //                                              题库5.50 下面程序的功能是输入的偶数写成两个素数之和
//{
//	int num, prime_1, prime_2;
//	int yinshu;
//	printf("请输入一个偶数:>");
//	scanf_s("%d", &num);
//	for (prime_1 = 3; prime_1 < sqrt(num); prime_1 += 2)
//	{
//		for (yinshu = 2; yinshu < sqrt(prime_1); yinshu++)   //  判断第一个数是否是素数
//			if ((prime_1 % yinshu) == 0) 
//				break;
//		if (yinshu > sqrt(prime_1))    //  如果因数大于第一个数的开平方  说明上面的循环结束了 那么找不到能被整除的因数 他就是素数
//			prime_2 = num - prime_1;
//		else 
//			continue;
//		for (yinshu = 2; yinshu < sqrt(prime_2); yinshu++) //   判断第二个数 
//			if ((prime_2 % yinshu) == 0) 
//				break;
//		if (yinshu > sqrt(prime_2))    // 如果第二个数也符合素数  那么就打印他们两个
//			printf("%d=%d+%d\n", num, prime_1, prime_2);
//	}
//	return 0;
//}


//int main() {
//	printf("0-100000的水仙数如下\n");
//	for (int i = 1; i < 1000000000; i++) {
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
//			sum += pow(j,n);
//		}
//		if (sum == i) {
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}