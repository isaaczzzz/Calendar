/*********************
 * �����ӣ�����ʱ      *
 * *******************/
#include "connection.h"

void StopWatch(void);
void CountDown(void);
void color_print(const char *s, int color);

//����ʱ
void StopWatch(void)
{
    int hour = 0, min = 0, sec = 0;
    bool end = 0;

    system("cls");
    go(45, 12);
    color_print("����������Կ�ʼ��ʱ...", 2);
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
        go(50, 12);
        printf("%02d:%02d:%02d", hour, min, sec);
    }
}

//����ʱ
void CountDown(void)
{
    int hour, min, sec, num;
    int ohour, omin, osec;
    float percent = 1.0f;
    bool end = 0;
    int key;

    system("cls");
    //�߿�
    PrintRows(40, 65, 8, UP);
    PrintColumns(9, 16, 40);
    PrintRows(40, 65, 17, DOWN);
    PrintColumns(9, 16, 65);

    go(50, 10);
    printf("������\n");
    go(43, 12);
    printf("������ʱ��:__:__:__\b\b\b\b\b\b\b\b");
    scanf("%d%d%d", &ohour, &omin, &osec);
    hour = ohour;
    min = omin;
    sec = osec;

    while(!end) {
        system("cls");

        //�߿�
        PrintRows(40, 65, 8, UP);
        PrintColumns(9, 16, 40);
        PrintRows(40, 65, 17, DOWN);
        PrintColumns(9, 16, 65);

        //����ʱ��
        go(42, 14);
        num = (int)(percent * 20);
        printf("|");
        for(int i = 0; i < num; i++)
            printf("�~");

        go(50, 10);
        printf("������\n");
        putchar('\n');
        go(49, 12);
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
        if(hour < 0) // 00:00:00״̬Ҳ��ά��1��
            end = 1;
        float fenzi = sec + min * 60 + hour * 3600;
        float fenmu = osec + omin * 60 + ohour * 3600;
        percent = fenzi / fenmu;
    }

    system("cls");
    //�߿�
    PrintRows(40, 65, 8, UP);
    PrintColumns(9, 16, 40);
    PrintRows(40, 65, 17, DOWN);
    PrintColumns(9, 16, 65);

    go(50, 12);
    printf("ʱ�䵽");
    getchar();
    getchar();
    system("cls");
    main();
}


/*********************
 * 0 = ��ɫ 8 = ��ɫ
 * 1 = ��ɫ 9 = ����ɫ
 * 2 = ��ɫ A = ����ɫ
 * 3 = ǳ��ɫ B = ��ǳ��ɫ
 * 4 = ��ɫ C = ����ɫ
 * 5 = ��ɫ D = ����ɫ
 * 6 = ��ɫ E = ����ɫ
 * 7 = ��ɫ F = ����ɫ
 * *******************/
void color_print(const char *s, int color)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | color| BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY);
    printf(s);
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | 0 | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY); //�Ļ�Ĭ�ϰ�ɫ
}