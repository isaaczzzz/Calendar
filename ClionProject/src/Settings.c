#include "connection.h"
void color(int);
void HourFormat();
void Format();
void PrintTimeZone(int);
void LoadSettings(int[]);
void SetSettings(int[]);
void go(int, int);
void Skins();
void Settings()
{
    int settings[7];
    LoadSettings(settings);

    system("color F9");
    //���ÿ���̨Ĭ����ɫ
    system("chcp 936");
    system("cls");
    int optionpick = 1;
    int start = 0;
    while (1)
    {
        int key = 0;
        if (kbhit())
            key = getch();
        if (key == ENTER)
        {
            switch (optionpick)
            {
            case 1:
                PrintTimeZone(settings[0]);
                break;
            case 2:
                Format();
                break;
            case 3:
                HourFormat();
                break;
            case 4:
                Skins();
                break;
            case 5:
                main();
                break;
            }
        }
        if (key == ARROW)
        {
            if (kbhit())
                key = getch();
            if (key == UP2)
                switch (optionpick)
                {
                case 1:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("���ң�������ʱ������");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("��ʽ����");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24Сʱ��/12Сʱ������");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("�������");
                    go(50, 16);
                    color(HIGHLIGHT);
                    printf("�˳�");
                    optionpick = 5;
                    break;
                case 2:
                    go(50, 0);
                    color(HIGHLIGHT);
                    printf("���ң�������ʱ������");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("��ʽ����");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24Сʱ��/12Сʱ������");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("�������");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("�˳�");
                    optionpick = 1;
                    break;
                case 3:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("���ң�������ʱ������");
                    go(50, 4);
                    color(HIGHLIGHT);
                    printf("��ʽ����");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24Сʱ��/12Сʱ������");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("�������");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("�˳�");
                    optionpick = 2;
                    break;
                case 4:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("���ң�������ʱ������");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("��ʽ����");
                    go(50, 8);
                    color(HIGHLIGHT);
                    printf("24Сʱ��/12Сʱ������");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("�������");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("�˳�");
                    optionpick = 3;
                    break;
                case 5:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("���ң�������ʱ������");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("��ʽ����");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24Сʱ��/12Сʱ������");
                    go(50, 12);
                    color(HIGHLIGHT);
                    printf("�������");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("�˳�");
                    optionpick = 4;
                    break;
                }
            if (key == DOWN2)
                switch (optionpick)
                {
                case 4:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("���ң�������ʱ������");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("��ʽ����");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24Сʱ��/12Сʱ������");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("�������");
                    go(50, 16);
                    color(HIGHLIGHT);
                    printf("�˳�");
                    optionpick = 5;
                    break;
                case 5:
                    go(50, 0);
                    color(HIGHLIGHT);
                    printf("���ң�������ʱ������");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("��ʽ����");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24Сʱ��/12Сʱ������");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("�������");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("�˳�");
                    optionpick = 1;
                    break;
                case 1:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("���ң�������ʱ������");
                    go(50, 4);
                    color(HIGHLIGHT);
                    printf("��ʽ����");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24Сʱ��/12Сʱ������");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("�������");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("�˳�");
                    optionpick = 2;
                    break;
                case 2:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("���ң�������ʱ������");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("��ʽ����");
                    go(50, 8);
                    color(HIGHLIGHT);
                    printf("24Сʱ��/12Сʱ������");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("�������");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("�˳�");
                    optionpick = 3;
                    break;
                case 3:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("���ң�������ʱ������");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("��ʽ����");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24Сʱ��/12Сʱ������");
                    go(50, 12);
                    color(HIGHLIGHT);
                    printf("�������");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("�˳�");
                    optionpick = 4;
                    break;
                }
        }
        if (start == 0)
        {
            start = 1;
            go(50, 0);
            color(HIGHLIGHT);
            printf("���ң�������ʱ������");
            go(50, 4);
            color(DEFAULTCOLOR);
            printf("��ʽ����");
            go(50, 8);
            color(DEFAULTCOLOR);
            printf("24Сʱ��/12Сʱ������");
            go(50, 12);
            color(DEFAULTCOLOR);
            printf("�������");
            go(50, 16);
            color(DEFAULTCOLOR);
            printf("�˳�");
        }
    }
}

void HourFormat()
{
    int hourformat, settings[7];
    while (1)
    {
        system("cls");
        go(50, 8);
        color(DEFAULTCOLOR);
        printf("������Ҫ���õ�Сʱ��ʽ��12/24����");
        scanf("%d", &hourformat);
        if ((hourformat != 12) && (hourformat != 24))
        {
            go(50, 9);
            color(DEFAULTCOLOR);
            printf("��Ч���룬������12��24");
            Sleep(500);
        }
        else
            break;
    }
    LoadSettings(settings);
    settings[2] = hourformat;
    SetSettings(settings);
    main();
}

void Format()
{
    int format, settings[7];
    while (1)
    {
        system("cls");
        go(50, 9);
        color(DEFAULTCOLOR);
        printf("1->YYYY-MM-DD(��2003-05-08)");
        go(50, 10);
        color(DEFAULTCOLOR);
        printf("2->DD-MM-YYYY(��08-05-2003)");
        go(50, 11);
        color(DEFAULTCOLOR);
        printf("3->MM-DD-YYYY(��05-08-2003)");
        go(50, 8);
        color(DEFAULTCOLOR);
        printf("������Ҫ���õ����ڸ�ʽ��");
        scanf("%d", &format);
        if ((format != 1) && (format != 2) && (format != 3))
        {
            go(50, 9);
            color(DEFAULTCOLOR);
            printf("��Ч���룬������1/2/3");
            Sleep(500);
        }
        else
            break;
    }
    LoadSettings(settings);
    settings[1] = format;
    SetSettings(settings);
    main();
}

void PrintTimeZone(int offset)
{
    int optionpicki = 0;
    int optionpickj = 0;
    int start = 0;

    switch (offset)
    {
    case -12:
        optionpicki = 0;
        optionpickj = 0;
        break;

    case -11:
        optionpicki = 1;
        optionpickj = 0;
        break;

    case -10:
        optionpicki = 2;
        optionpickj = 0;
        break;

    case -9:
        optionpicki = 3;
        optionpickj = 0;
        break;

    case -8:
        optionpicki = 4;
        optionpickj = 0;
        break;

    case -7:
        optionpicki = 5;
        optionpickj = 0;
        break;

    case -6:
        optionpicki = 6;
        optionpickj = 0;
        break;

    case -5:
        optionpicki = 7;
        optionpickj = 0;
        break;

    case -4:
        optionpicki = 8;
        optionpickj = 0;
        break;

    case -3:
        optionpicki = 0;
        optionpickj = 1;
        break;

    case -2:
        optionpicki = 1;
        optionpickj = 1;
        break;

    case -1:
        optionpicki = 2;
        optionpickj = 1;
        break;

    case 0:
        optionpicki = 3;
        optionpickj = 1;
        break;

    case 1:
        optionpicki = 4;
        optionpickj = 1;
        break;

    case 2:
        optionpicki = 5;
        optionpickj = 1;
        break;

    case 3:
        optionpicki = 6;
        optionpickj = 1;
        break;

    case 4:
        optionpicki = 7;
        optionpickj = 1;
        break;

    case 5:
        optionpicki = 8;
        optionpickj = 1;
        break;

    case 6:
        optionpicki = 0;
        optionpickj = 2;
        break;

    case 7:
        optionpicki = 1;
        optionpickj = 2;
        break;

    case 8:
        optionpicki = 2;
        optionpickj = 2;
        break;

    case 9:
        optionpicki = 3;
        optionpickj = 2;
        break;

    case 10:
        optionpicki = 4;
        optionpickj = 2;
        break;

    case 11:
        optionpicki = 5;
        optionpickj = 2;
        break;

    case 12:
        optionpicki = 6;
        optionpickj = 2;
        break;

    case 13:
        optionpicki = 7;
        optionpickj = 2;
        break;

    case 14:
        optionpicki = 8;
        optionpickj = 2;
        break;
    }

    system("cls");
    while (1)
    {
        int key = 0;
        if (kbhit())
            key = getch();
        if (key == ESC)
            main();
        if (key == ENTER)
        {
            int settings[7];
            LoadSettings(settings);
            settings[0] = optionpicki + optionpickj * 9 - 12;
            SetSettings(settings);
            main();
        }
        if (key == ARROW || start == 0)
        {
            start = 1;
            if (kbhit())
                key = getch();
            switch (key)
            {
            case UP2:
                optionpickj = (optionpickj == 0) ? 2 : (optionpickj - 1);
                break;

            case DOWN2:
                optionpickj = (optionpickj == 2) ? 0 : (optionpickj + 1);
                break;

            case LEFT2:
                optionpicki = (optionpicki == 0) ? 8 : (optionpicki - 1);
                break;

            case RIGHT2:
                optionpicki = (optionpicki == 8) ? 0 : (optionpicki + 1);
                break;

            default:
                break;
            }
            system("cls");
            go(0, 0);
            if (optionpicki == 0 && optionpickj == 0)
            {
                color(HIGHLIGHT);
                printf("UTC-12");
            }
            else
            {
                color(DEFAULTCOLOR);
                printf("���ʻ�����");
            }
            //utc-12
            go(14, 0);
            if (optionpicki == 1 && optionpickj == 0)
            {
                color(HIGHLIGHT);
                printf("UTC-11");
            }
            else
            {
                color(DEFAULTCOLOR);
                printf("��;��");
            }
            //utc-11
            go(24, 0);
            if (optionpicki == 2 && optionpickj == 0)
            {
                color(HIGHLIGHT);
                printf("UTC-10");
            }
            else
            {
                color(DEFAULTCOLOR);
                printf("������");
            }
            //utc-10
            go(34, 0);
            if (optionpicki == 3 && optionpickj == 0)
            {
                color(HIGHLIGHT);
                printf("UTC-9");
            }
            else
            {
                color(DEFAULTCOLOR);
                printf("����˹��");
            }
            //utc-9
            go(46, 0);
            if (optionpicki == 4 && optionpickj == 0)
            {
                color(HIGHLIGHT);
                printf("UTC-8");
            }
            else
            {
                color(DEFAULTCOLOR);
                printf("̫ƽ��ʱ��");
            }
            //utc-8
            go(60, 0);
            if (optionpicki == 5 && optionpickj == 0)
            {
                color(HIGHLIGHT);
                printf("UTC-7");
            }
            else
            {
                color(DEFAULTCOLOR);
                printf("ɽ��ʱ��");
            }
            //utc-7
            go(72, 0);
            if (optionpicki == 6 && optionpickj == 0)
            {
                color(HIGHLIGHT);
                printf("UTC-6");
            }
            else
            {
                color(DEFAULTCOLOR);
                printf("�в�ʱ��");
            }
            //utc-6
            go(84, 0);
            if (optionpicki == 7 && optionpickj == 0)
            {
                color(HIGHLIGHT);
                printf("UTC-5");
            }
            else
            {
                color(DEFAULTCOLOR);
                printf("����ʱ��");
            }
            //utc-5
            go(96, 0);
            if (optionpicki == 8 && optionpickj == 0)
            {
                color(HIGHLIGHT);
                printf("UTC-4");
            }
            else
            {
                color(DEFAULTCOLOR);
                printf("������ʱ��");
            }
            //utc-4�������������?����
            go(0, 6);
            if (optionpicki == 0 && optionpickj == 1)
            {
                color(HIGHLIGHT);
                printf("UTC-3");
            }
            else
            {
                color(DEFAULTCOLOR);
                printf("��������");
            }
            //utc-3
            go(14, 6);
            if (optionpicki == 1 && optionpickj == 1)
            {
                color(HIGHLIGHT);
                printf("UTC-2");
            }
            else
            {
                color(DEFAULTCOLOR);
                printf("UTC-2");
            }
            //����һ�й�����
            go(24, 6);
            if (optionpicki == 2 && optionpickj == 1)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("UTC-1");
            //���ø���
            go(34, 6);
            if (optionpicki == 3 && optionpickj == 1)
            {
                color(HIGHLIGHT);
                printf("UTC+-0");
            }
            else
            {
                color(DEFAULTCOLOR);
                printf("�׶�");
            }
            //utc+-0
            go(46, 6);
            if (optionpicki == 4 && optionpickj == 1)
            {
                color(HIGHLIGHT);
                printf("UTC+1");
            }
            else
            {
                color(DEFAULTCOLOR);
                printf("����,����");
            }
            //utc+1
            go(60, 6);
            if (optionpicki == 5 && optionpickj == 1)
            {
                color(HIGHLIGHT);
                printf("UTC+2");
            }
            else
            {
                color(DEFAULTCOLOR);
                printf("�ŵ�,����");
            }
            //utc+2
            go(72, 6);
            if (optionpicki == 6 && optionpickj == 1)
            {
                color(HIGHLIGHT);
                printf("UTC+3");
            }
            else
            {
                color(DEFAULTCOLOR);
                printf("Ī˹��");
            }
            //utc+3
            go(84, 6);
            if (optionpicki == 7 && optionpickj == 1)
            {
                color(HIGHLIGHT);
                printf("UTC+4");
            }
            else
            {
                color(DEFAULTCOLOR);
                printf("ë����˹");
            }
            //utc+4
            go(96, 6);
            if (optionpicki == 8 && optionpickj == 1)
            {
                color(HIGHLIGHT);
                printf("UTC+5");
            }
            else
            {
                color(DEFAULTCOLOR);
                printf("�ͻ�˹̹");
            }
            //utc+5
            go(0, 12);
            if (optionpicki == 0 && optionpickj == 2)
            {
                color(HIGHLIGHT);
                printf("UTC+6");
            }
            else
            {
                color(DEFAULTCOLOR);
                printf("�ϼ���");
            }
            //utc+6
            go(14, 12);
            if (optionpicki == 1 && optionpickj == 2)
            {
                color(HIGHLIGHT);
                printf("UTC+7");
            }
            else
            {
                color(DEFAULTCOLOR);
                printf("����");
            }
            //utc+7
            go(24, 12);
            if (optionpicki == 2 && optionpickj == 2)
            {
                color(HIGHLIGHT);
                printf("UTC+8");
            }
            else
            {
                color(DEFAULTCOLOR);
                printf("����");
            }
            //utc+8
            go(34, 12);
            if (optionpicki == 3 && optionpickj == 2)
            {
                color(HIGHLIGHT);
                printf("UTC+9");
            }
            else
            {
                color(DEFAULTCOLOR);
                printf("����");
            }
            //utc+9
            go(46, 12);
            if (optionpicki == 4 && optionpickj == 2)
            {
                color(HIGHLIGHT);
                printf("UTC+10");
            }
            else
            {
                color(DEFAULTCOLOR);
                printf("�ص�");
            }
            //utc+10
            go(60, 12);
            if (optionpicki == 5 && optionpickj == 2)
            {
                color(HIGHLIGHT);
                printf("UTC+11");
            }
            else
            {
                color(DEFAULTCOLOR);
                printf("��Ŭ��ͼ");
            }
            //utc+11
            go(72, 12);
            if (optionpicki == 6 && optionpickj == 2)
            {
                color(HIGHLIGHT);
                printf("UTC+12");
            }
            else
            {
                color(DEFAULTCOLOR);
                printf("쳼�");
            }
            //utc+12
            go(84, 12);
            if (optionpicki == 7 && optionpickj == 2)
            {
                color(HIGHLIGHT);
                printf("UTC+13");
            }
            else
            {
                color(DEFAULTCOLOR);
                printf("�����˹");
            }
            //utc+13
            go(96, 12);
            if (optionpicki == 8 && optionpickj == 2)
            {
                color(HIGHLIGHT);
                printf("UTC+14");
                color(DEFAULTCOLOR);
            }
            else
            {
                color(DEFAULTCOLOR);
                printf("ʥ����");
                color(DEFAULTCOLOR);
            }
            //utc+14
        }
    }
}

void Skins()
{
    int optionpicki = 0;
    int optionpickj = 0;
    int start = 0;
    system("cls");
    while (1)
    {
        int key = 0;
        if (kbhit())
            key = getch();
        if (key == ESC)
            main();
        if (key == ENTER)
        {
            int settings[7];
            LoadSettings(settings);
            if(optionpickj != 1)
                settings[optionpickj + 3] = optionpicki + 1;
            else
                settings[optionpickj + 3] = -1 * (optionpicki + 1);
            SetSettings(settings);
            Skins();
        }
        if (key == ARROW || start == 0)
        {
            start = 1;
            if (kbhit())
                key = getch();
            switch (key)
            {
            case UP2:
                optionpickj = (optionpickj == 0) ? 3 : (optionpickj - 1);
                break;

            case DOWN2:
                optionpickj = (optionpickj == 3) ? 0 : (optionpickj + 1);
                break;

            case LEFT2:
                optionpicki = (optionpicki == 0) ? 7 : (optionpicki - 1);
                break;

            case RIGHT2:
                optionpicki = (optionpicki == 7) ? 0 : (optionpicki + 1);
                break;

            default:
                break;
            }
            color(DEFAULTCOLOR);
            system("cls");
            color(DEFAULTCOLOR);
            go(0, 0);
            printf("�ַ���ɫ");
            go(14, 0);
            if (optionpicki == 0 && optionpickj == 0)
            {
                color(BACKRED);
                printf("��ɫ");
            }
            else
            {
                color(RED);
                printf("��ɫ");
            }
            //utc-12
            go(24, 0);
            if (optionpicki == 1 && optionpickj == 0)
            {
                color(BACKGREEN);
                printf("��ɫ");
            }
            else
            {
                color(GREEN);
                printf("��ɫ");
            }
            //utc-11
            go(34, 0);
            if (optionpicki == 2 && optionpickj == 0)
            {
                color(BACKBLUE);
                printf("��ɫ");
            }
            else
            {
                color(BLUE);
                printf("��ɫ");
            }
            //utc-10
            go(46, 0);
            if (optionpicki == 3 && optionpickj == 0)
            {
                color(BACKYELLOW);
                printf("��ɫ");
            }
            else
            {
                color(YELLOW);
                printf("��ɫ");
            }
            //utc-9
            go(60, 0);
            if (optionpicki == 4 && optionpickj == 0)
            {
                color(BACKPURPLE);
                printf("��ɫ");
            }
            else
            {
                color(PURPLE);
                printf("��ɫ");
            }
            //utc-8
            go(72, 0);
            if (optionpicki == 5 && optionpickj == 0)
            {
                color(BACKGREY);
                printf("��ɫ");
            }
            else
            {
                color(GREY);
                printf("��ɫ");
            }
            //utc-7
            go(84, 0);
            if (optionpicki == 6 && optionpickj == 0)
            {
                color(BACKWHITE);
                printf("��ɫ");
            }
            else
            {
                color(WHITE);
                printf("��ɫ");
            }
            //utc-6
            go(96, 0);
            if (optionpicki == 7 && optionpickj == 0)
            {
                color(BACKBLACK);
                printf("��ɫ");
            }
            else
            {
                color(BLACK);
                printf("��ɫ");
            }
            //utc-5
            go(0, 6);
            color(HIGHLIGHT);
            printf("��ѡ��ǿ����ɫ");
            go(14, 6);
            if (optionpicki == 0 && optionpickj == 1)
            {
                color(BACKRED);
                printf("��ɫ");
            }
            else
            {
                color(RED);
                printf("��ɫ");
            }
            //utc-12
            go(24, 6);
            if (optionpicki == 1 && optionpickj == 1)
            {
                color(BACKGREEN);
                printf("��ɫ");
            }
            else
            {
                color(GREEN);
                printf("��ɫ");
            }
            //utc-11
            go(34, 6);
            if (optionpicki == 2 && optionpickj == 1)
            {
                color(BACKBLUE);
                printf("��ɫ");
            }
            else
            {
                color(BLUE);
                printf("��ɫ");
            }
            //utc-10
            go(46, 6);
            if (optionpicki == 3 && optionpickj == 1)
            {
                color(BACKYELLOW);
                printf("��ɫ");
            }
            else
            {
                color(YELLOW);
                printf("��ɫ");
            }
            //utc-9
            go(60, 6);
            if (optionpicki == 4 && optionpickj == 1)
            {
                color(BACKPURPLE);
                printf("��ɫ");
            }
            else
            {
                color(PURPLE);
                printf("��ɫ");
            }
            //utc-8
            go(72, 6);
            if (optionpicki == 5 && optionpickj == 1)
            {
                color(BACKGREY);
                printf("��ɫ");
            }
            else
            {
                color(GREY);
                printf("��ɫ");
            }
            //utc-7
            go(84, 6);
            if (optionpicki == 6 && optionpickj == 1)
            {
                color(BACKWHITE);
                printf("��ɫ");
            }
            else
            {
                color(WHITE);
                printf("��ɫ");
            }
            //utc-6
            go(96, 6);
            if (optionpicki == 7 && optionpickj == 1)
            {
                color(BACKBLACK);
                printf("��ɫ");
            }
            else
            {
                color(BLACK);
                printf("��ɫ");
            }
            //utc-5
            go(0, 12);
            color(TODAY);
            printf("������ɫ");
            go(14, 12);
            if (optionpicki == 0 && optionpickj == 2)
            {
                color(BACKRED);
                printf("��ɫ");
            }
            else
            {
                color(RED);
                printf("��ɫ");
            }
            //utc-12
            go(24, 12);
            if (optionpicki == 1 && optionpickj == 2)
            {
                color(BACKGREEN);
                printf("��ɫ");
            }
            else
            {
                color(GREEN);
                printf("��ɫ");
            }
            //utc-11
            go(34, 12);
            if (optionpicki == 2 && optionpickj == 2)
            {
                color(BACKBLUE);
                printf("��ɫ");
            }
            else
            {
                color(BLUE);
                printf("��ɫ");
            }
            //utc-10
            go(46, 12);
            if (optionpicki == 3 && optionpickj == 2)
            {
                color(BACKYELLOW);
                printf("��ɫ");
            }
            else
            {
                color(YELLOW);
                printf("��ɫ");
            }
            //utc-9
            go(60, 12);
            if (optionpicki == 4 && optionpickj == 2)
            {
                color(BACKPURPLE);
                printf("��ɫ");
            }
            else
            {
                color(PURPLE);
                printf("��ɫ");
            }
            //utc-8
            go(72, 12);
            if (optionpicki == 5 && optionpickj == 2)
            {
                color(BACKGREY);
                printf("��ɫ");
            }
            else
            {
                color(GREY);
                printf("��ɫ");
            }
            //utc-7
            go(84, 12);
            if (optionpicki == 6 && optionpickj == 2)
            {
                color(BACKWHITE);
                printf("��ɫ");
            }
            else
            {
                color(WHITE);
                printf("��ɫ");
            }
            //utc-6
            go(96, 12);
            if (optionpicki == 7 && optionpickj == 2)
            {
                color(BACKBLACK);
                printf("��ɫ");
            }
            else
            {
                color(BLACK);
                printf("��ɫ");
            }
            //utc-5
            go(0, 18);
            color(RESULT);
            printf("����ѯ����ɫ");
            go(14, 18);
            if (optionpicki == 0 && optionpickj == 3)
            {
                color(BACKRED);
                printf("��ɫ");
            }
            else
            {
                color(RED);
                printf("��ɫ");
            }
            //utc-12
            go(24, 18);
            if (optionpicki == 1 && optionpickj == 3)
            {
                color(BACKGREEN);
                printf("��ɫ");
            }
            else
            {
                color(GREEN);
                printf("��ɫ");
            }
            //utc-11
            go(34, 18);
            if (optionpicki == 2 && optionpickj == 3)
            {
                color(BACKBLUE);
                printf("��ɫ");
            }
            else
            {
                color(BLUE);
                printf("��ɫ");
            }
            //utc-10
            go(46, 18);
            if (optionpicki == 3 && optionpickj == 3)
            {
                color(BACKYELLOW);
                printf("��ɫ");
            }
            else
            {
                color(YELLOW);
                printf("��ɫ");
            }
            //utc-9
            go(60, 18);
            if (optionpicki == 4 && optionpickj == 3)
            {
                color(BACKPURPLE);
                printf("��ɫ");
            }
            else
            {
                color(PURPLE);
                printf("��ɫ");
            }
            //utc-8
            go(72, 18);
            if (optionpicki == 5 && optionpickj == 3)
            {
                color(BACKGREY);
                printf("��ɫ");
            }
            else
            {
                color(GREY);
                printf("��ɫ");
            }
            //utc-7
            go(84, 18);
            if (optionpicki == 6 && optionpickj == 3)
            {
                color(BACKWHITE);
                printf("��ɫ");
            }
            else
            {
                color(WHITE);
                printf("��ɫ");
            }
            //utc-6
            go(96, 18);
            if (optionpicki == 7 && optionpickj == 3)
            {
                color(BACKBLACK);
                printf("��ɫ");
            }
            else
            {
                color(BLACK);
                printf("��ɫ");
            }
            //utc-5
        }
    }
}

void LoadSettings(int a[])
{
    FILE *fp;
    fp = fopen("Settings.dat", "r+");
    if (fp == NULL)
    {
        fclose(fp);
        fp = fopen("Settings.dat", "w+");
        fprintf(fp, "%d,%d,%d,%d,%d,%d,%d", DEFAULTTIMEZONE, DEFAULTFORMAT, DEFAULTHOURFORMAT, 3, -3, 1, 2);
        *a = DEFAULTTIMEZONE;
        *(a + 1) = DEFAULTFORMAT;
        *(a + 2) = DEFAULTHOURFORMAT;
        *(a + 3) = 3;  //BLUE
        *(a + 4) = -3; //BACKBLUE
        *(a + 5) = 1;  //RED
        *(a + 6) = 2;  //GREEN
        fclose(fp);
    }
    else
    {
        fscanf(fp, "%d,%d,%d,%d,%d,%d,%d", a, a + 1, a + 2, a + 3, a + 4, a + 5, a + 6);
        fclose(fp);
    }
}

void SetSettings(int a[7])
{
    FILE *fp;
    fp = fopen("Settings.dat", "w+");
    fprintf(fp, "%d,%d,%d,%d,%d,%d,%d", a[0], a[1], a[2], a[3], a[4], a[5], a[6]);
    fclose(fp);
}
