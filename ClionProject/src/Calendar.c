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

//查询时区
int TimeZone()
{
    int settings[7];
    LoadSettings(settings);
    return settings[0];
}

//查询12/24小时制
int ReturnHourFormat()
{
    int settings[7];
    LoadSettings(settings);
    return settings[2];
}

//查询时间格式
int ReturnFormat()
{
    int settings[7];
    LoadSettings(settings);
    return settings[1];
}

//返回当前时间(月份为0-11)
void ReturnThisTime(int thistime[])
{
    time_t timep;
    struct tm *p;
    time(&timep);
    p = gmtime(&timep);

    int sec = p->tm_sec;
    int min = p->tm_min;
    int hour = p->tm_hour;
    int day = p->tm_mday;
    int mon = p->tm_mon;
    int year = p->tm_year + 1900;

    hour += TimeZone();
    if (hour >= 24)
    {
        hour -= 24;
        day++;
        if (day > NumberOfDays(mon, year))
        {
            day = 1;
            mon++;
            if (mon > 11)
            {
                mon = 0;
                year++;
            }
        }
    }
    if (hour < 0)
    {
        hour += 24;
        day--;
        if (day <= 0)
        {
            mon--;
            if (mon < 0)
            {
                mon = 11;
                year--;
            }
            day = NumberOfDays(mon, year);
        }
    }
    thistime[0] = sec;
    thistime[1] = min;
    thistime[2] = hour;
    thistime[3] = day;
    thistime[4] = mon;
    thistime[5] = year;
}

void PrintTime(int x, int y, int tz, int longorshort)
{
    //输出时间到指定位置
    int time[6] = {};
    ReturnThisTime(time);
    int sec = time[0];
    int min = time[1];
    int hour = time[2];
    int day = time[3];
    int mon = time[4];
    int year = time[5];
    go(x, y);
    color(DefaultColor());

    if (longorshort == 0)
    {
        //输出带日期与秒数的时间
        if (ReturnHourFormat() == 12)
        {
            //24小时制转12小时制
            if (hour >= 12)
            {
                if (hour == 12)
                    switch (ReturnFormat())
                    {
                    case 1:
                        printf("现在是: %04d-%02d-%02d 12:%02d:%02d PM", year, mon + 1, day, min, sec);
                        break;
                    case 2:
                        printf("现在是: %02d-%02d-%04d 12:%02d:%02d PM", day, mon + 1, year, min, sec);
                        break;
                    case 3:
                        printf("现在是: %02d-%02d-%04d 12:%02d:%02d PM", mon + 1, day, year, min, sec);
                        break;
                    }
                else
                {
                    hour -= 12;
                    switch (ReturnFormat())
                    {
                    case 1:
                        printf("现在是: %04d-%02d-%02d %02d:%02d:%02d PM", year, mon + 1, day, hour, min, sec);
                        break;
                    case 2:
                        printf("现在是: %02d-%02d-%04d %02d:%02d:%02d PM", day, mon + 1, year, hour, min, sec);
                        break;
                    case 3:
                        printf("现在是: %02d-%02d-%04d %02d:%02d:%02d PM", mon + 1, day, year, hour, min, sec);
                        break;
                    }
                }
            }
            else
            {
                if (hour == 0)
                    switch (ReturnFormat())
                    {
                    case 1:
                        printf("现在是: %04d-%02d-%02d 12:%02d:%02d AM", year, mon + 1, day, min, sec);
                        break;
                    case 2:
                        printf("现在是: %02d-%02d-%04d 12:%02d:%02d AM", day, mon + 1, year, min, sec);
                        break;
                    case 3:
                        printf("现在是: %02d-%02d-%04d 12:%02d:%02d AM", mon + 1, day, year, min, sec);
                        break;
                    }
                else
                    switch (ReturnFormat())
                    {
                    case 1:
                        printf("现在是: %04d-%02d-%02d %02d:%02d:%02d AM", year, mon + 1, day, hour, min, sec);
                        break;
                    case 2:
                        printf("现在是: %02d-%02d-%04d %02d:%02d:%02d AM", day, mon + 1, year, hour, min, sec);
                        break;
                    case 3:
                        printf("现在是: %02d-%02d-%04d %02d:%02d:%02d AM", mon + 1, day, year, hour, min, sec);
                        break;
                    }
            }
        }
        else
            switch (ReturnFormat())
            {
            case 1:
                printf("现在是: %04d-%02d-%02d %02d:%02d:%02d", year, mon + 1, day, hour, min, sec);
                break;
            case 2:
                printf("现在是: %02d-%02d-%04d %02d:%02d:%02d", day, mon + 1, year, hour, min, sec);
                break;
            case 3:
                printf("现在是: %02d-%02d-%04d %02d:%02d:%02d", mon + 1, day, year, hour, min, sec);
                break;
            }
    }
    else
    //输出不带日期与秒数的时间
    {
        if (ReturnHourFormat() == 12)
        {
            if (hour >= 12)
            {
                if (hour == 12)
                    switch (ReturnFormat())
                    {
                    case 1:
                        printf("现在是: 12:%02d PM", min);
                        break;
                    case 2:
                        printf("现在是: 12:%02d PM", min);
                        break;
                    case 3:
                        printf("现在是: 12:%02d PM", min);
                        break;
                    }
                else
                {
                    hour -= 12;
                    switch (ReturnFormat())
                    {
                    case 1:
                        printf("现在是: %02d:%02d PM", hour, min);
                        break;
                    case 2:
                        printf("现在是: %02d:%02d PM", hour, min);
                        break;
                    case 3:
                        printf("现在是: %02d:%02d PM", hour, min);
                        break;
                    }
                }
            }
            else
            {
                if (hour == 0)
                    switch (ReturnFormat())
                    {
                    case 1:
                        printf("现在是: 12:%02d AM", min);
                        break;
                    case 2:
                        printf("现在是: 12:%02d AM", min);
                        break;
                    case 3:
                        printf("现在是: 12:%02d AM", min);
                        break;
                    }
                else
                    switch (ReturnFormat())
                    {
                    case 1:
                        printf("现在是: %02d:%02d AM", hour, min);
                        break;
                    case 2:
                        printf("现在是: %02d:%02d AM", hour, min);
                        break;
                    case 3:
                        printf("现在是: %02d:%02d AM", hour, min);
                        break;
                    }
            }
        }
        else
            switch (ReturnFormat())
            {
            case 1:
                printf("现在是: %02d:%02d", hour, min);
                break;
            case 2:
                printf("现在是: %02d:%02d", hour, min);
                break;
            case 3:
                printf("现在是: %02d:%02d", hour, min);
                break;
            }
    }
}
