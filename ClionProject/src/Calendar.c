#include "connection.h"

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

//某年某月的天数
int NumberOfDays(int monthNumber, int year)
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
