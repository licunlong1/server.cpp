//#define _CRT_SECURE_NO_WARNINGS 1
//#define _WINSOCK_DEPRECATED_NO_WARNINGS 1
//#include <stdio.h>
//
//#include <WinSock2.h>
//
//#pragma comment(lib, "ws2_32.lib")
//int main()
//
//{
//
//    
//    WSADATA wsaData;
//
//    int port = 5099;
//
// 
//
//    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
//
//    {
//
//        printf("�����׽���ʧ�ܣ�%d......\n", WSAGetLastError());
//
//        return 1;
//
//    }
//
//
//
//
//    SOCKET sockSrv = socket(AF_INET, SOCK_STREAM, 0);
//
//
//
//    SOCKADDR_IN addrSrv;
//
//    addrSrv.sin_family = AF_INET;
//
//    addrSrv.sin_port = htons(port);
//
//    addrSrv.sin_addr.S_un.S_addr = htonl(INADDR_ANY);
//
//    /*printf("%u\n", htonl("192.168.190.134"));
//    printf("%u\n", htonl("192.168.190.135"));
//    printf("%u\n", htonl("192.1.1.1"));
//    printf("%u\n", htonl(3221291265));
//    printf("%u\n", htonl(3232284294));
//    printf("%u\n", htonl(2893747200));
//    return 0;*/
//    if (bind(sockSrv, (LPSOCKADDR)&addrSrv, sizeof(SOCKADDR_IN)) == SOCKET_ERROR)
//
//    {
//
//        printf("�׽��ְ�ʧ�ܣ�%d......\n", WSAGetLastError());
//
//        return 1;
//
//    }
//
//
//
//
//    if (listen(sockSrv, 10) == SOCKET_ERROR) {
//
//        printf("�׽��ּ���ʧ�ܣ�%d......\n", WSAGetLastError());
//
//        return 1;
//
//    }
//
//
//
//
//    SOCKADDR_IN addrClient;
//
//    int len = sizeof(SOCKADDR);
//
//
//
//
//    printf("����������ɹ�......��ʼ����...\n");
//
//
//    SOCKET sockConn = accept(sockSrv, (SOCKADDR*)&addrClient, &len);
//
//    if (sockConn == SOCKET_ERROR) {
//
//        printf("��������ʧ�ܣ�%d......\n", WSAGetLastError());
//        return 0;
//
//    }
//    
//    char recvBuf[1024];
//
//    printf("��ͻ��˽�������......IP��[%s]\n", inet_ntoa(addrClient.sin_addr));
//    int i = 0;
//    while (1)
//
//    {
//        memset(recvBuf, 0, sizeof(recvBuf));
//
//        recv(sockConn, recvBuf, sizeof(recvBuf), 0);
//        
//        printf("�յ����ݣ�%s\n", recvBuf);
//
//
//        char sendbuf[1024];
//        printf("��������Ҫ���͵���Ϣ��");
//        gets(sendbuf);
//
//        send(sockConn, sendbuf, sizeof(sendbuf), 0);
//
//        printf("�������ݳɹ������͵���%s\n", sendbuf);
//
//        
//    }
//    closesocket(sockConn);
//
//    closesocket(sockSrv);
//
//    WSACleanup();
//
//    system("pause");
//
//
//
//    return 0;
//
//}
//
//
////#include <stdio.h>
////#include <string.h>
////#include <unistd.h>
////#include <stdlib.h>
////#include <netdb.h>
////#include <sys/types.h>
////#include <sys/socket.h>
////#include <arpa/inet.h>
////
////int main(int argc, char* argv[])
////{
////    
////    
////    if (argc != 1)
////    {
////        printf("Using:./server port\nExample:./server 5005\n\n"); return -1;
////    }
////
////    // ��1������������˵�socket��
////    SOCKET listenfd;
////    if ((listenfd = socket(AF_INET, SOCK_STREAM, 0)) != SOCKET_ERROR) { perror("socket"); return -1; }
////
////    // ��2�����ѷ��������ͨ�ŵĵ�ַ�Ͷ˿ڰ󶨵�socket�ϡ�
////    struct sockaddr_in servaddr;    // ����˵�ַ��Ϣ�����ݽṹ��
////    memset(&servaddr, 0, sizeof(servaddr));
////    servaddr.sin_family = AF_INET;  // Э���壬��socket�����ֻ����AF_INET��
////    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);          // ����ip��ַ��
////    //servaddr.sin_addr.s_addr = inet_addr("192.168.190.134"); // ָ��ip��ַ��
////    servaddr.sin_port = htons(atoi("5005"));  // ָ��ͨ�Ŷ˿ڡ�
////    if (bind(listenfd, (struct sockaddr*)&servaddr, sizeof(servaddr)) == 0)
////    {
////        perror("bind"); closesocket(listenfd); return -1;
////    }
////
////    // ��3������socket����Ϊ����ģʽ��
////    if (listen(listenfd, 5) == 0) { perror("listen"); closesocket(listenfd); return -1; }
////
////    // ��4�������ܿͻ��˵����ӡ�
////    int  clientfd;                  // �ͻ��˵�socket��
////    int  socklen = sizeof(struct sockaddr_in); // struct sockaddr_in�Ĵ�С
////    struct sockaddr_in clientaddr;  // �ͻ��˵ĵ�ַ��Ϣ��
////    clientfd = accept(listenfd, (struct sockaddr*)&clientaddr, &socklen);
////    printf("�ͻ��ˣ�%s�������ӡ�\n", inet_ntoa(clientaddr.sin_addr));
////
////    // ��5������ͻ���ͨ�ţ����տͻ��˷������ı��ĺ󣬻ظ�ok��
////    char buffer[1024];
////    while (1)
////    {
////        int iret;
////        memset(buffer, 0, sizeof(buffer));
////        if ((iret = recv(clientfd, buffer, sizeof(buffer), 0)) <= 0) // ���տͻ��˵������ġ�
////        {
////            printf("iret=%d\n", iret); break;
////        }
////        printf("���գ�%s\n", buffer);
////
////        strcpy(buffer, "ok");
////        if ((iret = send(clientfd, buffer, strlen(buffer), 0)) <= 0) // ��ͻ��˷�����Ӧ�����
////        {
////            perror("send"); break;
////        }
////        printf("���ͣ�%s\n", buffer);
////    }
////
////    // ��6�����ر�socket���ͷ���Դ��
////    closesocket(listenfd); closesocket(clientfd);
////}