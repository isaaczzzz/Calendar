/*********************
 * 番茄钟，正计时      *
 * *******************/
#include "connection.h"

//正计时
void StopWatch(void)
{
    int hour = 0, min = 0, sec = 0;
    bool end = 0;

    system("cls");
    go(45, 12);
    color(DEFAULTCOLOR);
    printf("按下任意键以开始计时...");
    getchar();

    while(!end) {
        int key = 0;
        if(kbhit()){
            key = getch();
        }
        if(key == ESC)
            main();
        if(key == SPACE){
            key = 0;
            while(1){
                if(kbhit()){
                    key = getch();
                }
                if(key == SPACE)
                    break;
            }
        }
        Sleep(1000);
        key = 0;
        if(kbhit()){
            key = getch();
        }
        if(key == ESC) {
            end = 1;
            main();
        }
        if(key == SPACE){
            key = 0;
            while(1){
                if(kbhit()){
                    key = getch();
                }
                if(key == SPACE)
                    break;
            }
        }
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
        go(42, 14);
        printf("按下ESC退出，按下空格键暂停");
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
    hour = ohour;
    min = omin;
    sec = osec;

    while(!end) {
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
        for(int i = 0; i < num; i++)
            printf("▇");

        go(54, 10);
        printf("番茄钟\n");
        putchar('\n');
        go(53, 12);
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

    go(54, 12);
    printf("\a时间到\a");
    getchar();
    getchar();
    system("cls");
    main();
}


/*********************
 * 0 = 黑色 8 = 灰色
 * 1 = 蓝色 9 = 淡蓝色；0
 * 2 = 绿色 A = 淡绿色
 * 3 = 浅绿色 B = 淡浅绿色
 * 4 = 红色 C = 淡红色
 * 5 = 紫色 D = 淡紫色
 * 6 = 黄色 E = 淡黄色
 * 7 = 白色 F = 亮白色
 * *******************/
void color_print(const char *s, int color)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | color| BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY);
    printf(s);
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | 0 | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY); //改回默认白色
}