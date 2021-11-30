#include "connection.h"

void printUI(int, int, int);

int main(void)
{
    char defaultcolor[2] = "", cl[10] = "COLOR F";
    int settings[7];
    LoadSettings(settings);
    switch (settings[3])
    {
    case 1: //RED
        defaultcolor[0] = 'C';
        break;
    case 2: //GREEN
        defaultcolor[0] = 'A';
        break;
    case 3: //BLUE
        defaultcolor[0] = '9';
        break;
    case 4: //YELLOW
        defaultcolor[0] = '6';
        break;
    case 5: //PURPLE
        defaultcolor[0] = 'D';
        break;
    case 6: //GREY
        defaultcolor[0] = '8';
        break;
    case 7: //DEEPBLUE
        defaultcolor[0] = '1';
        break;
    case 8: //BLACK
        defaultcolor[0] = '0';
        break;
    }
    strcat(cl, defaultcolor);
    printf(cl);
    system(cl);
    //���ÿ���̨Ĭ����ɫ
    system("chcp 936");

    system("cls");
    //���ñ���ΪGBK������
    CONSOLE_CURSOR_INFO cursor_info = {1, 0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
    //���ع��

    int time[6];
    ReturnThisTime(time);
    int year = time[5];
    int mon = time[4] + 1;
    int day = time[3];
    //��ȡʱ�䲢����printUI����
    printUI(year, mon, day);
    return 0;
}

//���ָ��������������������UI
void printUI(int yy, int mm, int dd)
{
    int x = 0, y = 2, time[6];
    ReturnThisTime(time);
    int year = time[5];
    int mon = time[4] + 1;
    int thisyear = time[5];
    int today = time[3];
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
                ShowSchedule(yy, mm, dd);
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
                        go(50, 9);
                        color(DefaultColor());
                        printf("������");
                        go(50, 11);
                        color(DefaultColor());
                        printf("���ڲ�ѯ");
                        go(50, 13);
                        color(DefaultColor());
                        printf("����ճ�");
                        go(50, 15);
                        color(DefaultColor());
                        printf("����ʱ");
                        go(50, 17);
                        color(DefaultColor());
                        printf("��������");
                        go(50, 19);
                        color(Highlight());
                        printf("�����á�");
                        optionpick = 6;
                        break;
                    case 2:
                        go(50, 9);
                        color(Highlight());
                        printf("�������ӡ�");
                        go(50, 11);
                        color(DefaultColor());
                        printf("���ڲ�ѯ");
                        go(50, 13);
                        color(DefaultColor());
                        printf("����ճ�");
                        go(50, 15);
                        color(DefaultColor());
                        printf("����ʱ");
                        go(50, 17);
                        color(DefaultColor());
                        printf("��������");
                        go(50, 19);
                        color(DefaultColor());
                        printf("����");
                        optionpick = 1;
                        break;
                    case 3:
                        go(50, 9);
                        color(DefaultColor());
                        printf("������");
                        go(50, 11);
                        color(Highlight());
                        printf("�����ڲ�ѯ��");
                        go(50, 13);
                        color(DefaultColor());
                        printf("����ճ�");
                        go(50, 15);
                        color(DefaultColor());
                        printf("����ʱ");
                        go(50, 17);
                        color(DefaultColor());
                        printf("��������");
                        go(50, 19);
                        color(DefaultColor());
                        printf("����");
                        optionpick = 2;
                        break;
                    case 4:
                        go(50, 9);
                        color(DefaultColor());
                        printf("������");
                        go(50, 11);
                        color(DefaultColor());
                        printf("���ڲ�ѯ");
                        go(50, 13);
                        color(Highlight());
                        printf("������ճ̡�");
                        go(50, 15);
                        color(DefaultColor());
                        printf("����ʱ");
                        go(50, 17);
                        color(DefaultColor());
                        printf("��������");
                        go(50, 19);
                        color(DefaultColor());
                        printf("����");
                        optionpick = 3;
                        break;
                    case 5:
                        go(50, 9);
                        color(DefaultColor());
                        printf("������");
                        go(50, 11);
                        color(DefaultColor());
                        printf("���ڲ�ѯ");
                        go(50, 13);
                        color(DefaultColor());
                        printf("����ճ�");
                        go(50, 15);
                        color(Highlight());
                        printf("������ʱ��");
                        go(50, 17);
                        color(DefaultColor());
                        printf("��������");
                        go(50, 19);
                        color(DefaultColor());
                        printf("����");
                        optionpick = 4;
                        break;
                    case 6:
                        go(50, 9);
                        color(DefaultColor());
                        printf("������");
                        go(50, 11);
                        color(DefaultColor());
                        printf("���ڲ�ѯ");
                        go(50, 13);
                        color(DefaultColor());
                        printf("����ճ�");
                        go(50, 15);
                        color(DefaultColor());
                        printf("����ʱ");
                        go(50, 17);
                        color(Highlight());
                        printf("���������ӡ�");
                        go(50, 19);
                        color(DefaultColor());
                        printf("����");
                        optionpick = 5;
                        break;
                    }
                else if (key == DOWN2)
                    //�����¼����£�ѡ��ѡ��
                    switch (optionpick)
                    {
                    case 5:
                        go(50, 9);
                        color(DefaultColor());
                        printf("������");
                        go(50, 11);
                        color(DefaultColor());
                        printf("���ڲ�ѯ");
                        go(50, 13);
                        color(DefaultColor());
                        printf("����ճ�");
                        go(50, 15);
                        color(DefaultColor());
                        printf("����ʱ");
                        go(50, 17);
                        color(DefaultColor());
                        printf("��������");
                        go(50, 19);
                        color(Highlight());
                        printf("�����á�");
                        optionpick = 6;
                        break;
                    case 6:
                        go(50, 9);
                        color(Highlight());
                        printf("�������ӡ�");
                        go(50, 11);
                        color(DefaultColor());
                        printf("���ڲ�ѯ");
                        go(50, 13);
                        color(DefaultColor());
                        printf("����ճ�");
                        go(50, 15);
                        color(DefaultColor());
                        printf("����ʱ");
                        go(50, 17);
                        color(DefaultColor());
                        printf("��������");
                        go(50, 19);
                        color(DefaultColor());
                        printf("����");
                        optionpick = 1;
                        break;
                    case 1:
                        go(50, 9);
                        color(DefaultColor());
                        printf("������");
                        go(50, 11);
                        color(Highlight());
                        printf("�����ڲ�ѯ��");
                        go(50, 13);
                        color(DefaultColor());
                        printf("����ճ�");
                        go(50, 15);
                        color(DefaultColor());
                        printf("����ʱ");
                        go(50, 17);
                        color(DefaultColor());
                        printf("��������");
                        go(50, 19);
                        color(DefaultColor());
                        printf("����");
                        optionpick = 2;
                        break;
                    case 2:
                        go(50, 9);
                        color(DefaultColor());
                        printf("������");
                        go(50, 11);
                        color(DefaultColor());
                        printf("���ڲ�ѯ");
                        go(50, 13);
                        color(Highlight());
                        printf("������ճ̡�");
                        go(50, 15);
                        color(DefaultColor());
                        printf("����ʱ");
                        go(50, 17);
                        color(DefaultColor());
                        printf("��������");
                        go(50, 19);
                        color(DefaultColor());
                        printf("����");
                        optionpick = 3;
                        break;
                    case 3:
                        go(50, 9);
                        color(DefaultColor());
                        printf("������");
                        go(50, 11);
                        color(DefaultColor());
                        printf("���ڲ�ѯ");
                        go(50, 13);
                        color(DefaultColor());
                        printf("����ճ�");
                        go(50, 15);
                        color(Highlight());
                        printf("������ʱ��");
                        go(50, 17);
                        color(DefaultColor());
                        printf("��������");
                        go(50, 19);
                        color(DefaultColor());
                        printf("����");
                        optionpick = 4;
                        break;
                    case 4:
                        go(50, 9);
                        color(DefaultColor());
                        printf("������");
                        go(50, 11);
                        color(DefaultColor());
                        printf("���ڲ�ѯ");
                        go(50, 13);
                        color(DefaultColor());
                        printf("����ճ�");
                        go(50, 15);
                        color(DefaultColor());
                        printf("����ʱ");
                        go(50, 17);
                        color(Highlight());
                        printf("���������ӡ�");
                        go(50, 19);
                        color(DefaultColor());
                        printf("����");
                        optionpick = 5;
                        break;
                    }
                else if (key == ENTER)
                //�س������£���ȡѡ������Ӧ����
                {
                    switch (optionpick)
                    {
                    case 1:
                        CountDown();
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
                    go(50, 9);
                    color(Highlight());
                    printf("�������ӡ�");
                    go(50, 11);
                    color(DefaultColor());
                    printf("���ڲ�ѯ");
                    go(50, 13);
                    color(DefaultColor());
                    printf("����ճ�");
                    go(50, 15);
                    color(DefaultColor());
                    printf("����ʱ");
                    go(50, 17);
                    color(DefaultColor());
                    printf("��������");
                    go(50, 19);
                    color(DefaultColor());
                    printf("����");
                    optionpick = 1;
                }
                x = 0;
                y = 2;
                //system("ping -n 2 127.0.0.1>nul");
                go(50, 0);
                color(Highlight());
                printf("TITLE!!!!");
                go(46, 1);
                color(Highlight());
                printf("ENTERѡ��ESC�˳�");
                go(0, 0);
                color(DefaultColor());
                days = NumberOfDays(i, year);

                switch (ReturnFormat())
                {
                case 1:
                    printf("           ��%d��%s��            \n", year, getMonthName(i));
                    break;
                case 2:
                    printf("           ��%s,%d���            \n", getMonthName(i), year);
                    break;
                case 3:
                    printf("           ��%s,%d���            \n", getMonthName(i), year);
                    break;
                }

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
                        color(Today());
                        printf("%5d", j);
                        x += 5;
                    }
                    else if (i == mm - 1 && j == dd && year == yy)
                    {
                        //����������������Ϊ�趨��ɫ
                        go(x, y);
                        color(Result());
                        printf("%5d", j);
                        x += 5;
                    }
                    else
                    {
                        //������ͨ�������Ϊ�趨��ɫ
                        go(x, y);
                        color(DefaultColor());
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

        PrintTime(0, y + 1, TimeZone(), 0); //ѭ�������ǰʱ��
    }
}