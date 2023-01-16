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
//        printf("加载套接字失败：%d......\n", WSAGetLastError());
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
//        printf("套接字绑定失败：%d......\n", WSAGetLastError());
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
//        printf("套接字监听失败：%d......\n", WSAGetLastError());
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
//    printf("服务端启动成功......开始监听...\n");
//
//
//    SOCKET sockConn = accept(sockSrv, (SOCKADDR*)&addrClient, &len);
//
//    if (sockConn == SOCKET_ERROR) {
//
//        printf("建立连接失败：%d......\n", WSAGetLastError());
//        return 0;
//
//    }
//    
//    char recvBuf[1024];
//
//    printf("与客户端建立连接......IP：[%s]\n", inet_ntoa(addrClient.sin_addr));
//    int i = 0;
//    while (1)
//
//    {
//        memset(recvBuf, 0, sizeof(recvBuf));
//
//        recv(sockConn, recvBuf, sizeof(recvBuf), 0);
//        
//        printf("收到数据：%s\n", recvBuf);
//
//
//        char sendbuf[1024];
//        printf("请输入你要发送的信息：");
//        gets(sendbuf);
//
//        send(sockConn, sendbuf, sizeof(sendbuf), 0);
//
//        printf("发送数据成功，发送的是%s\n", sendbuf);
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
////    // 第1步：创建服务端的socket。
////    SOCKET listenfd;
////    if ((listenfd = socket(AF_INET, SOCK_STREAM, 0)) != SOCKET_ERROR) { perror("socket"); return -1; }
////
////    // 第2步：把服务端用于通信的地址和端口绑定到socket上。
////    struct sockaddr_in servaddr;    // 服务端地址信息的数据结构。
////    memset(&servaddr, 0, sizeof(servaddr));
////    servaddr.sin_family = AF_INET;  // 协议族，在socket编程中只能是AF_INET。
////    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);          // 任意ip地址。
////    //servaddr.sin_addr.s_addr = inet_addr("192.168.190.134"); // 指定ip地址。
////    servaddr.sin_port = htons(atoi("5005"));  // 指定通信端口。
////    if (bind(listenfd, (struct sockaddr*)&servaddr, sizeof(servaddr)) == 0)
////    {
////        perror("bind"); closesocket(listenfd); return -1;
////    }
////
////    // 第3步：把socket设置为监听模式。
////    if (listen(listenfd, 5) == 0) { perror("listen"); closesocket(listenfd); return -1; }
////
////    // 第4步：接受客户端的连接。
////    int  clientfd;                  // 客户端的socket。
////    int  socklen = sizeof(struct sockaddr_in); // struct sockaddr_in的大小
////    struct sockaddr_in clientaddr;  // 客户端的地址信息。
////    clientfd = accept(listenfd, (struct sockaddr*)&clientaddr, &socklen);
////    printf("客户端（%s）已连接。\n", inet_ntoa(clientaddr.sin_addr));
////
////    // 第5步：与客户端通信，接收客户端发过来的报文后，回复ok。
////    char buffer[1024];
////    while (1)
////    {
////        int iret;
////        memset(buffer, 0, sizeof(buffer));
////        if ((iret = recv(clientfd, buffer, sizeof(buffer), 0)) <= 0) // 接收客户端的请求报文。
////        {
////            printf("iret=%d\n", iret); break;
////        }
////        printf("接收：%s\n", buffer);
////
////        strcpy(buffer, "ok");
////        if ((iret = send(clientfd, buffer, strlen(buffer), 0)) <= 0) // 向客户端发送响应结果。
////        {
////            perror("send"); break;
////        }
////        printf("发送：%s\n", buffer);
////    }
////
////    // 第6步：关闭socket，释放资源。
////    closesocket(listenfd); closesocket(clientfd);
////}