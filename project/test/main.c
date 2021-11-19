#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#define BACKBLUE BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY
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
void printCalendar()
{
    int yy = 0, mm = 0, dd = 0;
    int x = 0, y = 2;
    time_t timep;
    struct tm *p;
    time(&timep);
    p = gmtime(&timep);
    int year = p->tm_year + 1900;
    int mon = p->tm_mon;
    int thisyear = p->tm_year + 1900;
    int today = p->tm_mday;
    system("cls");
    int days;
    // Index of the day from 0 to 6

    // i for Iterate through months
    // j for Iterate through days
    // of the month - i
    int key = 0;
    int i = mon;
    int optionpick = 1;
    int start = 0;
    while (1)
    {

        if (kbhit())
            key = getch();
        if (key == S)
        {
            system("cls");

            printf("Enter the date(yy mm dd) you want to refer to:");
            scanf("%d %d %d", &yy, &mm, &dd);
            key = 0;
            year = yy;
            i = mm - 1;
            goto start1;
        }
        if (key != ESC)
        {
            if (key == ARROW || (i == mon && start == 0))
            {
            start1:
                system("cls");
                if (kbhit())
                    key = getch();
                start = 1;
                if (key == LEFT2)
                    if (i != 0)
                        i--;
                    else
                        i = 11, year--;
                if (key == RIGHT2)
                    if (i != 11)
                        i++;
                    else
                        i = 0, year++;
                
                if (key == UP2)
                    go(50, 0), printf("111"), go(50, 3), printf("222");
                else if (key == DOWN2)
                    go(50, 0), printf("111"), go(50, 3), printf("222");
                else
                {
                    go(50, 0),color(BACKBLUE), printf("111");
                    go(50, 3),color(BLUE), printf("222");
                    optionpick=1;
                }
                x = 0;
                y = 2;
                //system("ping -n 2 127.0.0.1>nul");
                go(0,0);
                days = numberOfDays(i, year);
                // Print the current month name
                printf("           %d年%s            \n", year, getMonthName(i));
                // Print the columns
                printf(" Sun   Mon  Tue  Wed  Thu  Fri  Sat\n");
                // Print appropriate spaces
                int k;
                int current = dayNumber(1, i + 1, year);
                for (k = 0; k < current; k++)
                    printf("     "), x += 5;
                for (int j = 1; j <= days; j++)
                {
                    if (i == mon && j == today && year == thisyear)
                        printday(x, y, RED, j), x += 5;
                    else if (i == mm - 1 && j == dd && year == yy)
                        printday(x, y, GREEN, j), x += 5;
                    else
                        printday(x, y, BLUE, j), x += 5;

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
            }
        }
        else
            return;
        time_t timep2;
        struct tm *p2;
        time(&timep2);
        p2 = gmtime(&timep2);
        go(0, y);
        color(BLUE);
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
    printCalendar();
    return 0;
}
void color(int a)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
}
void go(int x, int y) //光标移动函数，X表示横坐标，Y表示纵坐标
{
    COORD coord; //坐标
    coord.X = x;
    coord.Y = y;
    HANDLE a = GetStdHandle(STD_OUTPUT_HANDLE); //获得标准输出句柄
    SetConsoleCursorPosition(a, coord);         //以标准输出的句柄为参数设置控制台光标坐标
}
void printday(int x, int y, int colour, int num)
{
    go(x, y);
    color(colour);
    printf("%5d", num);
}
