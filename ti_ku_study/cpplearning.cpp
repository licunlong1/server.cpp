//#include<stdio.h>
//#include<stdlib.h>
//#include<iostream>
//#include<ctime>
//#include<string.h>
//#include<ctype.h>
//#include<vector>
////#include<Windows.ApplicationModel.UserDataAccounts.SystemAccess.h>
//using namespace std;
////
////int func(int a = 10, int b = 20)
////{
////	return a + b;
////}
////
////int main()
////{
////	/*int sum = func();
////	cout << "sum = " << sum << endl;
////	cout << "wo ai ni" << endl;*/
////	int a, b;
////	cout << "这里可以求1到任何数的和！" << endl;
////	Sleep(1000);
////	system("cls");
////	cout << "请输入你想要求和的数字:>" << endl;
////	cin >> a ;
////	b = (a + 1) * a / 2;
////	cout << "和为" << b << endl;
////	return 0;
////	printf("请你告诉我爱上你是一个错 我真的是服了 你想要干什么 你是个狗吧我真的是看清楚你了  你等着吧 你会知道的");
////}
//
//
//
////bool string_upper_diy(char str[], int str_len, bool b_odd_pos = true)  //转换字符串大小写  判断奇偶
////{
////	if (str == NULL)
////	{
////		return false;
////	}
////	if(b_odd_pos == true)
////	{
////		for (int i = 0; i < str_len; i++)
////		{
////			if (i % 2 == 0)
////			{
////				str[i] = tolower(str[i]);
////			}
////			if(i % 2 != 0)
////			{
////				str[i] = toupper(str[i]);
////			}
////		}
////	}
////	else
////	{
////		for (int i = 0; i < str_len; i++)
////		{
////			if (i % 2 == 0)
////			{
////				str[i] = toupper(str[i]);
////			}
////			if (i % 2 != 0)
////			{
////				str[i] = tolower(str[i]);
////			}
////		}
////	}
////}
//// 
//// 
////int main()
////{
////	char str[50];
////	cout << "请输入你想要转换的字符串" ;
////	cin >> str;
////	string_upper_diy(str, strlen(str), true);
////	cout << "转换后的字符串为： " << str << endl;
////	system("pause");
////	return 0;
////}
//
//
//
//
//void Get_Next(string& sou, vector<int>& next) {
//	int i = 0;
//	int j = -1;
//	while (i < sou.size() - 1) {
//		if (j == -1 || sou[i] == sou[j]) {
//			next[++i] = ++j;
//		}
//		else {
//			j = next[j];
//		}
//	}
//}
//
//void Get_NextVal(string& sou, vector<int>& nextval) {
//	int i = 0;
//	int j = -1;
//	while (i < sou.size() - 1) {
//		if (j == -1 || sou[i] == sou[j]) {
//			++j;
//			++i;
//			if (sou[i] != sou[j]) nextval[i] = j;
//			else nextval[i] = nextval[j];
//		}
//		else {
//			j = nextval[j];
//		}
//	}
//}
//
//int KMP(string& sou, string& str1, vector<int> next) {
//	int i = 0;
//	int j = -1;
//	i = -1, j = -1;
//	while (abs(i) < sou.size() && abs(j) < str1.size()) {
//		if (j == -1 || sou[i] == str1[j]) {
//			i++;
//			j++;
//		}
//		else {
//			j = next[j];
//			//cout << next[i] << endl;
//		}
//	}
//	if (j == str1.size()) return i - j;
//	else return 0;
//}
//
//
//int main() {
//	string ch1 = "abaabcac";
//	string ch2 = "abc";
//
//	vector<int> next(ch1.size(), -1);
//	vector<int> nextval(ch1.size(), -1);
//	Get_Next(ch1, next);
//	Get_NextVal(ch1, nextval);
//
//	int pos = KMP(ch1, ch2, next);
//	printf("%d", pos);
//
//	return 0;
//}