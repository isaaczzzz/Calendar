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
    //设置控制台默认颜色
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
                    printf("国家，地区，时区设置");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("格式设置");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24小时制/12小时制设置");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("外观设置");
                    go(50, 16);
                    color(HIGHLIGHT);
                    printf("退出");
                    optionpick = 5;
                    break;
                case 2:
                    go(50, 0);
                    color(HIGHLIGHT);
                    printf("国家，地区，时区设置");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("格式设置");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24小时制/12小时制设置");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("外观设置");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("退出");
                    optionpick = 1;
                    break;
                case 3:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("国家，地区，时区设置");
                    go(50, 4);
                    color(HIGHLIGHT);
                    printf("格式设置");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24小时制/12小时制设置");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("外观设置");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("退出");
                    optionpick = 2;
                    break;
                case 4:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("国家，地区，时区设置");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("格式设置");
                    go(50, 8);
                    color(HIGHLIGHT);
                    printf("24小时制/12小时制设置");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("外观设置");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("退出");
                    optionpick = 3;
                    break;
                case 5:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("国家，地区，时区设置");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("格式设置");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24小时制/12小时制设置");
                    go(50, 12);
                    color(HIGHLIGHT);
                    printf("外观设置");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("退出");
                    optionpick = 4;
                    break;
                }
            if (key == DOWN2)
                switch (optionpick)
                {
                case 4:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("国家，地区，时区设置");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("格式设置");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24小时制/12小时制设置");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("外观设置");
                    go(50, 16);
                    color(HIGHLIGHT);
                    printf("退出");
                    optionpick = 5;
                    break;
                case 5:
                    go(50, 0);
                    color(HIGHLIGHT);
                    printf("国家，地区，时区设置");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("格式设置");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24小时制/12小时制设置");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("外观设置");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("退出");
                    optionpick = 1;
                    break;
                case 1:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("国家，地区，时区设置");
                    go(50, 4);
                    color(HIGHLIGHT);
                    printf("格式设置");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24小时制/12小时制设置");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("外观设置");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("退出");
                    optionpick = 2;
                    break;
                case 2:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("国家，地区，时区设置");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("格式设置");
                    go(50, 8);
                    color(HIGHLIGHT);
                    printf("24小时制/12小时制设置");
                    go(50, 12);
                    color(DEFAULTCOLOR);
                    printf("外观设置");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("退出");
                    optionpick = 3;
                    break;
                case 3:
                    go(50, 0);
                    color(DEFAULTCOLOR);
                    printf("国家，地区，时区设置");
                    go(50, 4);
                    color(DEFAULTCOLOR);
                    printf("格式设置");
                    go(50, 8);
                    color(DEFAULTCOLOR);
                    printf("24小时制/12小时制设置");
                    go(50, 12);
                    color(HIGHLIGHT);
                    printf("外观设置");
                    go(50, 16);
                    color(DEFAULTCOLOR);
                    printf("退出");
                    optionpick = 4;
                    break;
                }
        }
        if (start == 0)
        {
            start = 1;
            go(50, 0);
            color(HIGHLIGHT);
            printf("国家，地区，时区设置");
            go(50, 4);
            color(DEFAULTCOLOR);
            printf("格式设置");
            go(50, 8);
            color(DEFAULTCOLOR);
            printf("24小时制/12小时制设置");
            go(50, 12);
            color(DEFAULTCOLOR);
            printf("外观设置");
            go(50, 16);
            color(DEFAULTCOLOR);
            printf("退出");
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
        printf("输入想要设置的小时格式（12/24）：");
        scanf("%d", &hourformat);
        if ((hourformat != 12) && (hourformat != 24))
        {
            go(50, 9);
            color(DEFAULTCOLOR);
            printf("无效输入，请输入12或24");
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
        printf("1->YYYY-MM-DD(如2003-05-08)");
        go(50, 10);
        color(DEFAULTCOLOR);
        printf("2->DD-MM-YYYY(如08-05-2003)");
        go(50, 11);
        color(DEFAULTCOLOR);
        printf("3->MM-DD-YYYY(如05-08-2003)");
        go(50, 8);
        color(DEFAULTCOLOR);
        printf("输入想要设置的日期格式：");
        scanf("%d", &format);
        if ((format != 1) && (format != 2) && (format != 3))
        {
            go(50, 9);
            color(DEFAULTCOLOR);
            printf("无效输入，请输入1/2/3");
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
                printf("国际换日线");
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
                printf("中途岛");
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
                printf("夏威夷");
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
                printf("阿拉斯加");
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
                printf("太平洋时间");
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
                printf("山地时间");
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
                printf("中部时间");
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
                printf("东部时间");
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
                printf("大西洋时间");
            }
            //utc-4，还有李金雨你?死了
            go(0, 6);
            if (optionpicki == 0 && optionpickj == 1)
            {
                color(HIGHLIGHT);
                printf("UTC-3");
            }
            else
            {
                color(DEFAULTCOLOR);
                printf("巴西利亚");
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
            //多了一行哈哈哈
            go(24, 6);
            if (optionpicki == 2 && optionpickj == 1)
                color(HIGHLIGHT);
            else
                color(DEFAULTCOLOR);
            printf("UTC-1");
            //懒得改了
            go(34, 6);
            if (optionpicki == 3 && optionpickj == 1)
            {
                color(HIGHLIGHT);
                printf("UTC+-0");
            }
            else
            {
                color(DEFAULTCOLOR);
                printf("伦敦");
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
                printf("柏林,巴黎");
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
                printf("雅典,基辅");
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
                printf("莫斯科");
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
                printf("毛里求斯");
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
                printf("巴基斯坦");
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
                printf("孟加拉");
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
                printf("曼谷");
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
                printf("北京");
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
                printf("东京");
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
                printf("关岛");
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
                printf("瓦努阿图");
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
                printf("斐济");
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
                printf("基里巴斯");
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
                printf("圣诞岛");
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
            printf("字符颜色");
            go(14, 0);
            if (optionpicki == 0 && optionpickj == 0)
            {
                color(BACKRED);
                printf("红色");
            }
            else
            {
                color(RED);
                printf("红色");
            }
            //utc-12
            go(24, 0);
            if (optionpicki == 1 && optionpickj == 0)
            {
                color(BACKGREEN);
                printf("绿色");
            }
            else
            {
                color(GREEN);
                printf("绿色");
            }
            //utc-11
            go(34, 0);
            if (optionpicki == 2 && optionpickj == 0)
            {
                color(BACKBLUE);
                printf("蓝色");
            }
            else
            {
                color(BLUE);
                printf("蓝色");
            }
            //utc-10
            go(46, 0);
            if (optionpicki == 3 && optionpickj == 0)
            {
                color(BACKYELLOW);
                printf("黄色");
            }
            else
            {
                color(YELLOW);
                printf("黄色");
            }
            //utc-9
            go(60, 0);
            if (optionpicki == 4 && optionpickj == 0)
            {
                color(BACKPURPLE);
                printf("紫色");
            }
            else
            {
                color(PURPLE);
                printf("紫色");
            }
            //utc-8
            go(72, 0);
            if (optionpicki == 5 && optionpickj == 0)
            {
                color(BACKGREY);
                printf("灰色");
            }
            else
            {
                color(GREY);
                printf("灰色");
            }
            //utc-7
            go(84, 0);
            if (optionpicki == 6 && optionpickj == 0)
            {
                color(BACKWHITE);
                printf("白色");
            }
            else
            {
                color(WHITE);
                printf("白色");
            }
            //utc-6
            go(96, 0);
            if (optionpicki == 7 && optionpickj == 0)
            {
                color(BACKBLACK);
                printf("黑色");
            }
            else
            {
                color(BLACK);
                printf("黑色");
            }
            //utc-5
            go(0, 6);
            color(HIGHLIGHT);
            printf("被选中强调颜色");
            go(14, 6);
            if (optionpicki == 0 && optionpickj == 1)
            {
                color(BACKRED);
                printf("红色");
            }
            else
            {
                color(RED);
                printf("红色");
            }
            //utc-12
            go(24, 6);
            if (optionpicki == 1 && optionpickj == 1)
            {
                color(BACKGREEN);
                printf("绿色");
            }
            else
            {
                color(GREEN);
                printf("绿色");
            }
            //utc-11
            go(34, 6);
            if (optionpicki == 2 && optionpickj == 1)
            {
                color(BACKBLUE);
                printf("蓝色");
            }
            else
            {
                color(BLUE);
                printf("蓝色");
            }
            //utc-10
            go(46, 6);
            if (optionpicki == 3 && optionpickj == 1)
            {
                color(BACKYELLOW);
                printf("黄色");
            }
            else
            {
                color(YELLOW);
                printf("黄色");
            }
            //utc-9
            go(60, 6);
            if (optionpicki == 4 && optionpickj == 1)
            {
                color(BACKPURPLE);
                printf("紫色");
            }
            else
            {
                color(PURPLE);
                printf("紫色");
            }
            //utc-8
            go(72, 6);
            if (optionpicki == 5 && optionpickj == 1)
            {
                color(BACKGREY);
                printf("灰色");
            }
            else
            {
                color(GREY);
                printf("灰色");
            }
            //utc-7
            go(84, 6);
            if (optionpicki == 6 && optionpickj == 1)
            {
                color(BACKWHITE);
                printf("白色");
            }
            else
            {
                color(WHITE);
                printf("白色");
            }
            //utc-6
            go(96, 6);
            if (optionpicki == 7 && optionpickj == 1)
            {
                color(BACKBLACK);
                printf("黑色");
            }
            else
            {
                color(BLACK);
                printf("黑色");
            }
            //utc-5
            go(0, 12);
            color(TODAY);
            printf("当日颜色");
            go(14, 12);
            if (optionpicki == 0 && optionpickj == 2)
            {
                color(BACKRED);
                printf("红色");
            }
            else
            {
                color(RED);
                printf("红色");
            }
            //utc-12
            go(24, 12);
            if (optionpicki == 1 && optionpickj == 2)
            {
                color(BACKGREEN);
                printf("绿色");
            }
            else
            {
                color(GREEN);
                printf("绿色");
            }
            //utc-11
            go(34, 12);
            if (optionpicki == 2 && optionpickj == 2)
            {
                color(BACKBLUE);
                printf("蓝色");
            }
            else
            {
                color(BLUE);
                printf("蓝色");
            }
            //utc-10
            go(46, 12);
            if (optionpicki == 3 && optionpickj == 2)
            {
                color(BACKYELLOW);
                printf("黄色");
            }
            else
            {
                color(YELLOW);
                printf("黄色");
            }
            //utc-9
            go(60, 12);
            if (optionpicki == 4 && optionpickj == 2)
            {
                color(BACKPURPLE);
                printf("紫色");
            }
            else
            {
                color(PURPLE);
                printf("紫色");
            }
            //utc-8
            go(72, 12);
            if (optionpicki == 5 && optionpickj == 2)
            {
                color(BACKGREY);
                printf("灰色");
            }
            else
            {
                color(GREY);
                printf("灰色");
            }
            //utc-7
            go(84, 12);
            if (optionpicki == 6 && optionpickj == 2)
            {
                color(BACKWHITE);
                printf("白色");
            }
            else
            {
                color(WHITE);
                printf("白色");
            }
            //utc-6
            go(96, 12);
            if (optionpicki == 7 && optionpickj == 2)
            {
                color(BACKBLACK);
                printf("黑色");
            }
            else
            {
                color(BLACK);
                printf("黑色");
            }
            //utc-5
            go(0, 18);
            color(RESULT);
            printf("被查询日颜色");
            go(14, 18);
            if (optionpicki == 0 && optionpickj == 3)
            {
                color(BACKRED);
                printf("红色");
            }
            else
            {
                color(RED);
                printf("红色");
            }
            //utc-12
            go(24, 18);
            if (optionpicki == 1 && optionpickj == 3)
            {
                color(BACKGREEN);
                printf("绿色");
            }
            else
            {
                color(GREEN);
                printf("绿色");
            }
            //utc-11
            go(34, 18);
            if (optionpicki == 2 && optionpickj == 3)
            {
                color(BACKBLUE);
                printf("蓝色");
            }
            else
            {
                color(BLUE);
                printf("蓝色");
            }
            //utc-10
            go(46, 18);
            if (optionpicki == 3 && optionpickj == 3)
            {
                color(BACKYELLOW);
                printf("黄色");
            }
            else
            {
                color(YELLOW);
                printf("黄色");
            }
            //utc-9
            go(60, 18);
            if (optionpicki == 4 && optionpickj == 3)
            {
                color(BACKPURPLE);
                printf("紫色");
            }
            else
            {
                color(PURPLE);
                printf("紫色");
            }
            //utc-8
            go(72, 18);
            if (optionpicki == 5 && optionpickj == 3)
            {
                color(BACKGREY);
                printf("灰色");
            }
            else
            {
                color(GREY);
                printf("灰色");
            }
            //utc-7
            go(84, 18);
            if (optionpicki == 6 && optionpickj == 3)
            {
                color(BACKWHITE);
                printf("白色");
            }
            else
            {
                color(WHITE);
                printf("白色");
            }
            //utc-6
            go(96, 18);
            if (optionpicki == 7 && optionpickj == 3)
            {
                color(BACKBLACK);
                printf("黑色");
            }
            else
            {
                color(BLACK);
                printf("黑色");
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
