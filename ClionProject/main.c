#include "connection.h"

int dayNumber(int, int, int);
char *getMonthName(int);
int numberOfDays(int, int);
void printUI(int, int, int);

int main(void)
{

    system("color F9");
    //设置控制台默认颜色
    system("chcp 936");

    system("cls");
    //设置编码为GBK并清屏
    CONSOLE_CURSOR_INFO cursor_info = {1, 0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
    //隐藏光标

    time_t timep;
    struct tm *p;
    time(&timep);
    p = gmtime(&timep);
    int year = p->tm_year + 1900;
    int mon = p->tm_mon + 1;
    int day = p->tm_mday;
    //获取时间并调用printUI函数
    printUI(year, mon, day);
    return 0;
}

//返回月份的起始星期
int dayNumber(int day, int month, int year)
{
    static int t[] = {0, 3, 2, 5, 0, 3,
                      5, 1, 4, 6, 2, 4};
    year -= month < 3;
    return (year + year / 4 - year / 100 + year / 400 + t[month - 1] + day) % 7;
}

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

//输出指定日期所在日历并绘制UI
void printUI(int yy, int mm, int dd)
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
    int i = mm - 1;
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
            if (key == ARROW || (i == mm - 1 && start == 0) || key == ENTER)
                //按下的是方向键，回车键或第一次启动函数则输出日历并判断键位
            {
                system("cls");
                ShowSchedule(yy, mm, dd);
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
                    }
                else if (key == ENTER)
                    //回车键按下，读取选项并进入对应功能
                {
                    switch (optionpick)
                    {
                        case 1:
                            CountDown();
                            break;
                        case 2:
                            //实现跳转到指定日期功能
                            system("cls");
                            printf("输入要跳转的日期(如2021 11 08):");
                            int yy1, mm1, dd1;
                            scanf("%d %d %d", &yy1, &mm1, &dd1);
                            printUI(yy1, mm1, dd1);

                            break;
                        case 3:
                            AddSchedule();
                            break;
                        case 4:
                            StopWatch();
                            break;
                        case 5:
                            SetAlarm();
                            break;
                        case 6:
                            Settings();
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
                int current = dayNumber(1, i + 1, year);
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
                    else if (i == mm - 1 && j == dd && year == yy)
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
        //循环输出当前时间
        //加时区
    }
}