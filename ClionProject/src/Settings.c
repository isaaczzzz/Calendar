#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#define ENTER 13
#define ESC 27
#define ARROW 224
#define UP2 72
#define DOWN2 80
#define LEFT2 75
#define RIGHT2 77
#define BACKBLUE BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY
#define WHITE FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY
#define BLUE FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY
#define RED FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY
#define GREEN FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY
#define HIGHLIGHT BACKBLUE
#define DEFAULTCOLOR BLUE
#define TODAY RED
#define RESULT GREEN
#define DEFAULTTIMEZONE 8
#define DEFAULTFORMAT 1
#define DEFAULTHOURFORMAT 24
//#include "connection.h"

int main()
{
    int settings[3];
    LoadSettings(settings);

    system("color F9");
    //设置控制台默认颜色
    system("chcp 936");
    system("cls");
    int optionpick = 1;
    int start = 0;
    while (1)
    {
        int key = 0;
        if (kbhit())
            key = getch();
        if (key == ENTER)
        {
            switch (optionpick)
            {
            case 1:
                PrintTimeZone(settings[0]);
                break;
            case 2:
                //Format();
                break;
            case 3:
                HourFormat();
                break;
            case 4:
                //Skin();
                break;
            case 5:
                exit(0);
                //main();
                break;
            }
        }
        if (key == ARROW)
        {
            if (kbhit())
                key = getch();
            if (key == UP2)
                switch (optionpick)
                {
                case 1:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("国家，地区，时区设置");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("格式设置");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24小时制/12小时制设置");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("外观设置");
                    go(50, 16);
                    color(HIGHLIGHT);
                    printf("退出");
                    optionpick = 5;
                    break;
                case 2:
                    go(50, 0);
                    color(HIGHLIGHT);
                    printf("国家，地区，时区设置");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("格式设置");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24小时制/12小时制设置");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("外观设置");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("退出");
                    optionpick = 1;
                    break;
                case 3:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("国家，地区，时区设置");
                    go(50, 4);
                    color(HIGHLIGHT);
                    printf("格式设置");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24小时制/12小时制设置");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("外观设置");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("退出");
                    optionpick = 2;
                    break;
                case 4:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("国家，地区，时区设置");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("格式设置");
                    go(50, 8);
                    color(HIGHLIGHT);
                    printf("24小时制/12小时制设置");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("外观设置");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("退出");
                    optionpick = 3;
                    break;
                case 5:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("国家，地区，时区设置");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("格式设置");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24小时制/12小时制设置");
                    go(50, 12);
                    color(HIGHLIGHT);
                    printf("外观设置");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("退出");
                    optionpick = 4;
                    break;
                }
            if (key == DOWN2)
                switch (optionpick)
                {
                case 4:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("国家，地区，时区设置");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("格式设置");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24小时制/12小时制设置");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("外观设置");
                    go(50, 16);
                    color(HIGHLIGHT);
                    printf("退出");
                    optionpick = 5;
                    break;
                case 5:
                    go(50, 0);
                    color(HIGHLIGHT);
                    printf("国家，地区，时区设置");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("格式设置");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24小时制/12小时制设置");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("外观设置");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("退出");
                    optionpick = 1;
                    break;
                case 1:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("国家，地区，时区设置");
                    go(50, 4);
                    color(HIGHLIGHT);
                    printf("格式设置");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24小时制/12小时制设置");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("外观设置");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("退出");
                    optionpick = 2;
                    break;
                case 2:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("国家，地区，时区设置");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("格式设置");
                    go(50, 8);
                    color(HIGHLIGHT);
                    printf("24小时制/12小时制设置");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("外观设置");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("退出");
                    optionpick = 3;
                    break;
                case 3:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("国家，地区，时区设置");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("格式设置");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24小时制/12小时制设置");
                    go(50, 12);
                    color(HIGHLIGHT);
                    printf("外观设置");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("退出");
                    optionpick = 4;
                    break;
                }
        }
        if (start == 0)
        {
            start = 1;
            go(50, 0);
            color(HIGHLIGHT);
            printf("国家，地区，时区设置");
            go(50, 4);
            color(DEFAULTCOLOR);
            printf("格式设置");
            go(50, 8);
            color(DEFAULTCOLOR);
            printf("24小时制/12小时制设置");
            go(50, 12);
            color(DEFAULTCOLOR);
            printf("外观设置");
            go(50, 16);
            color(DEFAULTCOLOR);
            printf("退出");
        }
    }
}

void HourFormat()
{
    int hourformat, settings[3];
    while (1)
    {
        system("cls");
        go(50, 8);
        color(DEFAULTCOLOR);
        printf("输入想要设置的小时格式（12/24）：");
        scanf("%d", &hourformat);
        if ((hourformat != 12) && (hourformat != 24))
        {
            go(50, 9);
            color(DEFAULTCOLOR);
            printf("无效输入，请输入12或24");
            Sleep(500);
        }
        else
            break;
    }
    LoadSettings(settings);
    settings[2] = hourformat;
    SetSettings(settings);
    main();
}

void PrintTimeZone(int offset)
{
    int optionpicki = 0;
    int optionpickj = 0;
    int start = 0;

    switch (offset)
    {
    case -12:
        optionpicki = 0;
        optionpickj = 0;
        break;

    case -11:
        optionpicki = 1;
        optionpickj = 0;
        break;

    case -10:
        optionpicki = 2;
        optionpickj = 0;
        break;

    case -9:
        optionpicki = 3;
        optionpickj = 0;
        break;

    case -8:
        optionpicki = 4;
        optionpickj = 0;
        break;

    case -7:
        optionpicki = 5;
        optionpickj = 0;
        break;

    case -6:
        optionpicki = 6;
        optionpickj = 0;
        break;

    case -5:
        optionpicki = 7;
        optionpickj = 0;
        break;

    case -4:
        optionpicki = 8;
        optionpickj = 0;
        break;

    case -3:
        optionpicki = 0;
        optionpickj = 1;
        break;

    case -2:
        optionpicki = 1;
        optionpickj = 1;
        break;

    case -1:
        optionpicki = 2;
        optionpickj = 1;
        break;

    case 0:
        optionpicki = 3;
        optionpickj = 1;
        break;

    case 1:
        optionpicki = 4;
        optionpickj = 1;
        break;

    case 2:
        optionpicki = 5;
        optionpickj = 1;
        break;

    case 3:
        optionpicki = 6;
        optionpickj = 1;
        break;

    case 4:
        optionpicki = 7;
        optionpickj = 1;
        break;

    case 5:
        optionpicki = 8;
        optionpickj = 1;
        break;

    case 6:
        optionpicki = 0;
        optionpickj = 2;
        break;

    case 7:
        optionpicki = 1;
        optionpickj = 2;
        break;

    case 8:
        optionpicki = 2;
        optionpickj = 2;
        break;

    case 9:
        optionpicki = 3;
        optionpickj = 2;
        break;

    case 10:
        optionpicki = 4;
        optionpickj = 2;
        break;

    case 11:
        optionpicki = 5;
        optionpickj = 2;
        break;

    case 12:
        optionpicki = 6;
        optionpickj = 2;
        break;

    case 13:
        optionpicki = 7;
        optionpickj = 2;
        break;

    case 14:
        optionpicki = 8;
        optionpickj = 2;
        break;
    }

    system("cls");
    while (1)
    {
        int key = 0;
        if (kbhit())
            key = getch();
        if (key == ESC)
            main();
        if (key == ENTER)
        {
            int settings[3];
            LoadSettings(settings);
            settings[0] = optionpicki + optionpickj * 9 - 12;
            SetSettings(settings);
        }
        if (key == ARROW || start == 0)
        {
            start = 1;
            if (kbhit())
                key = getch();
            switch (key)
            {
            case UP2:
                optionpickj = (optionpickj == 0) ? 2 : (optionpickj - 1);
                break;

            case DOWN2:
                optionpickj = (optionpickj == 2) ? 0 : (optionpickj + 1);
                break;

            case LEFT2:
                optionpicki = (optionpicki == 0) ? 8 : (optionpicki - 1);
                break;

            case RIGHT2:
                optionpicki = (optionpicki == 8) ? 0 : (optionpicki + 1);
                break;

            default:
                break;
            }

            go(0, 0);
            if (optionpicki == 0 && optionpickj == 0)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("国际换日线"); //utc-12
            go(8, 0);
            if (optionpicki == 1 && optionpickj == 0)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("中途岛"); //utc-11
            go(16, 0);
            if (optionpicki == 2 && optionpickj == 0)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("夏威夷"); //utc-10
            go(24, 0);
            if (optionpicki == 3 && optionpickj == 0)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("阿拉斯加"); //utc-9
            go(32, 0);
            if (optionpicki == 4 && optionpickj == 0)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("太平洋时间"); //utc-8
            go(40, 0);
            if (optionpicki == 5 && optionpickj == 0)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("山地时间"); //utc-7
            go(48, 0);
            if (optionpicki == 6 && optionpickj == 0)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("中部时间"); //utc-6
            go(56, 0);
            if (optionpicki == 7 && optionpickj == 0)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("东部时间"); //utc-5
            go(64, 0);
            if (optionpicki == 8 && optionpickj == 0)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("大西洋时间"); //utc-4
            go(0, 6);
            if (optionpicki == 0 && optionpickj == 1)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("巴西利亚"); //utc-3
            go(8, 6);
            if (optionpicki == 1 && optionpickj == 1)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("UTC-2");
            go(16, 6);
            if (optionpicki == 2 && optionpickj == 1)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("UTC-1");
            go(24, 6);
            if (optionpicki == 3 && optionpickj == 1)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("伦敦"); //utc+-0
            go(32, 6);
            if (optionpicki == 4 && optionpickj == 1)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("柏林,巴黎"); //utc+1
            go(40, 6);
            if (optionpicki == 5 && optionpickj == 1)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("雅典,基辅"); //utc+2
            go(48, 6);
            if (optionpicki == 6 && optionpickj == 1)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("莫斯科"); //utc+3
            go(56, 6);
            if (optionpicki == 7 && optionpickj == 1)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("毛里求斯"); //utc+4
            go(64, 6);
            if (optionpicki == 8 && optionpickj == 1)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("巴基斯坦"); //utc+5
            go(0, 12);
            if (optionpicki == 0 && optionpickj == 2)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("孟加拉"); //utc+6
            go(8, 12);
            if (optionpicki == 1 && optionpickj == 2)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("曼谷"); //utc+7
            go(16, 12);
            if (optionpicki == 2 && optionpickj == 2)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("北京"); //utc+8
            go(24, 12);
            if (optionpicki == 3 && optionpickj == 2)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("东京"); //utc+9
            go(32, 12);
            if (optionpicki == 4 && optionpickj == 2)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("关岛"); //utc+10
            go(40, 12);
            if (optionpicki == 5 && optionpickj == 2)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("瓦努阿图"); //utc+11
            go(48, 12);
            if (optionpicki == 6 && optionpickj == 2)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("斐济"); //utc+12
            go(56, 12);
            if (optionpicki == 7 && optionpickj == 2)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("基里巴斯"); //utc+13
            go(64, 12);
            if (optionpicki == 8 && optionpickj == 2)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("圣诞岛"); //utc+14
        }
    }
}

void Settings()
{
    FILE *fp;
    fp = fopen("Settings.dat", "wb+");
}

void LoadSettings(int a[])
{
    FILE *fp;
    fp = fopen("Settings.dat", "r+");
    if (fp == NULL)
    {
        fclose(fp);
        fp = fopen("Settings.dat", "w+");
        fprintf(fp, "%d,%d,%d", DEFAULTTIMEZONE, DEFAULTFORMAT, DEFAULTHOURFORMAT);
        *a = DEFAULTTIMEZONE;
        *(a + 1) = DEFAULTFORMAT;
        *(a + 2) = DEFAULTHOURFORMAT;
        fclose(fp);
    }
    else
    {
        fscanf(fp, "%d,%d,%d", a, a + 1, a + 2);
        fclose(fp);
    }
}

void SetSettings(int a[3])
{
    FILE *fp;
    fp = fopen("Settings.dat", "r+");
    fprintf(fp, "%d,%d,%d", a[0], a[1], a[2]);
    fclose(fp);
}

void color(int a)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
}

//光标移动函数，X表示横坐标，Y表示纵坐标
void go(int x, int y)
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
