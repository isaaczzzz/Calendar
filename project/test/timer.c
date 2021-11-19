#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <stdbool.h>

void StopWatch(void);
void CountDown(void);

int main(void)
{
    int opt;
    printf("1: 正计时;   2: 倒计时\n");
    scanf("%d", &opt);
    if (opt == 1)
        StopWatch();
    else
        CountDown(); //倒计时
    system("pause");
    return 0;
}

//正计时
void StopWatch(void)
{
    int hour = 0, min = 0, sec = 0;
    bool end = 0;

    printf("按下任意键以开始计时...");
    getchar();
    getchar();
    
    while(!end) {
        Sleep(1000);
        system("cls");
        sec++;
        if(sec > 59) {
            min++;
            sec = 0;
        }
        if(min > 59) {
            hour++;
            min = 0;
        }
        printf("%02d:%02d:%02d", hour, min, sec);
    }
}

//倒计时
void CountDown(void)
{
    int hour = 0, min = 0, sec = 0;
    bool end = 0;

    printf("__ __ __\b\b\b\b\b\b\b\b");
    scanf("%d%d%d", &hour, &min, &sec);
    
    while(!end) {
        system("cls");
        printf("%02d:%02d:%02d", hour, min, sec);
        Sleep(1000);
        sec--;
        if(sec < 0) {
            min--;
            sec = 59;
        }
        if(min < 0) {
            hour--;
            min = 59;
        }
        if(hour < 0) // 00:00:00状态也需维持1秒
            end = 1;
    }
    system("cls");
    printf("时间到\n");
}