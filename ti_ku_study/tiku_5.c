
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
//	//} while (i++);   //             ���ѭ��������ѭ�� ��Ϊ���Ǹ�int������ ���i�ᳬ����Χ ��i����int�����������ֵ ���Լ� ���ɸ���
//	//printf("%d", count);
//
//
//
//	//int x = 3, y;   //                       ���5.46 ��������Ǹ�ʲô��   ��ѭ��
//	//do
//	//{
//	//	y = x--;
//	//	if (!y)
//	//	{
//	//		printf("*");
//	//		continue;
//	//	}
//	//	printf("#");
//	//} while (1 <= x <= 2);  // ����д�Ǵ����  �������ж�ǰ��ı��ʽ�ú�����2��Ƚ�  ǰ����ʽ��ֵ��Ϊ1  ��С��2 ���Ի���ѭ��
//	//return 0;
//}





//int main()  //                                              ���5.50 �������Ĺ����������ż��д����������֮��
//{
//	int num, prime_1, prime_2;
//	int yinshu;
//	printf("������һ��ż��:>");
//	scanf_s("%d", &num);
//	for (prime_1 = 3; prime_1 < sqrt(num); prime_1 += 2)
//	{
//		for (yinshu = 2; yinshu < sqrt(prime_1); yinshu++)   //  �жϵ�һ�����Ƿ�������
//			if ((prime_1 % yinshu) == 0) 
//				break;
//		if (yinshu > sqrt(prime_1))    //  ����������ڵ�һ�����Ŀ�ƽ��  ˵�������ѭ�������� ��ô�Ҳ����ܱ����������� ����������
//			prime_2 = num - prime_1;
//		else 
//			continue;
//		for (yinshu = 2; yinshu < sqrt(prime_2); yinshu++) //   �жϵڶ����� 
//			if ((prime_2 % yinshu) == 0) 
//				break;
//		if (yinshu > sqrt(prime_2))    // ����ڶ�����Ҳ��������  ��ô�ʹ�ӡ��������
//			printf("%d=%d+%d\n", num, prime_1, prime_2);
//	}
//	return 0;
//}


//int main() {
//	printf("0-100000��ˮ��������\n");
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