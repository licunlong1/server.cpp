//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
//#include<ctime>
//#include<windows.h>
//#include<mutex>
//#include<condition_variable>
//
//int main()
//{
//	int n = 100;
//	mutex mtx;
//	condition_variable cv;
//	bool flag = true;
//	//����
//	thread t1([&] {
//		int i = 1;
//		while (i <= 100)
//		{
//			unique_lock<mutex> ul(mtx);
//			cv.wait(ul, [&flag]()->bool {return flag; }); //�ȴ�������������
//			cout << this_thread::get_id() << ":" << i << endl;
//			i += 2;
//			flag = false;
//			cv.notify_one(); //�������������µȴ���һ���߳�
//			Sleep(2000);
//
//		}
//	});
//	//ż��
//	thread t2([&] {
//		int j = 2;
//		while (j <= 100)
//		{
//			unique_lock<mutex> ul(mtx);
//			cv.wait(ul, [&flag]()->bool {return !flag; }); //�ȴ�������������
//			cout << this_thread::get_id() << ":" << j << endl;
//			j += 2;
//			flag = true;
//			cv.notify_one(); //�������������µȴ���һ���߳�
//			Sleep(2000);
//		}
//	});
//	t1.join();
//	t2.join();
//	return 0;
//}