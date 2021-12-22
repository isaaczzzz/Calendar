#include "connection.h"
void HourFormat();
void Format();
void PrintTimeZone();
void LoadSettings(int[]);
void SetSettings(int[]);
void Skins();

void Settings()
{
    //���õ������棬�ڴ�ѡ������ѡ��
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
                PrintTimeZone();
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
                    system("cls");
                    go(50, 4);
                    color(DefaultColor());
                    printf("ʱ������");
                    go(50, 8);
                    color(DefaultColor());
                    printf("��ʽ����");
                    go(50, 12);
                    color(DefaultColor());
                    printf("24Сʱ��/12Сʱ������");
                    go(50, 16);
                    color(DefaultColor());
                    printf("�������");
                    go(50, 20);
                    color(Highlight());
                    printf("���˳���");
                    color(DefaultColor());
                    optionpick = 5;
                    break;
                case 2:
                    system("cls");
                    go(50, 4);
                    color(Highlight());
                    printf("��ʱ�����á�");
                    go(50, 8);
                    color(DefaultColor());
                    printf("��ʽ����");
                    go(50, 12);
                    color(DefaultColor());
                    printf("24Сʱ��/12Сʱ������");
                    go(50, 16);
                    color(DefaultColor());
                    printf("�������");
                    go(50, 20);
                    color(DefaultColor());
                    printf("�˳�");
                    color(DefaultColor());
                    optionpick = 1;
                    break;
                case 3:
                    system("cls");
                    go(50, 4);
                    color(DefaultColor());
                    printf("ʱ������");
                    go(50, 8);
                    color(Highlight());
                    printf("����ʽ���á�");
                    go(50, 12);
                    color(DefaultColor());
                    printf("24Сʱ��/12Сʱ������");
                    go(50, 16);
                    color(DefaultColor());
                    printf("�������");
                    go(50, 20);
                    color(DefaultColor());
                    printf("�˳�");
                    color(DefaultColor());
                    optionpick = 2;
                    break;
                case 4:
                    system("cls");
                    go(50, 4);
                    color(DefaultColor());
                    printf("ʱ������");
                    go(50, 8);
                    color(DefaultColor());
                    printf("��ʽ����");
                    go(50, 12);
                    color(Highlight());
                    printf("��24Сʱ��/12Сʱ�����á�");
                    go(50, 16);
                    color(DefaultColor());
                    printf("�������");
                    go(50, 20);
                    color(DefaultColor());
                    printf("�˳�");
                    color(DefaultColor());
                    optionpick = 3;
                    break;
                case 5:
                    system("cls");
                    go(50, 4);
                    color(DefaultColor());
                    printf("ʱ������");
                    go(50, 8);
                    color(DefaultColor());
                    printf("��ʽ����");
                    go(50, 12);
                    color(DefaultColor());
                    printf("24Сʱ��/12Сʱ������");
                    go(50, 16);
                    color(Highlight());
                    printf("��������á�");
                    go(50, 20);
                    color(DefaultColor());
                    printf("�˳�");
                    color(DefaultColor());
                    optionpick = 4;
                    break;
                }
            if (key == DOWN2)
                switch (optionpick)
                {
                case 4:
                    system("cls");
                    go(50, 4);
                    color(DefaultColor());
                    printf("ʱ������");
                    go(50, 8);
                    color(DefaultColor());
                    printf("��ʽ����");
                    go(50, 12);
                    color(DefaultColor());
                    printf("24Сʱ��/12Сʱ������");
                    go(50, 16);
                    color(DefaultColor());
                    printf("�������");
                    go(50, 20);
                    color(Highlight());
                    printf("���˳���");
                    color(DefaultColor());
                    optionpick = 5;
                    break;
                case 5:
                    system("cls");
                    go(50, 4);
                    color(Highlight());
                    printf("��ʱ�����á�");
                    go(50, 8);
                    color(DefaultColor());
                    printf("��ʽ����");
                    go(50, 12);
                    color(DefaultColor());
                    printf("24Сʱ��/12Сʱ������");
                    go(50, 16);
                    color(DefaultColor());
                    printf("�������");
                    go(50, 20);
                    color(DefaultColor());
                    printf("�˳�");
                    color(DefaultColor());
                    optionpick = 1;
                    break;
                case 1:
                    system("cls");
                    go(50, 4);
                    color(DefaultColor());
                    printf("ʱ������");
                    go(50, 8);
                    color(Highlight());
                    printf("����ʽ���á�");
                    go(50, 12);
                    color(DefaultColor());
                    printf("24Сʱ��/12Сʱ������");
                    go(50, 16);
                    color(DefaultColor());
                    printf("�������");
                    go(50, 20);
                    color(DefaultColor());
                    printf("�˳�");
                    color(DefaultColor());
                    optionpick = 2;
                    break;
                case 2:
                    system("cls");
                    go(50, 4);
                    color(DefaultColor());
                    printf("ʱ������");
                    go(50, 8);
                    color(DefaultColor());
                    printf("��ʽ����");
                    go(50, 12);
                    color(Highlight());
                    printf("��24Сʱ��/12Сʱ�����á�");
                    go(50, 16);
                    color(DefaultColor());
                    printf("�������");
                    go(50, 20);
                    color(DefaultColor());
                    printf("�˳�");
                    color(DefaultColor());
                    optionpick = 3;
                    break;
                case 3:
                    system("cls");
                    go(50, 4);
                    color(DefaultColor());
                    printf("ʱ������");
                    go(50, 8);
                    color(DefaultColor());
                    printf("��ʽ����");
                    go(50, 12);
                    color(DefaultColor());
                    printf("24Сʱ��/12Сʱ������");
                    go(50, 16);
                    color(Highlight());
                    printf("��������á�");
                    go(50, 20);
                    color(DefaultColor());
                    printf("�˳�");
                    color(DefaultColor());
                    optionpick = 4;
                    break;
                }
        }
        if (start == 0)
        {
            start = 1;
            system("cls");
            go(50, 4);
            color(Highlight());
            printf("��ʱ�����á�");
            go(50, 8);
            color(DefaultColor());
            printf("��ʽ����");
            go(50, 12);
            color(DefaultColor());
            printf("24Сʱ��/12Сʱ������");
            go(50, 16);
            color(DefaultColor());
            printf("�������");
            go(50, 20);
            color(DefaultColor());
            printf("�˳�");
            color(DefaultColor());
        }
    }
}

void HourFormat()
{
    //����12Сʱ��24Сʱ��
    int hourformat, settings[7];
    while (1)
    {
        system("cls");
        go(50, 8);
        color(DefaultColor());
        printf("������Ҫ���õ�Сʱ��ʽ��12/24����");
        scanf("%d", &hourformat);
        if ((hourformat != 12) && (hourformat != 24))
        {
            go(50, 9);
            color(DefaultColor());
            printf("��Ч���룬������12��24");
            Sleep(1500);
        }
        else
            break;
    }
    LoadSettings(settings);
    settings[2] = hourformat;
    SetSettings(settings);
    Settings();
}

void Format()
{
    //�������ڸ�ʽ
    int format, settings[7];
    while (1)
    {
        system("cls");
        go(45, 10);
        color(DefaultColor());
        printf("1->YYYY-MM-DD(��2003-05-08)");
        go(45, 12);
        color(DefaultColor());
        printf("2->DD-MM-YYYY(��08-05-2003)");
        go(45, 14);
        color(DefaultColor());
        printf("3->MM-DD-YYYY(��05-08-2003)");
        go(45, 16);
        color(DefaultColor());
        printf("3->�˳�");
        go(45, 8);
        color(DefaultColor());
        printf("������Ҫ���õ����ڸ�ʽ��");
        scanf("%d", &format);
        if ((format != 1) && (format != 2) && (format != 3) && (format != 4))
        {
            go(45, 16);
            color(DefaultColor());
            printf("��Ч���룬������1/2/3/4");
            Sleep(1500);
        }
        else
            break;
    }
    if (format == 4)
        Settings();
    LoadSettings(settings);
    settings[1] = format;
    SetSettings(settings);
    Settings();
}

void PrintTimeZone()
{
    //����ʱ��
    int optionpicki = 0;
    int optionpickj = 0;
    int start = 0;
    int settings[7];
    LoadSettings(settings);

    //��ȡ���ò����ý���Ϊ���õ�ʱ��
    switch (settings[0])
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
            Settings();
        if (key == ENTER)
        {
            settings[0] = optionpicki + optionpickj * 9 - 12;
            SetSettings(settings);
            Settings();
            //ͨ��λ�ü����Ӧʱ�����������ã��л�������ҳ��
        }
        if (key == ARROW || start == 0)
        {
            //����ѡ��ѡ���ʵ��
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
            go(0, 6);
            if (optionpicki == 0 && optionpickj == 0)
            {
                color(Highlight());
                printf("UTC-12");
            }
            else
            {
                color(DefaultColor());
                printf("���ʻ�����");
            }
            //utc-12
            go(14, 6);
            if (optionpicki == 1 && optionpickj == 0)
            {
                color(Highlight());
                printf("UTC-11");
            }
            else
            {
                color(DefaultColor());
                printf("��;��");
            }
            //utc-11
            go(24, 6);
            if (optionpicki == 2 && optionpickj == 0)
            {
                color(Highlight());
                printf("UTC-10");
            }
            else
            {
                color(DefaultColor());
                printf("������");
            }
            //utc-10
            go(34, 6);
            if (optionpicki == 3 && optionpickj == 0)
            {
                color(Highlight());
                printf("UTC-9");
            }
            else
            {
                color(DefaultColor());
                printf("����˹��");
            }
            //utc-9
            go(46, 6);
            if (optionpicki == 4 && optionpickj == 0)
            {
                color(Highlight());
                printf("UTC-8");
            }
            else
            {
                color(DefaultColor());
                printf("̫ƽ��ʱ��");
            }
            //utc-8
            go(60, 6);
            if (optionpicki == 5 && optionpickj == 0)
            {
                color(Highlight());
                printf("UTC-7");
            }
            else
            {
                color(DefaultColor());
                printf("ɽ��ʱ��");
            }
            //utc-7
            go(72, 6);
            if (optionpicki == 6 && optionpickj == 0)
            {
                color(Highlight());
                printf("UTC-6");
            }
            else
            {
                color(DefaultColor());
                printf("�в�ʱ��");
            }
            //utc-6
            go(84, 6);
            if (optionpicki == 7 && optionpickj == 0)
            {
                color(Highlight());
                printf("UTC-5");
            }
            else
            {
                color(DefaultColor());
                printf("����ʱ��");
            }
            //utc-5
            go(96, 6);
            if (optionpicki == 8 && optionpickj == 0)
            {
                color(Highlight());
                printf("UTC-4");
            }
            else
            {
                color(DefaultColor());
                printf("������ʱ��");
            }
            //utc-4
            go(0, 12);
            if (optionpicki == 0 && optionpickj == 1)
            {
                color(Highlight());
                printf("UTC-3");
            }
            else
            {
                color(DefaultColor());
                printf("��������");
            }
            //utc-3
            go(14, 12);
            if (optionpicki == 1 && optionpickj == 1)
            {
                color(Highlight());
                printf("UTC-2");
            }
            else
            {
                color(DefaultColor());
                printf("������");
            }
            //utc-2
            go(24, 12);
            if (optionpicki == 2 && optionpickj == 1)
            {
                color(Highlight());
                printf("UTC-1");
            }
            else
            {
                color(DefaultColor());
                printf("��ý�");
            } //utc-1
            go(34, 12);
            if (optionpicki == 3 && optionpickj == 1)
            {
                color(Highlight());
                printf("UTC+-0");
            }
            else
            {
                color(DefaultColor());
                printf("�׶�");
            }
            //utc+-0
            go(46, 12);
            if (optionpicki == 4 && optionpickj == 1)
            {
                color(Highlight());
                printf("UTC+1");
            }
            else
            {
                color(DefaultColor());
                printf("����,����");
            }
            //utc+1
            go(60, 12);
            if (optionpicki == 5 && optionpickj == 1)
            {
                color(Highlight());
                printf("UTC+2");
            }
            else
            {
                color(DefaultColor());
                printf("�ŵ�,����");
            }
            //utc+2
            go(72, 12);
            if (optionpicki == 6 && optionpickj == 1)
            {
                color(Highlight());
                printf("UTC+3");
            }
            else
            {
                color(DefaultColor());
                printf("Ī˹��");
            }
            //utc+3
            go(84, 12);
            if (optionpicki == 7 && optionpickj == 1)
            {
                color(Highlight());
                printf("UTC+4");
            }
            else
            {
                color(DefaultColor());
                printf("ë����˹");
            }
            //utc+4
            go(96, 12);
            if (optionpicki == 8 && optionpickj == 1)
            {
                color(Highlight());
                printf("UTC+5");
            }
            else
            {
                color(DefaultColor());
                printf("�ͻ�˹̹");
            }
            //utc+5
            go(0, 18);
            if (optionpicki == 0 && optionpickj == 2)
            {
                color(Highlight());
                printf("UTC+6");
            }
            else
            {
                color(DefaultColor());
                printf("�ϼ���");
            }
            //utc+6
            go(14, 18);
            if (optionpicki == 1 && optionpickj == 2)
            {
                color(Highlight());
                printf("UTC+7");
            }
            else
            {
                color(DefaultColor());
                printf("����");
            }
            //utc+7
            go(24, 18);
            if (optionpicki == 2 && optionpickj == 2)
            {
                color(Highlight());
                printf("UTC+8");
            }
            else
            {
                color(DefaultColor());
                printf("����");
            }
            //utc+8
            go(34, 18);
            if (optionpicki == 3 && optionpickj == 2)
            {
                color(Highlight());
                printf("UTC+9");
            }
            else
            {
                color(DefaultColor());
                printf("����");
            }
            //utc+9
            go(46, 18);
            if (optionpicki == 4 && optionpickj == 2)
            {
                color(Highlight());
                printf("UTC+10");
            }
            else
            {
                color(DefaultColor());
                printf("�ص�");
            }
            //utc+10
            go(60, 18);
            if (optionpicki == 5 && optionpickj == 2)
            {
                color(Highlight());
                printf("UTC+11");
            }
            else
            {
                color(DefaultColor());
                printf("��Ŭ��ͼ");
            }
            //utc+11
            go(72, 18);
            if (optionpicki == 6 && optionpickj == 2)
            {
                color(Highlight());
                printf("UTC+12");
            }
            else
            {
                color(DefaultColor());
                printf("쳼�");
            }
            //utc+12
            go(84, 18);
            if (optionpicki == 7 && optionpickj == 2)
            {
                color(Highlight());
                printf("UTC+13");
            }
            else
            {
                color(DefaultColor());
                printf("�����˹");
            }
            //utc+13
            go(96, 18);
            if (optionpicki == 8 && optionpickj == 2)
            {
                color(Highlight());
                printf("UTC+14");
                color(DefaultColor());
            }
            else
            {
                color(DefaultColor());
                printf("ʥ����");
                color(DefaultColor());
            }
            //utc+14
        }
    }
}

void Skins()
{
    //���ý�����ɫ
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
            if (optionpickj != 1)
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
            color(DefaultColor());
            system("cls");
            color(DefaultColor());
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
            go(44, 0);
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
            go(54, 0);
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
            go(64, 0);
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
            go(74, 0);
            if (optionpicki == 6 && optionpickj == 0)
            {
                color(BACKDEEPBLUE);
                printf("����ɫ");
            }
            else
            {
                color(DEEPBLUE);
                printf("����ɫ");
            }
            go(86, 0);
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
            go(0, 6);
            color(Highlight());
            printf("ǿ����ɫ");
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
            go(44, 6);
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
            go(54, 6);
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
            go(64, 6);
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
            go(74, 6);
            if (optionpicki == 6 && optionpickj == 1)
            {
                color(BACKDEEPBLUE);
                printf("����ɫ");
            }
            else
            {
                color(DEEPBLUE);
                printf("����ɫ");
            }
            go(86, 6);
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
            go(0, 12);
            color(Today());
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
            go(44, 12);
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
            go(54, 12);
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
            go(64, 12);
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
            go(74, 12);
            if (optionpicki == 6 && optionpickj == 2)
            {
                color(BACKDEEPBLUE);
                printf("����ɫ");
            }
            else
            {
                color(DEEPBLUE);
                printf("����ɫ");
            }
            go(86, 12);
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
            go(0, 18);
            color(Result());
            printf("������ɫ");
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
            go(44, 18);
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
            go(54, 18);
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
            go(64, 18);
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
            go(74, 18);
            if (optionpicki == 6 && optionpickj == 3)
            {
                color(BACKDEEPBLUE);
                printf("����ɫ");
            }
            else
            {
                color(DEEPBLUE);
                printf("����ɫ");
            }
            go(86, 18);
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
        }
    }
}

void LoadSettings(int a[])
{
    //��ȡ���ò���������
    FILE *fp;
    fp = fopen("Settings.dat", "r+");
    if (fp == NULL)
    //Settings.dat���������Զ�����
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
    //������д���ļ�
    FILE *fp;
    fp = fopen("Settings.dat", "w+");
    fprintf(fp, "%d,%d,%d,%d,%d,%d,%d", a[0], a[1], a[2], a[3], a[4], a[5], a[6]);
    fclose(fp);
}
