#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//#include <stdlib.h>
//#include <unistd.h>
//#include <string.h>
//#include <assert.h>
//
//int main()
//{
//    char* s = NULL;
//    int n = 0;
//    
//    pid_t pid = fork();
//    assert(pid != -1);
//    if (pid == 0){
//            s = "child";
//            n = 4;
//    }
//    else{
//        s = "parent";
//        n = 10;
//    }
//    int i = 0;
//    
//    for (; i < n; i++){
//        printf("pid=%d,s=%s\n", getpid(), s);
//        sleep(1);
//    }
//    exit(0);
//}