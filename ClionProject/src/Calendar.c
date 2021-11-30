#include "connection.h"

//�����·ݵ���ʼ����
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
            month = "һ��";
            break;
        case 1:
            month = "����";
            break;
        case 2:
            month = "����";
            break;
        case 3:
            month = "����";
            break;
        case 4:
            month = "����";
            break;
        case 5:
            month = "����";
            break;
        case 6:
            month = "����";
            break;
        case 7:
            month = "����";
            break;
        case 8:
            month = "����";
            break;
        case 9:
            month = "ʮ��";
            break;
        case 10:
            month = "ʮһ��";
            break;
        case 11:
            month = "ʮ����";
            break;
    }
    return month;
}

//ĳ��ĳ�µ�����
int NumberOfDays(int monthNumber, int year)
{
    // January
    if (monthNumber == 0)
        return (31);

    // February
    if (monthNumber == 1)
    {
        // �����ж�
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
