#include <stdio.h>
#include <time.h>
#include <Windows.h>
//#include "connection.h"

void go(int x, int y)
//光标移动函数，X表示横坐标，Y表示纵坐标
{
    COORD coord;
    //坐标
    coord.X = x;
    coord.Y = y;
    HANDLE a = GetStdHandle(STD_OUTPUT_HANDLE);
    //获得标准输出句柄
    SetConsoleCursorPosition(a, coord);
    //以标准输出的句柄为参数设置控制台光标坐标
}

void SetAlarm()
{
    time_t timep;
    struct tm *p;
    int hour, min, end = 0;
    
    go(51, 9);
    printf("闹钟");
    go(46, 12);
    printf("输入时间: __:__\b\b\b\b\b");
    scanf("%d%d", &hour, &min);
    
    while(!end) {
        time(&timep);
        p = gmtime(&timep);

        system("cls");
        go(52, 12);
        printf("%02d:%02d", p -> tm_hour + 8, p -> tm_min);//时区
        CONSOLE_CURSOR_INFO cursor_info = {1, 0};
        SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);//隐藏光标
        Sleep(1000);
        if(p -> tm_hour + 8 == hour && p -> tm_min == min) {
            system("cls");
            go(52, 12);
            printf("时间到");
            end = 1;
        }
    }
    getchar();
    getchar();
}

int main(void)
{
    SetAlarm();
    return 0;
}