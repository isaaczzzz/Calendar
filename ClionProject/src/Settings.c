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
//#include "connection.h"

struct Settings
{
    int SettingItem;
    int Setting;
} S;

int main()
{
    /*FILE *fp;
    fp = fopen("Settings.dat", "wb+");
    S.SettingItem = 3333332;
    S.Setting = 3;
    if (fwrite(&S, sizeof(S), 1, fp))
    {
        printf("Success\n");
        
    }
    S.SettingItem = 1;
    S.Setting = 2;
    rewind(fp);
    while(fread(&S, sizeof(S), 1, fp) == 1){
    printf("%d\n",S.SettingItem);
    printf("%d\n",S.Setting);
    }
    */
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
                PrintTimeZone(8);
                break;
            case 2:
                //format();
                break;
            case 3:
                //hourformat();
                break;
            case 4:
                //skin();
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
                    printf("���ң�������ʱ������");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("��ʽ����");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24Сʱ��/12Сʱ������");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("�������");
                    go(50, 16);
                    color(HIGHLIGHT);
                    printf("�˳�");
                    optionpick = 5;
                    break;
                case 2:
                    go(50, 0);
                    color(HIGHLIGHT);
                    printf("���ң�������ʱ������");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("��ʽ����");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24Сʱ��/12Сʱ������");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("�������");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("�˳�");
                    optionpick = 1;
                    break;
                case 3:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("���ң�������ʱ������");
                    go(50, 4);
                    color(HIGHLIGHT);
                    printf("��ʽ����");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24Сʱ��/12Сʱ������");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("�������");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("�˳�");
                    optionpick = 2;
                    break;
                case 4:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("���ң�������ʱ������");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("��ʽ����");
                    go(50, 8);
                    color(HIGHLIGHT);
                    printf("24Сʱ��/12Сʱ������");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("�������");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("�˳�");
                    optionpick = 3;
                    break;
                case 5:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("���ң�������ʱ������");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("��ʽ����");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24Сʱ��/12Сʱ������");
                    go(50, 12);
                    color(HIGHLIGHT);
                    printf("�������");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("�˳�");
                    optionpick = 4;
                    break;
                }
            if (key == DOWN2)
                switch (optionpick)
                {
                case 4:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("���ң�������ʱ������");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("��ʽ����");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24Сʱ��/12Сʱ������");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("�������");
                    go(50, 16);
                    color(HIGHLIGHT);
                    printf("�˳�");
                    optionpick = 5;
                    break;
                case 5:
                    go(50, 0);
                    color(HIGHLIGHT);
                    printf("���ң�������ʱ������");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("��ʽ����");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24Сʱ��/12Сʱ������");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("�������");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("�˳�");
                    optionpick = 1;
                    break;
                case 1:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("���ң�������ʱ������");
                    go(50, 4);
                    color(HIGHLIGHT);
                    printf("��ʽ����");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24Сʱ��/12Сʱ������");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("�������");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("�˳�");
                    optionpick = 2;
                    break;
                case 2:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("���ң�������ʱ������");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("��ʽ����");
                    go(50, 8);
                    color(HIGHLIGHT);
                    printf("24Сʱ��/12Сʱ������");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("�������");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("�˳�");
                    optionpick = 3;
                    break;
                case 3:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("���ң�������ʱ������");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("��ʽ����");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24Сʱ��/12Сʱ������");
                    go(50, 12);
                    color(HIGHLIGHT);
                    printf("�������");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("�˳�");
                    optionpick = 4;
                    break;
                }
        }
        if (start == 0)
        {
            start = 1;
            go(50, 0);
            color(HIGHLIGHT);
            printf("���ң�������ʱ������");
            go(50, 4);
            color(DEFAULTCOLOR);
            printf("��ʽ����");
            go(50, 8);
            color(DEFAULTCOLOR);
            printf("24Сʱ��/12Сʱ������");
            go(50, 12);
            color(DEFAULTCOLOR);
            printf("�������");
            go(50, 16);
            color(DEFAULTCOLOR);
            printf("�˳�");
        }
    }
}

void PrintTimeZone(int offset)
{
    int optionpicki = 0;
    int optionpickj = 0;
    int start = 0;

    system("cls");
    while (1)
    {
        int key = 0;
        if (kbhit())
            key = getch();
        if (key == ENTER)
        {
            system("cls");
            printf("%d %d",optionpicki,optionpickj);
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
            printf("���ʻ�����");
            go(8, 0);
            if (optionpicki == 1 && optionpickj == 0)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("��;��");
            go(16, 0);
            if (optionpicki == 2 && optionpickj == 0)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("������");
            go(24, 0);
            if (optionpicki == 3 && optionpickj == 0)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("����˹��");
            go(32, 0);
            if (optionpicki == 4 && optionpickj == 0)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("̫ƽ��ʱ��");
            go(40, 0);
            if (optionpicki == 5 && optionpickj == 0)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("ɽ��ʱ��");
            go(48, 0);
            if (optionpicki == 6 && optionpickj == 0)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("�в�ʱ��");
            go(56, 0);
            if (optionpicki == 7 && optionpickj == 0)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("����ʱ��");
            go(64, 0);
            if (optionpicki == 8 && optionpickj == 0)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("������ʱ��");
            go(0, 6);
            if (optionpicki == 0 && optionpickj == 1)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("��������");
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
            printf("�׶�");
            go(32, 6);
            if (optionpicki == 4 && optionpickj == 1)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("����,����");
            go(40, 6);
            if (optionpicki == 5 && optionpickj == 1)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("�ŵ�,����");
            go(48, 6);
            if (optionpicki == 6 && optionpickj == 1)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("Ī˹��");
            go(56, 6);
            if (optionpicki == 7 && optionpickj == 1)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("ë����˹");
            go(64, 6);
            if (optionpicki == 8 && optionpickj == 1)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("�ͻ�˹̹");
            go(0, 12);
            if (optionpicki == 0 && optionpickj == 2)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("�ϼ���");
            go(8, 12);
            if (optionpicki == 1 && optionpickj == 2)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("����");
            go(16, 12);
            if (optionpicki == 2 && optionpickj == 2)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("����");
            go(24, 12);
            if (optionpicki == 3 && optionpickj == 2)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("����");
            go(32, 12);
            if (optionpicki == 4 && optionpickj == 2)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("�ص�");
            go(40, 12);
            if (optionpicki == 5 && optionpickj == 2)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("��Ŭ��ͼ");
            go(48, 12);
            if (optionpicki == 6 && optionpickj == 2)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("쳼�");
            go(56, 12);
            if (optionpicki == 7 && optionpickj == 2)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("�����˹");
            go(64, 12);
            if (optionpicki == 8 && optionpickj == 2)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("ʥ����");
        }
    }
}

void Settings()
{
    FILE *fp;
    fp = fopen("Settings.dat", "wb+");
}

void LoadSettings()
{
    FILE *fp;

    fp = fopen("Settings.dat", "wb+");
}

void color(int a)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
}

//����ƶ�������X��ʾ�����꣬Y��ʾ������
void go(int x, int y)
{
    COORD coord;
    //����
    coord.X = x;
    coord.Y = y;
    HANDLE a = GetStdHandle(STD_OUTPUT_HANDLE);
    //��ñ�׼������
    SetConsoleCursorPosition(a, coord);
    //�Ա�׼����ľ��Ϊ�������ÿ���̨�������
}
