/*********************
 * ��������            *
 * *******************/
#include "connection.h"

void SetAlarm(void)
{
    time_t timep;
    struct tm *p;
    int hour, min, end = 0;

    system("cls");
    //�߿�
    PrintRows(44, 70, 7, UP);
    PrintColumns(8, 17, 44);
    PrintRows(44, 70, 18, DOWN);
    PrintColumns(8, 17, 70);
    go(56, 10);
    printf("����");
    go(50, 13);
    printf("����ʱ��: __:__\b\b\b\b\b");
    scanf("%d%d", &hour, &min);

    while(!end) {
        time(&timep);
        p = gmtime(&timep);

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
        go(53, 14);
        printf("�~ %02d:%02d �~", p -> tm_hour + 8, p -> tm_min);//ʱ��

        CONSOLE_CURSOR_INFO cursor_info = {1, 0};
        SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);//���ع��
        Sleep(1000);
        if(p -> tm_hour + 8 == hour && p -> tm_min == min) {
            system("cls");
            go(52, 12);
            end = 1;
        }
    }

    end = 0;
    while(!end){
        int key = 0;
        if(kbhit()){
            key = getch();
        }
        if(key == ESC)
            main();
        Sleep(300);
        system("cls");
        go(54, 13);
        printf("\a�~ ʱ�䵽 �~\a");
        go(50, 15);
        printf("����ESC����������...");
        key = 0;
        if(kbhit()){
            key = getch();
        }
        if(key == ESC) {
            end = 1;
            main();
        }
    }
    getchar();
    getchar();
    system("cls");
    main();
}