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

int dayNumber(int, int, int);
char *getMonthName(int);
int numberOfDays(int, int);
void printUI(int, int, int);
void color(int);
void go(int, int);

int main()
{
    system("color F9");
    //���ÿ���̨Ĭ����ɫ
    system("chcp 936");
    system("cls");
    //���ñ���ΪGBK������
    CONSOLE_CURSOR_INFO cursor_info = {1, 0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
    //���ع��
    time_t timep;
    struct tm *p;
    time(&timep);
    p = gmtime(&timep);
    int year = p->tm_year + 1900;
    int mon = p->tm_mon + 1;
    int day = p->tm_mday;
    printUI(year, mon, day);
    //��ȡʱ�䲢����printUI����
    return 0;
}

int dayNumber(int day, int month, int year)
//�����·ݵ���ʼ����
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

int numberOfDays(int monthNumber, int year)
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

void printUI(int yy, int mm, int dd)
//���ָ��������������������UI
{
    int x = 0, y = 2;
    time_t timep;
    struct tm *p;
    time(&timep);
    p = gmtime(&timep);
    //��ȡ��ǰʱ��

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
        //������̱�������ȡ��λ��Ӧ��ֵ
        if (key != ESC)
        {
            if (key == ARROW || (i == mm - 1 && start == 0) || key == ENTER)
            //���µ��Ƿ�������س������һ����������������������жϼ�λ
            {
                system("cls");
                if (kbhit())
                    key = getch();
                start = 1;
                //��Ǻ���Ϊ�Ѿ�������
                if (key == LEFT2)
                    //�����������
                    if (i != 0)
                        i--;
                    else
                        i = 11, year--;
                if (key == RIGHT2)
                    //�����Ҽ�����
                    if (i != 11)
                        i++;
                    else
                        i = 0, year++;

                if (key == UP2)
                    //�����ϼ����£�ѡ��ѡ��
                    switch (optionpick)
                    {
                    case 1:
                        go(50, 0);
                        color(DEFAULTCOLOR);
                        printf("������");
                        go(50, 2);
                        color(DEFAULTCOLOR);
                        printf("���ڲ�ѯ");
                        go(50, 4);
                        color(DEFAULTCOLOR);
                        printf("�����ճ�");
                        go(50, 6);
                        color(DEFAULTCOLOR);
                        printf("����ʱ");
                        go(50, 8);
                        color(DEFAULTCOLOR);
                        printf("��������");
                        go(50, 10);
                        color(HIGHLIGHT);
                        printf("����");
                        optionpick = 6;
                        break;
                    case 2:
                        go(50, 0);
                        color(HIGHLIGHT);
                        printf("������");
                        go(50, 2);
                        color(DEFAULTCOLOR);
                        printf("���ڲ�ѯ");
                        go(50, 4);
                        color(DEFAULTCOLOR);
                        printf("�����ճ�");
                        go(50, 6);
                        color(DEFAULTCOLOR);
                        printf("����ʱ");
                        go(50, 8);
                        color(DEFAULTCOLOR);
                        printf("��������");
                        go(50, 10);
                        color(DEFAULTCOLOR);
                        printf("����");
                        optionpick = 1;
                        break;
                    case 3:
                        go(50, 0);
                        color(DEFAULTCOLOR);
                        printf("������");
                        go(50, 2);
                        color(HIGHLIGHT);
                        printf("���ڲ�ѯ");
                        go(50, 4);
                        color(DEFAULTCOLOR);
                        printf("�����ճ�");
                        go(50, 6);
                        color(DEFAULTCOLOR);
                        printf("����ʱ");
                        go(50, 8);
                        color(DEFAULTCOLOR);
                        printf("��������");
                        go(50, 10);
                        color(DEFAULTCOLOR);
                        printf("����");
                        optionpick = 2;
                        break;
                    case 4:
                        go(50, 0);
                        color(DEFAULTCOLOR);
                        printf("������");
                        go(50, 2);
                        color(DEFAULTCOLOR);
                        printf("���ڲ�ѯ");
                        go(50, 4);
                        color(HIGHLIGHT);
                        printf("�����ճ�");
                        go(50, 6);
                        color(DEFAULTCOLOR);
                        printf("����ʱ");
                        go(50, 8);
                        color(DEFAULTCOLOR);
                        printf("��������");
                        go(50, 10);
                        color(DEFAULTCOLOR);
                        printf("����");
                        optionpick = 3;
                        break;
                    case 5:
                        go(50, 0);
                        color(DEFAULTCOLOR);
                        printf("������");
                        go(50, 2);
                        color(DEFAULTCOLOR);
                        printf("���ڲ�ѯ");
                        go(50, 4);
                        color(DEFAULTCOLOR);
                        printf("�����ճ�");
                        go(50, 6);
                        color(HIGHLIGHT);
                        printf("����ʱ");
                        go(50, 8);
                        color(DEFAULTCOLOR);
                        printf("��������");
                        go(50, 10);
                        color(DEFAULTCOLOR);
                        printf("����");
                        optionpick = 4;
                        break;
                    case 6:
                        go(50, 0);
                        color(DEFAULTCOLOR);
                        printf("������");
                        go(50, 2);
                        color(DEFAULTCOLOR);
                        printf("���ڲ�ѯ");
                        go(50, 4);
                        color(DEFAULTCOLOR);
                        printf("�����ճ�");
                        go(50, 6);
                        color(DEFAULTCOLOR);
                        printf("����ʱ");
                        go(50, 8);
                        color(HIGHLIGHT);
                        printf("��������");
                        go(50, 10);
                        color(DEFAULTCOLOR);
                        printf("����");
                        optionpick = 5;
                        break;
                    default:
                        break;
                    }
                else if (key == DOWN2)
                    //�����¼����£�ѡ��ѡ��
                    switch (optionpick)
                    {
                    case 5:
                        go(50, 0);
                        color(DEFAULTCOLOR);
                        printf("������");
                        go(50, 2);
                        color(DEFAULTCOLOR);
                        printf("���ڲ�ѯ");
                        go(50, 4);
                        color(DEFAULTCOLOR);
                        printf("�����ճ�");
                        go(50, 6);
                        color(DEFAULTCOLOR);
                        printf("����ʱ");
                        go(50, 8);
                        color(DEFAULTCOLOR);
                        printf("��������");
                        go(50, 10);
                        color(HIGHLIGHT);
                        printf("����");
                        optionpick = 6;
                        break;
                    case 6:
                        go(50, 0);
                        color(HIGHLIGHT);
                        printf("������");
                        go(50, 2);
                        color(DEFAULTCOLOR);
                        printf("���ڲ�ѯ");
                        go(50, 4);
                        color(DEFAULTCOLOR);
                        printf("�����ճ�");
                        go(50, 6);
                        color(DEFAULTCOLOR);
                        printf("����ʱ");
                        go(50, 8);
                        color(DEFAULTCOLOR);
                        printf("��������");
                        go(50, 10);
                        color(DEFAULTCOLOR);
                        printf("����");
                        optionpick = 1;
                        break;
                    case 1:
                        go(50, 0);
                        color(DEFAULTCOLOR);
                        printf("������");
                        go(50, 2);
                        color(HIGHLIGHT);
                        printf("���ڲ�ѯ");
                        go(50, 4);
                        color(DEFAULTCOLOR);
                        printf("�����ճ�");
                        go(50, 6);
                        color(DEFAULTCOLOR);
                        printf("����ʱ");
                        go(50, 8);
                        color(DEFAULTCOLOR);
                        printf("��������");
                        go(50, 10);
                        color(DEFAULTCOLOR);
                        printf("����");
                        optionpick = 2;
                        break;
                    case 2:
                        go(50, 0);
                        color(DEFAULTCOLOR);
                        printf("������");
                        go(50, 2);
                        color(DEFAULTCOLOR);
                        printf("���ڲ�ѯ");
                        go(50, 4);
                        color(HIGHLIGHT);
                        printf("�����ճ�");
                        go(50, 6);
                        color(DEFAULTCOLOR);
                        printf("����ʱ");
                        go(50, 8);
                        color(DEFAULTCOLOR);
                        printf("��������");
                        go(50, 10);
                        color(DEFAULTCOLOR);
                        printf("����");
                        optionpick = 3;
                        break;
                    case 3:
                        go(50, 0);
                        color(DEFAULTCOLOR);
                        printf("������");
                        go(50, 2);
                        color(DEFAULTCOLOR);
                        printf("���ڲ�ѯ");
                        go(50, 4);
                        color(DEFAULTCOLOR);
                        printf("�����ճ�");
                        go(50, 6);
                        color(HIGHLIGHT);
                        printf("����ʱ");
                        go(50, 8);
                        color(DEFAULTCOLOR);
                        printf("��������");
                        go(50, 10);
                        color(DEFAULTCOLOR);
                        printf("����");
                        optionpick = 4;
                        break;
                    case 4:
                        go(50, 0);
                        color(DEFAULTCOLOR);
                        printf("������");
                        go(50, 2);
                        color(DEFAULTCOLOR);
                        printf("���ڲ�ѯ");
                        go(50, 4);
                        color(DEFAULTCOLOR);
                        printf("�����ճ�");
                        go(50, 6);
                        color(DEFAULTCOLOR);
                        printf("����ʱ");
                        go(50, 8);
                        color(HIGHLIGHT);
                        printf("��������");
                        go(50, 10);
                        color(DEFAULTCOLOR);
                        printf("����");
                        optionpick = 5;
                        break;
                    default:
                        break;
                    }
                else if (key == ENTER)
                //�س������£���ȡѡ������Ӧ����
                {
                    switch (optionpick)
                    {
                    case 1:
                        //tomato();
                        break;
                    case 2:
                        //ʵ����ת��ָ�����ڹ���
                        system("cls");
                        printf("����Ҫ��ת������(��2021 11 08):");
                        int yy1, mm1, dd1;
                        scanf("%d %d %d", &yy1, &mm1, &dd1);
                        printUI(yy1, mm1, dd1);
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
                    printf("������");
                    go(50, 2);
                    color(DEFAULTCOLOR);
                    printf("���ڲ�ѯ");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("�����ճ�");
                    go(50, 6);
                    color(DEFAULTCOLOR);
                    printf("����ʱ");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("��������");
                    go(50, 10);
                    color(DEFAULTCOLOR);
                    printf("����");
                    optionpick = 1;
                }
                x = 0;
                y = 2;
                //system("ping -n 2 127.0.0.1>nul");
                go(0, 0);
                color(DEFAULTCOLOR);
                days = numberOfDays(i, year);

                printf("           ��%d��%s��            \n", year, getMonthName(i));
                // �������·�

                printf(" Sun   Mon  Tue  Wed  Thu  Fri  Sat\n");
                // �����

                int k;
                int current = dayNumber(1, i + 1, year);
                for (k = 0; k < current; k++)
                {
                    printf("     ");
                    x += 5;
                }
                // ���������

                for (int j = 1; j <= days; j++)
                {
                    if (i == mon - 1 && j == today && year == thisyear)
                    {
                        //�����������Ϊ�趨��ɫ
                        go(x, y);
                        color(TODAY);
                        printf("%5d", j);
                        x += 5;
                    }
                    else if (i == mm - 1 && j == dd && year == yy)
                    {
                        //����������������Ϊ�趨��ɫ
                        go(x, y);
                        color(RESULT);
                        printf("%5d", j);
                        x += 5;
                    }
                    else
                    {
                        //������ͨ�������Ϊ�趨��ɫ
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
                //����
            }
        }
        else
            exit(0);
        //��⵽ESC���˳�����

        time_t timep2;
        struct tm *p2;
        time(&timep2);
        p2 = gmtime(&timep2);
        go(0, y);
        color(DEFAULTCOLOR);
        printf("�����ǣ�%04d/%02d/%02d %02d:%02d:%02d", p2->tm_year + 1900, p2->tm_mon + 1, p2->tm_mday,
               (p2->tm_hour + 8 == 24 ? 0 : p2->tm_hour + 8), p2->tm_min, p2->tm_sec);
        //ѭ�������ǰʱ��
    }

    return;
}

void color(int a)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
}

void go(int x, int y)
//����ƶ�������X��ʾ�����꣬Y��ʾ������
{
    COORD coord;
    //����
    coord.X = x;
    coord.Y = y;
    HANDLE a = GetStdHandle(STD_OUTPUT_HANDLE);
    //��ñ�׼������
    SetConsoleCursorPosition(a, coord);
    //�Ա�׼����ľ��Ϊ�������ÿ���̨�������
}
