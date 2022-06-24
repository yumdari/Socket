#ifndef __CALCULATE_H__
#define __CALCULATE_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#define BUF_SIZE 1024
#define OPSZ 4

void error_handling(char *message); // 에러 처리 함수 선언
int calculate(int opnum, int opnds[], char oprator);    // calculate 함수 선언

#endif
