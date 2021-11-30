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
    //设置控制台默认颜色
    system("chcp 936");

    system("cls");
    //设置编码为GBK并清屏
    CONSOLE_CURSOR_INFO cursor_info = {1, 0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
    //隐藏光标

    int time[6];
    ReturnThisTime(time);
    int year = time[5];
    int mon = time[4] + 1;
    int day = time[3];
    //获取时间并调用printUI函数
    printUI(year, mon, day);
    return 0;
}

//输出指定日期所在日历并绘制UI
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
        //如果键盘被点击则获取键位对应数值
        if (key != ESC)
        {
            if (key == ARROW || (i == mm - 1 && start == 0) || key == ENTER)
            //按下的是方向键，回车键或第一次启动函数则输出日历并判断键位
            {
                system("cls");
                ShowSchedule(yy, mm, dd);
                if (kbhit())
                    key = getch();
                start = 1;
                //标记函数为已经启动过
                if (key == LEFT2)
                    //键盘左键按下
                    if (i != 0)
                        i--;
                    else
                        i = 11, year--;
                if (key == RIGHT2)
                    //键盘右键按下
                    if (i != 11)
                        i++;
                    else
                        i = 0, year++;

                if (key == UP2)
                    //键盘上键按下，选择选项
                    switch (optionpick)
                    {
                    case 1:
                        go(50, 9);
                        color(DefaultColor());
                        printf("番茄钟");
                        go(50, 11);
                        color(DefaultColor());
                        printf("日期查询");
                        go(50, 13);
                        color(DefaultColor());
                        printf("添加日程");
                        go(50, 15);
                        color(DefaultColor());
                        printf("正计时");
                        go(50, 17);
                        color(DefaultColor());
                        printf("设置闹钟");
                        go(50, 19);
                        color(Highlight());
                        printf("↑设置↓");
                        optionpick = 6;
                        break;
                    case 2:
                        go(50, 9);
                        color(Highlight());
                        printf("↑番茄钟↓");
                        go(50, 11);
                        color(DefaultColor());
                        printf("日期查询");
                        go(50, 13);
                        color(DefaultColor());
                        printf("添加日程");
                        go(50, 15);
                        color(DefaultColor());
                        printf("正计时");
                        go(50, 17);
                        color(DefaultColor());
                        printf("设置闹钟");
                        go(50, 19);
                        color(DefaultColor());
                        printf("设置");
                        optionpick = 1;
                        break;
                    case 3:
                        go(50, 9);
                        color(DefaultColor());
                        printf("番茄钟");
                        go(50, 11);
                        color(Highlight());
                        printf("↑日期查询↓");
                        go(50, 13);
                        color(DefaultColor());
                        printf("添加日程");
                        go(50, 15);
                        color(DefaultColor());
                        printf("正计时");
                        go(50, 17);
                        color(DefaultColor());
                        printf("设置闹钟");
                        go(50, 19);
                        color(DefaultColor());
                        printf("设置");
                        optionpick = 2;
                        break;
                    case 4:
                        go(50, 9);
                        color(DefaultColor());
                        printf("番茄钟");
                        go(50, 11);
                        color(DefaultColor());
                        printf("日期查询");
                        go(50, 13);
                        color(Highlight());
                        printf("↑添加日程↓");
                        go(50, 15);
                        color(DefaultColor());
                        printf("正计时");
                        go(50, 17);
                        color(DefaultColor());
                        printf("设置闹钟");
                        go(50, 19);
                        color(DefaultColor());
                        printf("设置");
                        optionpick = 3;
                        break;
                    case 5:
                        go(50, 9);
                        color(DefaultColor());
                        printf("番茄钟");
                        go(50, 11);
                        color(DefaultColor());
                        printf("日期查询");
                        go(50, 13);
                        color(DefaultColor());
                        printf("添加日程");
                        go(50, 15);
                        color(Highlight());
                        printf("↑正计时↓");
                        go(50, 17);
                        color(DefaultColor());
                        printf("设置闹钟");
                        go(50, 19);
                        color(DefaultColor());
                        printf("设置");
                        optionpick = 4;
                        break;
                    case 6:
                        go(50, 9);
                        color(DefaultColor());
                        printf("番茄钟");
                        go(50, 11);
                        color(DefaultColor());
                        printf("日期查询");
                        go(50, 13);
                        color(DefaultColor());
                        printf("添加日程");
                        go(50, 15);
                        color(DefaultColor());
                        printf("正计时");
                        go(50, 17);
                        color(Highlight());
                        printf("↑设置闹钟↓");
                        go(50, 19);
                        color(DefaultColor());
                        printf("设置");
                        optionpick = 5;
                        break;
                    }
                else if (key == DOWN2)
                    //键盘下键按下，选择选项
                    switch (optionpick)
                    {
                    case 5:
                        go(50, 9);
                        color(DefaultColor());
                        printf("番茄钟");
                        go(50, 11);
                        color(DefaultColor());
                        printf("日期查询");
                        go(50, 13);
                        color(DefaultColor());
                        printf("添加日程");
                        go(50, 15);
                        color(DefaultColor());
                        printf("正计时");
                        go(50, 17);
                        color(DefaultColor());
                        printf("设置闹钟");
                        go(50, 19);
                        color(Highlight());
                        printf("↑设置↓");
                        optionpick = 6;
                        break;
                    case 6:
                        go(50, 9);
                        color(Highlight());
                        printf("↑番茄钟↓");
                        go(50, 11);
                        color(DefaultColor());
                        printf("日期查询");
                        go(50, 13);
                        color(DefaultColor());
                        printf("添加日程");
                        go(50, 15);
                        color(DefaultColor());
                        printf("正计时");
                        go(50, 17);
                        color(DefaultColor());
                        printf("设置闹钟");
                        go(50, 19);
                        color(DefaultColor());
                        printf("设置");
                        optionpick = 1;
                        break;
                    case 1:
                        go(50, 9);
                        color(DefaultColor());
                        printf("番茄钟");
                        go(50, 11);
                        color(Highlight());
                        printf("↑日期查询↓");
                        go(50, 13);
                        color(DefaultColor());
                        printf("添加日程");
                        go(50, 15);
                        color(DefaultColor());
                        printf("正计时");
                        go(50, 17);
                        color(DefaultColor());
                        printf("设置闹钟");
                        go(50, 19);
                        color(DefaultColor());
                        printf("设置");
                        optionpick = 2;
                        break;
                    case 2:
                        go(50, 9);
                        color(DefaultColor());
                        printf("番茄钟");
                        go(50, 11);
                        color(DefaultColor());
                        printf("日期查询");
                        go(50, 13);
                        color(Highlight());
                        printf("↑添加日程↓");
                        go(50, 15);
                        color(DefaultColor());
                        printf("正计时");
                        go(50, 17);
                        color(DefaultColor());
                        printf("设置闹钟");
                        go(50, 19);
                        color(DefaultColor());
                        printf("设置");
                        optionpick = 3;
                        break;
                    case 3:
                        go(50, 9);
                        color(DefaultColor());
                        printf("番茄钟");
                        go(50, 11);
                        color(DefaultColor());
                        printf("日期查询");
                        go(50, 13);
                        color(DefaultColor());
                        printf("添加日程");
                        go(50, 15);
                        color(Highlight());
                        printf("↑正计时↓");
                        go(50, 17);
                        color(DefaultColor());
                        printf("设置闹钟");
                        go(50, 19);
                        color(DefaultColor());
                        printf("设置");
                        optionpick = 4;
                        break;
                    case 4:
                        go(50, 9);
                        color(DefaultColor());
                        printf("番茄钟");
                        go(50, 11);
                        color(DefaultColor());
                        printf("日期查询");
                        go(50, 13);
                        color(DefaultColor());
                        printf("添加日程");
                        go(50, 15);
                        color(DefaultColor());
                        printf("正计时");
                        go(50, 17);
                        color(Highlight());
                        printf("↑设置闹钟↓");
                        go(50, 19);
                        color(DefaultColor());
                        printf("设置");
                        optionpick = 5;
                        break;
                    }
                else if (key == ENTER)
                //回车键按下，读取选项并进入对应功能
                {
                    switch (optionpick)
                    {
                    case 1:
                        CountDown();
                        break;
                    case 2:
                        //实现跳转到指定日期功能
                        system("cls");
                        printf("输入要跳转的日期(如2021 11 08):");
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
                    printf("↑番茄钟↓");
                    go(50, 11);
                    color(DefaultColor());
                    printf("日期查询");
                    go(50, 13);
                    color(DefaultColor());
                    printf("添加日程");
                    go(50, 15);
                    color(DefaultColor());
                    printf("正计时");
                    go(50, 17);
                    color(DefaultColor());
                    printf("设置闹钟");
                    go(50, 19);
                    color(DefaultColor());
                    printf("设置");
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
                printf("ENTER选择，ESC退出");
                go(0, 0);
                color(DefaultColor());
                days = NumberOfDays(i, year);

                switch (ReturnFormat())
                {
                case 1:
                    printf("           ←%d年%s→            \n", year, getMonthName(i));
                    break;
                case 2:
                    printf("           ←%s,%d年→            \n", getMonthName(i), year);
                    break;
                case 3:
                    printf("           ←%s,%d年→            \n", getMonthName(i), year);
                    break;
                }

                // 输出年份月份

                printf(" Sun   Mon  Tue  Wed  Thu  Fri  Sat\n");
                // 输出行

                int k;
                int current = dayNumber(1, i + 1, year);
                for (k = 0; k < current; k++)
                {
                    printf("     ");
                    x += 5;
                }
                // 输出空日期

                for (int j = 1; j <= days; j++)
                {
                    if (i == mon - 1 && j == today && year == thisyear)
                    {
                        //输出今天日期为设定颜色
                        go(x, y);
                        color(Today());
                        printf("%5d", j);
                        x += 5;
                    }
                    else if (i == mm - 1 && j == dd && year == yy)
                    {
                        //输出搜索结果的日期为设定颜色
                        go(x, y);
                        color(Result());
                        printf("%5d", j);
                        x += 5;
                    }
                    else
                    {
                        //其他普通日期输出为设定颜色
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
                //换行
            }
        }
        else
            exit(0);
        //检测到ESC则退出程序

        PrintTime(0, y + 1, TimeZone(), 0); //循环输出当前时间
    }
}