/*********************
 * 番茄钟，正计时, 闹钟  *
 * *******************/
#include "connection.h"

//正计时
void StopWatch(void)
{
    int hour = 0, min = 0, sec = 0;
    bool end = 0;

    system("cls");
    go(45, 12);
    color(DefaultColor());
    printf("按下任意键以开始计时...");
    while(!kbhit());

    while (!end)
    {
        int key = 0;
        if (kbhit())
        {
            key = getch();
        }
        if (key == ESC)
            main();
        if (key == SPACE)
        {
            key = 0;
            while (1)
            {
                if (kbhit())
                {
                    key = getch();
                }
                if (key == SPACE)
                    break;
            }
        }
        Sleep(1000);
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
        if (key == SPACE)
        {
            key = 0;
            while (1)
            {
                if (kbhit())
                {
                    key = getch();
                }
                if (key == SPACE)
                    break;
            }
        }
        system("cls");
        sec++;
        if (sec > 59)
        {
            min++;
            sec = 0;
        }
        if (min > 59)
        {
            hour++;
            min = 0;
        }
        //边框
        PrintRows(42, 71, 9, UP);
        PrintColumns(10, 16, 42);
        PrintRows(42, 71, 17, DOWN);
        PrintColumns(10, 16, 71);
        go(53, 12);
        printf("%02d:%02d:%02d", hour, min, sec);
        go(44, 14);
        printf("按下ESC退出,按下空格键暂停");
    }
}

//倒计时
void CountDown(void)
{
    int hour, min, sec, num;
    int ohour, omin, osec;
    float percent = 1.0f;
    bool end = 0;
    int key;

    system("cls");
    //边框
    PrintRows(44, 69, 8, UP);
    PrintColumns(9, 16, 44);
    PrintRows(44, 69, 17, DOWN);
    PrintColumns(9, 16, 69);

    go(54, 10);
    printf("番茄钟\n");
    go(47, 12);
    printf("请输入时长:__:__:__\b\b\b\b\b\b\b\b");
    scanf("%d%d%d", &ohour, &omin, &osec);

    if(ohour < 0 || omin < 0 || omin > 59 || osec < 0 || osec > 59) {
        system("cls");
        //边框
        PrintRows(44, 69, 8, UP);
        PrintColumns(9, 16, 44);
        PrintRows(44, 69, 17, DOWN);
        PrintColumns(9, 16, 69);
        go(46, 12);
        printf("请输入正确的时间格式!");
        Sleep(1500);
        return CountDown();
    }


    hour = ohour;
    min = omin;
    sec = osec;

    while (!end)
    {
        system("cls");

        //边框
        PrintRows(44, 69, 8, UP);
        PrintColumns(9, 16, 44);
        PrintRows(44, 69, 17, DOWN);
        PrintColumns(9, 16, 69);

        //倒计时条
        go(46, 14);
        num = (int)(percent * 20);
        printf("|");
        for (int i = 0; i < num; i++)
            printf("▇");

        go(54, 10);
        printf("番茄钟\n");
        putchar('\n');
        go(53, 12);
        printf("%02d:%02d:%02d", hour, min, sec);
        Sleep(1000);
        sec--;
        if (sec < 0)
        {
            min--;
            sec = 59;
        }
        if (min < 0)
        {
            hour--;
            min = 59;
        }
        if (hour < 0) // 00:00:00状态也需维持1秒
            end = 1;
        float fenzi = sec + min * 60 + hour * 3600;
        float fenmu = osec + omin * 60 + ohour * 3600;
        percent = fenzi / fenmu;
    }

    system("cls");
    //边框
    PrintRows(44, 69, 8, UP);
    PrintColumns(9, 16, 44);
    PrintRows(44, 69, 17, DOWN);
    PrintColumns(9, 16, 69);

    end = 0;
    while (!end)
    {
        key = 0;
        if (kbhit())
            key = getch();
        if (key == ESC)
            main();
        go(52, 12);
        printf("\a▇ 时间到 ▇\a");
        go(47, 14);
        printf("按下ESC返回主界面...");
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
}

//闹钟
void SetAlarm(void)
{
    int hour, min, end = 0;

    system("cls");
    //边框
    PrintRows(44, 70, 7, UP);
    PrintColumns(8, 17, 44);
    PrintRows(44, 70, 18, DOWN);
    PrintColumns(8, 17, 70);
    go(56, 10);
    printf("闹钟");
    go(45, 13);
    printf("输入时间(24小时制): __:__\b\b\b\b\b");
    scanf("%d%d", &hour, &min);

    if (hour > 23 || min > 59) {
        system("cls");
        //边框
        PrintRows(44, 70, 7, UP);
        PrintColumns(8, 17, 44);
        PrintRows(44, 70, 18, DOWN);
        PrintColumns(8, 17, 70);
        go(49, 12);
        printf("请输入正确的时间!");
        Sleep(1500);
        return SetAlarm();
    }

    while (!end)
    {
        int time[6] = {};
        ReturnThisTime(time);

        system("cls");
        //边框
        PrintRows(44, 70, 7, UP);
        PrintColumns(8, 17, 44);
        PrintRows(44, 70, 18, DOWN);
        PrintColumns(8, 17, 70);
        go(56, 10);
        printf("闹钟");
        go(55, 11);
        printf("%02d:%02d", hour, min);
        go(55, 13);
        printf("现在是");
        //printf("%02d:%02d", time[2], time[1]);
        PrintTime(50, 14, TimeZone(), 1);

        CONSOLE_CURSOR_INFO cursor_info = {1, 0};
        SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info); //隐藏光标
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
        printf("\a▇ 时间到 ▇\a");
        go(50, 15);
        printf("按下ESC返回主界面...");
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
}