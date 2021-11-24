#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#define BACKBLUE BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY
#define WHITE FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY
#define BLUE FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY
#define RED FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY
#define GREEN FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY
#define ENTER 13
#define ESC 27
#define ARROW 224
#define UP2 72
#define DOWN2 80
#define LEFT2 75
#define RIGHT2 77
#define S 115
#define HIGHLIGHT BACKBLUE
#define DEFAULTCOLOR BLUE
#define TODAY RED
#define RESULT GREEN
// Function that returns the index of the
// day for date DD/MM/YYYY
int dayNumber(int day, int month, int year)
{
    static int t[] = {0, 3, 2, 5, 0, 3,
                      5, 1, 4, 6, 2, 4};
    year -= month < 3;
    return (year + year / 4 - year / 100 + year / 400 + t[month - 1] + day) % 7;
}

// Function that returns the name of the
// month for the given month Number
// January - 0, February - 1 and so on
char *getMonthName(int monthNumber)
{
    char *month;

    switch (monthNumber)
    {
    case 0:
        month = "一月";
        break;
    case 1:
        month = "二月";
        break;
    case 2:
        month = "三月";
        break;
    case 3:
        month = "四月";
        break;
    case 4:
        month = "五月";
        break;
    case 5:
        month = "六月";
        break;
    case 6:
        month = "七月";
        break;
    case 7:
        month = "八月";
        break;
    case 8:
        month = "九月";
        break;
    case 9:
        month = "十月";
        break;
    case 10:
        month = "十一月";
        break;
    case 11:
        month = "十二月";
        break;
    }
    return month;
}

// Function to return the number of days
// in a month
int numberOfDays(int monthNumber, int year)
{
    // January
    if (monthNumber == 0)
        return (31);

    // February
    if (monthNumber == 1)
    {
        // 闰年判断
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            return (29);
        else
            return (28);
    }

    // March
    if (monthNumber == 2)
        return (31);

    // April
    if (monthNumber == 3)
        return (30);

    // May
    if (monthNumber == 4)
        return (31);

    // June
    if (monthNumber == 5)
        return (30);

    // July
    if (monthNumber == 6)
        return (31);

    // August
    if (monthNumber == 7)
        return (31);

    // September
    if (monthNumber == 8)
        return (30);

    // October
    if (monthNumber == 9)
        return (31);

    // November
    if (monthNumber == 10)
        return (30);

    // December
    if (monthNumber == 11)
        return (31);
}

// Function to print the calendar of
// the given year
void printUI(int yy,int mm,int dd)
//输出指定日期所在日历并绘制UI
{
    int x = 0, y = 2;
    time_t timep;
    struct tm *p;
    time(&timep);
    p = gmtime(&timep);
    //获取当前时间

    int year = yy;
    int mon = p->tm_mon + 1;
    int thisyear = p->tm_year + 1900;
    int today = p->tm_mday;
    int days;
    int key = 0;
    int i = mm -  1;
    int optionpick = 1;
    int start = 0;

    system("cls");
    while (1)
    {
        key = 0;
        if (kbhit())
            key = getch();
        //如果键盘被点击则获取键位对应数值
        if (key != ESC)
        {
            if (key == ARROW || (i == mm - 1  && start == 0) || key == ENTER)
            //按下的是方向键，回车键或第一次启动函数则输出日历并判断键位
            {
                system("cls");
                if (kbhit())
                    key = getch();
                start = 1;
                //标记函数为已经启动过
                if (key == LEFT2)
                //键盘左键按下
                    if (i != 0)
                        i--;
                    else
                        i = 11, year--;
                if (key == RIGHT2)
                //键盘右键按下
                    if (i != 11)
                        i++;
                    else
                        i = 0, year++;

                if (key == UP2)
                //键盘上键按下，选择选项
                    switch (optionpick)
                    {
                    case 1:
                        go(50, 0);
                        color(DEFAULTCOLOR);
                        printf("番茄钟");
                        go(50, 2);
                        color(DEFAULTCOLOR);
                        printf("日期查询");
                        go(50, 4);
                        color(DEFAULTCOLOR);
                        printf("添加日程");
                        go(50, 6);
                        color(DEFAULTCOLOR);
                        printf("正计时");
                        go(50, 8);
                        color(DEFAULTCOLOR);
                        printf("设置闹钟");
                        go(50, 10);
                        color(HIGHLIGHT);
                        printf("设置");
                        optionpick = 6;
                        break;
                    case 2:
                        go(50, 0);
                        color(HIGHLIGHT);
                        printf("番茄钟");
                        go(50, 2);
                        color(DEFAULTCOLOR);
                        printf("日期查询");
                        go(50, 4);
                        color(DEFAULTCOLOR);
                        printf("添加日程");
                        go(50, 6);
                        color(DEFAULTCOLOR);
                        printf("正计时");
                        go(50, 8);
                        color(DEFAULTCOLOR);
                        printf("设置闹钟");
                        go(50, 10);
                        color(DEFAULTCOLOR);
                        printf("设置");
                        optionpick = 1;
                        break;
                    case 3:
                        go(50, 0);
                        color(DEFAULTCOLOR);
                        printf("番茄钟");
                        go(50, 2);
                        color(HIGHLIGHT);
                        printf("日期查询");
                        go(50, 4);
                        color(DEFAULTCOLOR);
                        printf("添加日程");
                        go(50, 6);
                        color(DEFAULTCOLOR);
                        printf("正计时");
                        go(50, 8);
                        color(DEFAULTCOLOR);
                        printf("设置闹钟");
                        go(50, 10);
                        color(DEFAULTCOLOR);
                        printf("设置");
                        optionpick = 2;
                        break;
                    case 4:
                        go(50, 0);
                        color(DEFAULTCOLOR);
                        printf("番茄钟");
                        go(50, 2);
                        color(DEFAULTCOLOR);
                        printf("日期查询");
                        go(50, 4);
                        color(HIGHLIGHT);
                        printf("添加日程");
                        go(50, 6);
                        color(DEFAULTCOLOR);
                        printf("正计时");
                        go(50, 8);
                        color(DEFAULTCOLOR);
                        printf("设置闹钟");
                        go(50, 10);
                        color(DEFAULTCOLOR);
                        printf("设置");
                        optionpick = 3;
                        break;
                    case 5:
                        go(50, 0);
                        color(DEFAULTCOLOR);
                        printf("番茄钟");
                        go(50, 2);
                        color(DEFAULTCOLOR);
                        printf("日期查询");
                        go(50, 4);
                        color(DEFAULTCOLOR);
                        printf("添加日程");
                        go(50, 6);
                        color(HIGHLIGHT);
                        printf("正计时");
                        go(50, 8);
                        color(DEFAULTCOLOR);
                        printf("设置闹钟");
                        go(50, 10);
                        color(DEFAULTCOLOR);
                        printf("设置");
                        optionpick = 4;
                        break;
                    case 6:
                        go(50, 0);
                        color(DEFAULTCOLOR);
                        printf("番茄钟");
                        go(50, 2);
                        color(DEFAULTCOLOR);
                        printf("日期查询");
                        go(50, 4);
                        color(DEFAULTCOLOR);
                        printf("添加日程");
                        go(50, 6);
                        color(DEFAULTCOLOR);
                        printf("正计时");
                        go(50, 8);
                        color(HIGHLIGHT);
                        printf("设置闹钟");
                        go(50, 10);
                        color(DEFAULTCOLOR);
                        printf("设置");
                        optionpick = 5;
                        break;
                    default:
                        break;
                    }
                else if (key == DOWN2)
                //键盘下键按下，选择选项
                    switch (optionpick)
                    {
                    case 5:
                        go(50, 0);
                        color(DEFAULTCOLOR);
                        printf("番茄钟");
                        go(50, 2);
                        color(DEFAULTCOLOR);
                        printf("日期查询");
                        go(50, 4);
                        color(DEFAULTCOLOR);
                        printf("添加日程");
                        go(50, 6);
                        color(DEFAULTCOLOR);
                        printf("正计时");
                        go(50, 8);
                        color(DEFAULTCOLOR);
                        printf("设置闹钟");
                        go(50, 10);
                        color(HIGHLIGHT);
                        printf("设置");
                        optionpick = 6;
                        break;
                    case 6:
                        go(50, 0);
                        color(HIGHLIGHT);
                        printf("番茄钟");
                        go(50, 2);
                        color(DEFAULTCOLOR);
                        printf("日期查询");
                        go(50, 4);
                        color(DEFAULTCOLOR);
                        printf("添加日程");
                        go(50, 6);
                        color(DEFAULTCOLOR);
                        printf("正计时");
                        go(50, 8);
                        color(DEFAULTCOLOR);
                        printf("设置闹钟");
                        go(50, 10);
                        color(DEFAULTCOLOR);
                        printf("设置");
                        optionpick = 1;
                        break;
                    case 1:
                        go(50, 0);
                        color(DEFAULTCOLOR);
                        printf("番茄钟");
                        go(50, 2);
                        color(HIGHLIGHT);
                        printf("日期查询");
                        go(50, 4);
                        color(DEFAULTCOLOR);
                        printf("添加日程");
                        go(50, 6);
                        color(DEFAULTCOLOR);
                        printf("正计时");
                        go(50, 8);
                        color(DEFAULTCOLOR);
                        printf("设置闹钟");
                        go(50, 10);
                        color(DEFAULTCOLOR);
                        printf("设置");
                        optionpick = 2;
                        break;
                    case 2:
                        go(50, 0);
                        color(DEFAULTCOLOR);
                        printf("番茄钟");
                        go(50, 2);
                        color(DEFAULTCOLOR);
                        printf("日期查询");
                        go(50, 4);
                        color(HIGHLIGHT);
                        printf("添加日程");
                        go(50, 6);
                        color(DEFAULTCOLOR);
                        printf("正计时");
                        go(50, 8);
                        color(DEFAULTCOLOR);
                        printf("设置闹钟");
                        go(50, 10);
                        color(DEFAULTCOLOR);
                        printf("设置");
                        optionpick = 3;
                        break;
                    case 3:
                        go(50, 0);
                        color(DEFAULTCOLOR);
                        printf("番茄钟");
                        go(50, 2);
                        color(DEFAULTCOLOR);
                        printf("日期查询");
                        go(50, 4);
                        color(DEFAULTCOLOR);
                        printf("添加日程");
                        go(50, 6);
                        color(HIGHLIGHT);
                        printf("正计时");
                        go(50, 8);
                        color(DEFAULTCOLOR);
                        printf("设置闹钟");
                        go(50, 10);
                        color(DEFAULTCOLOR);
                        printf("设置");
                        optionpick = 4;
                        break;
                    case 4:
                        go(50, 0);
                        color(DEFAULTCOLOR);
                        printf("番茄钟");
                        go(50, 2);
                        color(DEFAULTCOLOR);
                        printf("日期查询");
                        go(50, 4);
                        color(DEFAULTCOLOR);
                        printf("添加日程");
                        go(50, 6);
                        color(DEFAULTCOLOR);
                        printf("正计时");
                        go(50, 8);
                        color(HIGHLIGHT);
                        printf("设置闹钟");
                        go(50, 10);
                        color(DEFAULTCOLOR);
                        printf("设置");
                        optionpick = 5;
                        break;
                    default:
                        break;
                    }
                else if (key == ENTER)
                //回车键按下，读取选项并进入对应功能
                {
                    switch (optionpick)
                    {
                    case 1:
                        //tomato();
                        break;
                    case 2: 
                    //实现跳转到指定日期功能
                        system("cls");
                        printf("输入要跳转的日期(如2021 11 08):");
                        int yy1,mm1,dd1;
                        scanf("%d %d %d", &yy1, &mm1, &dd1);
                        printUI(yy1,mm1,dd1);
                        break;
                    case 3:
                        //note();
                        break;
                    case 4:
                        //timing();
                        break;
                    case 5:
                        //setalarm();
                        break;
                    case 6:
                        //settings();
                    default:
                        break;
                    }
                }

                else
                {
                    go(50, 0);
                    color(HIGHLIGHT);
                    printf("番茄钟");
                    go(50, 2);
                    color(DEFAULTCOLOR);
                    printf("日期查询");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("添加日程");
                    go(50, 6);
                    color(DEFAULTCOLOR);
                    printf("正计时");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("设置闹钟");
                    go(50, 10);
                    color(DEFAULTCOLOR);
                    printf("设置");
                    optionpick = 1;
                }
                x = 0;
                y = 2;
                //system("ping -n 2 127.0.0.1>nul");
                go(0, 0);
                color(DEFAULTCOLOR);
                days = numberOfDays(i, year);
                
                printf("           ←%d年%s→            \n", year, getMonthName(i));
                // 输出年份月份
                
                printf(" Sun   Mon  Tue  Wed  Thu  Fri  Sat\n");
                // 输出行
                
                int k;
                int current = dayNumber(1, i + 1 , year);
                for (k = 0; k < current; k++)
                {
                    printf("     ");
                    x += 5;
                }
                // 输出空日期

                for (int j = 1; j <= days; j++)
                {
                    if (i == mon - 1 && j == today && year == thisyear)
                    {
                        //输出今天日期为设定颜色
                        go(x, y);
                        color(TODAY);
                        printf("%5d", j);
                        x += 5;
                    }
                    else if (i == mm - 1  && j == dd && year == yy)
                    {
                        //输出搜索结果的日期为设定颜色
                        go(x, y);
                        color(RESULT);
                        printf("%5d", j);
                        x += 5;
                    }
                    else
                    {
                        //其他普通日期输出为设定颜色
                        go(x, y);
                        color(DEFAULTCOLOR);
                        printf("%5d", j);
                        x += 5;
                    }

                    if (++k > 6)
                    {
                        k = 0;
                        printf("\n");
                        x = 0;
                        y++;
                    }
                }

                if (k)
                    printf("\n"), y++;
                    //换行
            }
        }
        else
            exit(0);
            //检测到ESC则退出程序
        time_t timep2;
        struct tm *p2;
        time(&timep2);
        p2 = gmtime(&timep2);
        go(0, y);
        color(DEFAULTCOLOR);
        printf("现在是：%04d/%02d/%02d %02d:%02d:%02d", p2->tm_year + 1900, p2->tm_mon + 1, p2->tm_mday,
               (p2->tm_hour + 8 == 24 ? 0 : p2->tm_hour), p2->tm_min, p2->tm_sec);
    }

    return;
}
int main()
{
    system("color F9");
    system("chcp 936");
    system("cls");
    CONSOLE_CURSOR_INFO cursor_info = {1, 0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info); //隐藏光标
    time_t timep;
    struct tm *p;
    time(&timep);
    p = gmtime(&timep);
    int year = p->tm_year + 1900;
    int mon = p->tm_mon + 1;
    int day = p->tm_mday;
    printUI(year,mon,day);
    return 0;
}
void color(int a)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
}
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
void printday(int x, int y, int colour, int num)
{
    go(x, y);
    color(colour);
    printf("%5d", num);
}
