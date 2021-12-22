#include "connection.h"
void HourFormat();
void Format();
void PrintTimeZone();
void LoadSettings(int[]);
void SetSettings(int[]);
void Skins();

void Settings()
{
    //设置的主界面，在此选择设置选项
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
                    printf("时区设置");
                    go(50, 8);
                    color(DefaultColor());
                    printf("格式设置");
                    go(50, 12);
                    color(DefaultColor());
                    printf("24小时制/12小时制设置");
                    go(50, 16);
                    color(DefaultColor());
                    printf("外观设置");
                    go(50, 20);
                    color(Highlight());
                    printf("↑退出↓");
                    color(DefaultColor());
                    optionpick = 5;
                    break;
                case 2:
                    system("cls");
                    go(50, 4);
                    color(Highlight());
                    printf("↑时区设置↓");
                    go(50, 8);
                    color(DefaultColor());
                    printf("格式设置");
                    go(50, 12);
                    color(DefaultColor());
                    printf("24小时制/12小时制设置");
                    go(50, 16);
                    color(DefaultColor());
                    printf("外观设置");
                    go(50, 20);
                    color(DefaultColor());
                    printf("退出");
                    color(DefaultColor());
                    optionpick = 1;
                    break;
                case 3:
                    system("cls");
                    go(50, 4);
                    color(DefaultColor());
                    printf("时区设置");
                    go(50, 8);
                    color(Highlight());
                    printf("↑格式设置↓");
                    go(50, 12);
                    color(DefaultColor());
                    printf("24小时制/12小时制设置");
                    go(50, 16);
                    color(DefaultColor());
                    printf("外观设置");
                    go(50, 20);
                    color(DefaultColor());
                    printf("退出");
                    color(DefaultColor());
                    optionpick = 2;
                    break;
                case 4:
                    system("cls");
                    go(50, 4);
                    color(DefaultColor());
                    printf("时区设置");
                    go(50, 8);
                    color(DefaultColor());
                    printf("格式设置");
                    go(50, 12);
                    color(Highlight());
                    printf("↑24小时制/12小时制设置↓");
                    go(50, 16);
                    color(DefaultColor());
                    printf("外观设置");
                    go(50, 20);
                    color(DefaultColor());
                    printf("退出");
                    color(DefaultColor());
                    optionpick = 3;
                    break;
                case 5:
                    system("cls");
                    go(50, 4);
                    color(DefaultColor());
                    printf("时区设置");
                    go(50, 8);
                    color(DefaultColor());
                    printf("格式设置");
                    go(50, 12);
                    color(DefaultColor());
                    printf("24小时制/12小时制设置");
                    go(50, 16);
                    color(Highlight());
                    printf("↑外观设置↓");
                    go(50, 20);
                    color(DefaultColor());
                    printf("退出");
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
                    printf("时区设置");
                    go(50, 8);
                    color(DefaultColor());
                    printf("格式设置");
                    go(50, 12);
                    color(DefaultColor());
                    printf("24小时制/12小时制设置");
                    go(50, 16);
                    color(DefaultColor());
                    printf("外观设置");
                    go(50, 20);
                    color(Highlight());
                    printf("↑退出↓");
                    color(DefaultColor());
                    optionpick = 5;
                    break;
                case 5:
                    system("cls");
                    go(50, 4);
                    color(Highlight());
                    printf("↑时区设置↓");
                    go(50, 8);
                    color(DefaultColor());
                    printf("格式设置");
                    go(50, 12);
                    color(DefaultColor());
                    printf("24小时制/12小时制设置");
                    go(50, 16);
                    color(DefaultColor());
                    printf("外观设置");
                    go(50, 20);
                    color(DefaultColor());
                    printf("退出");
                    color(DefaultColor());
                    optionpick = 1;
                    break;
                case 1:
                    system("cls");
                    go(50, 4);
                    color(DefaultColor());
                    printf("时区设置");
                    go(50, 8);
                    color(Highlight());
                    printf("↑格式设置↓");
                    go(50, 12);
                    color(DefaultColor());
                    printf("24小时制/12小时制设置");
                    go(50, 16);
                    color(DefaultColor());
                    printf("外观设置");
                    go(50, 20);
                    color(DefaultColor());
                    printf("退出");
                    color(DefaultColor());
                    optionpick = 2;
                    break;
                case 2:
                    system("cls");
                    go(50, 4);
                    color(DefaultColor());
                    printf("时区设置");
                    go(50, 8);
                    color(DefaultColor());
                    printf("格式设置");
                    go(50, 12);
                    color(Highlight());
                    printf("↑24小时制/12小时制设置↓");
                    go(50, 16);
                    color(DefaultColor());
                    printf("外观设置");
                    go(50, 20);
                    color(DefaultColor());
                    printf("退出");
                    color(DefaultColor());
                    optionpick = 3;
                    break;
                case 3:
                    system("cls");
                    go(50, 4);
                    color(DefaultColor());
                    printf("时区设置");
                    go(50, 8);
                    color(DefaultColor());
                    printf("格式设置");
                    go(50, 12);
                    color(DefaultColor());
                    printf("24小时制/12小时制设置");
                    go(50, 16);
                    color(Highlight());
                    printf("↑外观设置↓");
                    go(50, 20);
                    color(DefaultColor());
                    printf("退出");
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
            printf("↑时区设置↓");
            go(50, 8);
            color(DefaultColor());
            printf("格式设置");
            go(50, 12);
            color(DefaultColor());
            printf("24小时制/12小时制设置");
            go(50, 16);
            color(DefaultColor());
            printf("外观设置");
            go(50, 20);
            color(DefaultColor());
            printf("退出");
            color(DefaultColor());
        }
    }
}

void HourFormat()
{
    //设置12小时或24小时制
    int hourformat, settings[7];
    while (1)
    {
        system("cls");
        go(50, 8);
        color(DefaultColor());
        printf("输入想要设置的小时格式（12/24）：");
        scanf("%d", &hourformat);
        if ((hourformat != 12) && (hourformat != 24))
        {
            go(50, 9);
            color(DefaultColor());
            printf("无效输入，请输入12或24");
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
    //设置日期格式
    int format, settings[7];
    while (1)
    {
        system("cls");
        go(45, 10);
        color(DefaultColor());
        printf("1->YYYY-MM-DD(如2003-05-08)");
        go(45, 12);
        color(DefaultColor());
        printf("2->DD-MM-YYYY(如08-05-2003)");
        go(45, 14);
        color(DefaultColor());
        printf("3->MM-DD-YYYY(如05-08-2003)");
        go(45, 16);
        color(DefaultColor());
        printf("3->退出");
        go(45, 8);
        color(DefaultColor());
        printf("输入想要设置的日期格式：");
        scanf("%d", &format);
        if ((format != 1) && (format != 2) && (format != 3) && (format != 4))
        {
            go(45, 16);
            color(DefaultColor());
            printf("无效输入，请输入1/2/3/4");
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
    //设置时区
    int optionpicki = 0;
    int optionpickj = 0;
    int start = 0;
    int settings[7];
    LoadSettings(settings);

    //读取设置并设置焦点为设置的时区
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
            //通过位置计算对应时区并存入设置，切换回设置页面
        }
        if (key == ARROW || start == 0)
        {
            //键盘选择选项的实现
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
                printf("国际换日线");
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
                printf("中途岛");
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
                printf("夏威夷");
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
                printf("阿拉斯加");
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
                printf("太平洋时间");
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
                printf("山地时间");
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
                printf("中部时间");
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
                printf("东部时间");
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
                printf("大西洋时间");
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
                printf("巴西利亚");
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
                printf("格陵兰");
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
                printf("佛得角");
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
                printf("伦敦");
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
                printf("柏林,巴黎");
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
                printf("雅典,基辅");
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
                printf("莫斯科");
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
                printf("毛里求斯");
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
                printf("巴基斯坦");
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
                printf("孟加拉");
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
                printf("曼谷");
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
                printf("北京");
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
                printf("东京");
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
                printf("关岛");
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
                printf("瓦努阿图");
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
                printf("斐济");
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
                printf("基里巴斯");
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
                printf("圣诞岛");
                color(DefaultColor());
            }
            //utc+14
        }
    }
}

void Skins()
{
    //设置界面颜色
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
            go(44, 0);
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
            go(54, 0);
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
            go(64, 0);
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
            go(74, 0);
            if (optionpicki == 6 && optionpickj == 0)
            {
                color(BACKDEEPBLUE);
                printf("深蓝色");
            }
            else
            {
                color(DEEPBLUE);
                printf("深蓝色");
            }
            go(86, 0);
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
            go(0, 6);
            color(Highlight());
            printf("强调颜色");
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
            go(44, 6);
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
            go(54, 6);
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
            go(64, 6);
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
            go(74, 6);
            if (optionpicki == 6 && optionpickj == 1)
            {
                color(BACKDEEPBLUE);
                printf("深蓝色");
            }
            else
            {
                color(DEEPBLUE);
                printf("深蓝色");
            }
            go(86, 6);
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
            go(0, 12);
            color(Today());
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
            go(44, 12);
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
            go(54, 12);
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
            go(64, 12);
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
            go(74, 12);
            if (optionpicki == 6 && optionpickj == 2)
            {
                color(BACKDEEPBLUE);
                printf("深蓝色");
            }
            else
            {
                color(DEEPBLUE);
                printf("深蓝色");
            }
            go(86, 12);
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
            go(0, 18);
            color(Result());
            printf("被查颜色");
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
            go(44, 18);
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
            go(54, 18);
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
            go(64, 18);
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
            go(74, 18);
            if (optionpicki == 6 && optionpickj == 3)
            {
                color(BACKDEEPBLUE);
                printf("深蓝色");
            }
            else
            {
                color(DEEPBLUE);
                printf("深蓝色");
            }
            go(86, 18);
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
        }
    }
}

void LoadSettings(int a[])
{
    //读取设置并存入数组
    FILE *fp;
    fp = fopen("Settings.dat", "r+");
    if (fp == NULL)
    //Settings.dat不存在则自动创建
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
    //将设置写入文件
    FILE *fp;
    fp = fopen("Settings.dat", "w+");
    fprintf(fp, "%d,%d,%d,%d,%d,%d,%d", a[0], a[1], a[2], a[3], a[4], a[5], a[6]);
    fclose(fp);
}
