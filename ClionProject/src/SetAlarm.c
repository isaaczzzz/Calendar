/*********************
 * ��������            *
 * *******************/
#include "connection.h"

void SetAlarm(void)
{
    int hour, min, end = 0;

    system("cls");
    //�߿�
    PrintRows(44, 70, 7, UP);
    PrintColumns(8, 17, 44);
    PrintRows(44, 70, 18, DOWN);
    PrintColumns(8, 17, 70);
    go(56, 10);
    printf("����");
    go(45, 13);
    printf("����ʱ��(24Сʱ��): __:__\b\b\b\b\b");
    scanf("%d%d", &hour, &min);

    while (!end)
    {
        int time[6] = {};
        ReturnThisTime(time);

        system("cls");
        //�߿�
        PrintRows(44, 70, 7, UP);
        PrintColumns(8, 17, 44);
        PrintRows(44, 70, 18, DOWN);
        PrintColumns(8, 17, 70);
        go(56, 10);
        printf("����");
        go(55, 11);
        printf("%02d:%02d", hour, min);
        go(55, 13);
        printf("������");
        //printf("%02d:%02d", time[2], time[1]);
        PrintTime(50, 14, TimeZone(), 1);

        CONSOLE_CURSOR_INFO cursor_info = {1, 0};
        SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info); //���ع��
        Sleep(1000);
        if (time[2] == hour && time[1] == min)
        {
            system("cls");
            go(52, 12);
            end = 1;
        }
    }

    end = 0;
    while (!end)
    {
        int key = 0;
        if (kbhit())
        {
            key = getch();
        }
        if (key == ESC)
            main();
        Sleep(300);
        system("cls");
        go(54, 13);
        printf("\a�~ ʱ�䵽 �~\a");
        go(50, 15);
        printf("����ESC����������...");
        key = 0;
        if (kbhit())
        {
            key = getch();
        }
        if (key == ESC)
        {
            end = 1;
            main();
        }
    }
    getchar();
    getchar();
    system("cls");
    main();
}